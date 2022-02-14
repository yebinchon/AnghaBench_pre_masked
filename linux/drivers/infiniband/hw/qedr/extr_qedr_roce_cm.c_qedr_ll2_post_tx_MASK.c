
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qedr_dev {int gsi_ll2_handle; int rdma_ctx; TYPE_3__* ops; TYPE_1__* pdev; } ;
struct TYPE_6__ {int baddr; int vaddr; int len; } ;
struct qed_roce_ll2_packet {scalar_t__ roce_mode; int n_seg; TYPE_4__* payload; TYPE_2__ header; int tx_dest; } ;
struct qed_ll2_tx_pkt_info {int enable_ip_cksum; int num_of_bds; int qed_roce_flavor; struct qed_roce_ll2_packet* cookie; int first_frag_len; int first_frag; int tx_dest; scalar_t__ vlan; } ;
typedef int ll2_tx_pkt ;
typedef enum qed_ll2_roce_flavor_type { ____Placeholder_qed_ll2_roce_flavor_type } qed_ll2_roce_flavor_type ;
struct TYPE_8__ {int len; int baddr; } ;
struct TYPE_7__ {int (* ll2_prepare_tx_packet ) (int ,int ,struct qed_ll2_tx_pkt_info*,int) ;int (* ll2_set_fragment_of_tx_packet ) (int ,int ,int ,int ) ;} ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (struct qedr_dev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct qed_roce_ll2_packet*) ;
 int FUNC_3 (struct qed_ll2_tx_pkt_info*,int ,int) ;
 int FUNC_4 (int ,int ,struct qed_ll2_tx_pkt_info*,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct qedr_dev *VAR_4,
       struct qed_roce_ll2_packet *VAR_5)
{
 enum qed_ll2_roce_flavor_type VAR_6;
 struct qed_ll2_tx_pkt_info VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));

 VAR_6 = (VAR_5->roce_mode == VAR_2) ?
     VAR_0 : VAR_1;

 if (VAR_5->roce_mode == VAR_3)
  VAR_7.enable_ip_cksum = 1;

 VAR_7.num_of_bds = 1 + VAR_5->n_seg;
 VAR_7.vlan = 0;
 VAR_7.tx_dest = VAR_5->tx_dest;
 VAR_7.qed_roce_flavor = VAR_6;
 VAR_7.first_frag = VAR_5->header.baddr;
 VAR_7.first_frag_len = VAR_5->header.len;
 VAR_7.cookie = VAR_5;


 VAR_8 = VAR_4->ops->ll2_prepare_tx_packet(VAR_4->rdma_ctx,
          VAR_4->gsi_ll2_handle,
          &VAR_7, 1);
 if (VAR_8) {

  FUNC_1(&VAR_4->pdev->dev, VAR_5->header.len,
      VAR_5->header.vaddr, VAR_5->header.baddr);
  FUNC_2(VAR_5);

  FUNC_0(VAR_4, "roce ll2 tx: header failed (rc=%d)\n", VAR_8);
  return VAR_8;
 }


 for (VAR_9 = 0; VAR_9 < VAR_5->n_seg; VAR_9++) {
  VAR_8 = VAR_4->ops->ll2_set_fragment_of_tx_packet(
   VAR_4->rdma_ctx,
   VAR_4->gsi_ll2_handle,
   VAR_5->payload[VAR_9].baddr,
   VAR_5->payload[VAR_9].len);

  if (VAR_8) {




   FUNC_0(VAR_4, "ll2 tx: payload failed (rc=%d)\n", VAR_8);
   return VAR_8;
  }
 }

 return 0;
}
