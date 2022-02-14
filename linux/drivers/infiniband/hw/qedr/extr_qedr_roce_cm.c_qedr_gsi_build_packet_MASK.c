
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct qedr_qp {int dummy; } ;
struct qedr_dev {struct pci_dev* pdev; } ;
struct TYPE_6__ {int len; int vaddr; int baddr; } ;
struct qed_roce_ll2_packet {int roce_mode; int n_seg; TYPE_3__* payload; TYPE_2__ header; int tx_dest; } ;
struct pci_dev {int dev; } ;
struct TYPE_5__ {int dmac_h; int smac_h; } ;
struct ib_ud_header {TYPE_1__ eth; } ;
struct ib_send_wr {int num_sge; TYPE_4__* sg_list; } ;
struct TYPE_8__ {int length; int addr; } ;
struct TYPE_7__ {int len; int baddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ib_ud_header*,int **) ;
 int FUNC_3 (struct qed_roce_ll2_packet*) ;
 struct qed_roce_ll2_packet* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct qedr_dev*,struct qedr_qp*,struct ib_send_wr const*,struct ib_ud_header*,int*) ;

__attribute__((used)) static inline int FUNC_7(struct qedr_dev *VAR_5,
     struct qedr_qp *VAR_6,
     const struct ib_send_wr *VAR_7,
     struct qed_roce_ll2_packet **VAR_8)
{
 u8 VAR_9[VAR_2];
 struct qed_roce_ll2_packet *VAR_10;
 struct pci_dev *VAR_11 = VAR_5->pdev;
 int VAR_12, VAR_13;
 struct ib_ud_header VAR_14;
 int VAR_15, VAR_16;

 *VAR_8 = ((void*)0);

 VAR_16 = FUNC_6(VAR_5, VAR_6, VAR_7, &VAR_14, &VAR_12);
 if (VAR_16)
  return VAR_16;

 VAR_13 = FUNC_2(&VAR_14, &VAR_9);

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->header.vaddr = FUNC_0(&VAR_11->dev, VAR_13,
        &VAR_10->header.baddr,
        VAR_1);
 if (!VAR_10->header.vaddr) {
  FUNC_3(VAR_10);
  return -VAR_0;
 }

 if (FUNC_1(VAR_14.eth.smac_h, VAR_14.eth.dmac_h))
  VAR_10->tx_dest = VAR_3;
 else
  VAR_10->tx_dest = VAR_4;

 VAR_10->roce_mode = VAR_12;
 FUNC_5(VAR_10->header.vaddr, VAR_9, VAR_13);
 VAR_10->header.len = VAR_13;
 VAR_10->n_seg = VAR_7->num_sge;
 for (VAR_15 = 0; VAR_15 < VAR_10->n_seg; VAR_15++) {
  VAR_10->payload[VAR_15].baddr = VAR_7->sg_list[VAR_15].addr;
  VAR_10->payload[VAR_15].len = VAR_7->sg_list[VAR_15].length;
 }

 *VAR_8 = VAR_10;

 return 0;
}
