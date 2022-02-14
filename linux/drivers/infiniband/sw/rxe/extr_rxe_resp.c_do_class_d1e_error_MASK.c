
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int drop_msg; int opcode; int * mr; TYPE_2__* wqe; int status; } ;
struct rxe_qp {TYPE_3__ resp; scalar_t__ srq; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;
struct TYPE_4__ {scalar_t__ sge_offset; scalar_t__ cur_sge; int length; int resid; } ;
struct TYPE_5__ {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static enum resp_states FUNC_1(struct rxe_qp *VAR_3)
{

 if (VAR_3->srq) {

  VAR_3->resp.drop_msg = 1;
  if (VAR_3->resp.wqe) {
   VAR_3->resp.status = VAR_0;
   return VAR_2;
  } else {
   return VAR_1;
  }
 } else {





  if (VAR_3->resp.wqe) {
   VAR_3->resp.wqe->dma.resid = VAR_3->resp.wqe->dma.length;
   VAR_3->resp.wqe->dma.cur_sge = 0;
   VAR_3->resp.wqe->dma.sge_offset = 0;
   VAR_3->resp.opcode = -1;
  }

  if (VAR_3->resp.mr) {
   FUNC_0(VAR_3->resp.mr);
   VAR_3->resp.mr = ((void*)0);
  }

  return VAR_1;
 }
}
