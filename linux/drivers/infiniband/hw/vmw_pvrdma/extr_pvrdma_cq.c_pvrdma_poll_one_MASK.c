
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pvrdma_qp {int ibqp; } ;
struct pvrdma_dev {scalar_t__* qp_tbl; TYPE_1__* pdev; } ;
struct pvrdma_cqe {int qp; int network_hdr_type; int vendor_err; int port_num; int dlid_path_bits; int sl; int slid; int pkey_index; int wc_flags; int src_qp; int imm_data; int byte_len; int wr_id; int status; int opcode; } ;
struct TYPE_9__ {int cqe; int device; } ;
struct pvrdma_cq {int cq_handle; TYPE_4__ ibcq; TYPE_3__* ring_state; } ;
struct TYPE_7__ {int imm_data; } ;
struct ib_wc {int network_hdr_type; int vendor_err; int port_num; int dlid_path_bits; int sl; int slid; int pkey_index; int wc_flags; int src_qp; TYPE_2__ ex; int byte_len; int * qp; int wr_id; int status; int opcode; } ;
struct TYPE_10__ {int cons_head; } ;
struct TYPE_8__ {TYPE_5__ rx; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct pvrdma_cqe* FUNC_1 (struct pvrdma_cq*,unsigned int) ;
 int FUNC_2 (TYPE_5__*,int ,unsigned int*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pvrdma_dev*,int) ;
 int FUNC_8 () ;
 struct pvrdma_dev* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct pvrdma_cq *VAR_3, struct pvrdma_qp **VAR_4,
      struct ib_wc *VAR_5)
{
 struct pvrdma_dev *VAR_6 = FUNC_9(VAR_3->ibcq.device);
 int VAR_7;
 unsigned int VAR_8;
 bool VAR_9 = 0;
 struct pvrdma_cqe *VAR_10;

retry:
 VAR_7 = FUNC_2(&VAR_3->ring_state->rx,
         VAR_3->ibcq.cqe, &VAR_8);
 if (VAR_7 == 0) {
  if (VAR_9)
   return -VAR_0;

  FUNC_7(VAR_6, VAR_3->cq_handle | VAR_2);

  VAR_9 = 1;
  goto retry;
 } else if (VAR_7 == VAR_1) {
  FUNC_0(&VAR_6->pdev->dev, "CQ ring state invalid\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_1(VAR_3, VAR_8);


 FUNC_8();
 if (VAR_6->qp_tbl[VAR_10->qp & 0xffff])
  *VAR_4 = (struct pvrdma_qp *)VAR_6->qp_tbl[VAR_10->qp & 0xffff];
 else
  return -VAR_0;

 VAR_5->opcode = FUNC_5(VAR_10->opcode);
 VAR_5->status = FUNC_6(VAR_10->status);
 VAR_5->wr_id = VAR_10->wr_id;
 VAR_5->qp = &(*VAR_4)->ibqp;
 VAR_5->byte_len = VAR_10->byte_len;
 VAR_5->ex.imm_data = VAR_10->imm_data;
 VAR_5->src_qp = VAR_10->src_qp;
 VAR_5->wc_flags = FUNC_4(VAR_10->wc_flags);
 VAR_5->pkey_index = VAR_10->pkey_index;
 VAR_5->slid = VAR_10->slid;
 VAR_5->sl = VAR_10->sl;
 VAR_5->dlid_path_bits = VAR_10->dlid_path_bits;
 VAR_5->port_num = VAR_10->port_num;
 VAR_5->vendor_err = VAR_10->vendor_err;
 VAR_5->network_hdr_type = VAR_10->network_hdr_type;


 FUNC_3(&VAR_3->ring_state->rx.cons_head, VAR_3->ibcq.cqe);

 return 0;
}
