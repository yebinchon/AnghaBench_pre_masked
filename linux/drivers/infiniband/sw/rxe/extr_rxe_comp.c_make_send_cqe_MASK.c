
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
struct TYPE_4__ {scalar_t__ opcode; int wr_id; } ;
struct rxe_send_wqe {TYPE_2__ dma; TYPE_1__ wr; int status; } ;
struct TYPE_6__ {int qp_num; } ;
struct rxe_qp {TYPE_3__ ibqp; int is_user; } ;
struct ib_uverbs_wc {int qp_num; int byte_len; void* wc_flags; void* opcode; int status; int wr_id; } ;
struct ib_wc {TYPE_3__* qp; int byte_len; void* wc_flags; void* opcode; int status; int wr_id; } ;
struct rxe_cqe {struct ib_uverbs_wc uibwc; struct ib_wc ibwc; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rxe_cqe*,int ,int) ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rxe_qp *VAR_3, struct rxe_send_wqe *VAR_4,
     struct rxe_cqe *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 if (!VAR_3->is_user) {
  struct ib_wc *VAR_6 = &VAR_5->ibwc;

  VAR_6->wr_id = VAR_4->wr.wr_id;
  VAR_6->status = VAR_4->status;
  VAR_6->opcode = FUNC_1(VAR_4->wr.opcode);
  if (VAR_4->wr.opcode == VAR_1 ||
      VAR_4->wr.opcode == VAR_2)
   VAR_6->wc_flags = VAR_0;
  VAR_6->byte_len = VAR_4->dma.length;
  VAR_6->qp = &VAR_3->ibqp;
 } else {
  struct ib_uverbs_wc *VAR_7 = &VAR_5->uibwc;

  VAR_7->wr_id = VAR_4->wr.wr_id;
  VAR_7->status = VAR_4->status;
  VAR_7->opcode = FUNC_1(VAR_4->wr.opcode);
  if (VAR_4->wr.opcode == VAR_1 ||
      VAR_4->wr.opcode == VAR_2)
   VAR_7->wc_flags = VAR_0;
  VAR_7->byte_len = VAR_4->dma.length;
  VAR_7->qp_num = VAR_3->ibqp.qp_num;
 }
}
