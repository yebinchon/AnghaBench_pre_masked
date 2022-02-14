
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct creq_qp_event {int event; int cookie; } ;
struct creq_qp_error_notification {int res_err_state_reason; int req_err_state_reason; int xid; } ;
struct bnxt_qplib_hwq {int lock; int cons; } ;
struct bnxt_qplib_rcfw {size_t cmdq_depth; int waitq; TYPE_2__* pdev; int cmdq_bitmap; struct bnxt_qplib_crsq* crsqe_tbl; int (* aeq_handler ) (struct bnxt_qplib_rcfw*,struct creq_qp_event*,struct bnxt_qplib_qp*) ;TYPE_1__* qp_tbl; struct bnxt_qplib_hwq cmdq; } ;
struct bnxt_qplib_qp {int dummy; } ;
struct bnxt_qplib_crsq {int req_size; TYPE_3__* resp; } ;
typedef int __le16 ;
struct TYPE_6__ {int cookie; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct bnxt_qplib_qp* qp_handle; } ;



 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt_qplib_qp*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,char*,int ,int ) ;
 int FUNC_3 (int *,char*,size_t) ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,struct creq_qp_event*,int) ;
 int FUNC_7 (int *,unsigned long,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct bnxt_qplib_rcfw*,struct creq_qp_event*,struct bnxt_qplib_qp*) ;
 int FUNC_10 (size_t,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct bnxt_qplib_rcfw *VAR_3,
           struct creq_qp_event *VAR_4)
{
 struct bnxt_qplib_hwq *VAR_5 = &VAR_3->cmdq;
 struct creq_qp_error_notification *VAR_6;
 struct bnxt_qplib_crsq *VAR_7;
 unsigned long VAR_8;
 struct bnxt_qplib_qp *VAR_9;
 u16 VAR_10, VAR_11 = 0;
 u16 VAR_12;
 __le16 VAR_13;
 u32 VAR_14;

 switch (VAR_4->event) {
 case 128:
  VAR_6 = (struct creq_qp_error_notification *)VAR_4;
  VAR_14 = FUNC_5(VAR_6->xid);
  VAR_9 = VAR_3->qp_tbl[VAR_14].qp_handle;
  FUNC_1(&VAR_3->pdev->dev,
   "Received QP error notification\n");
  FUNC_1(&VAR_3->pdev->dev,
   "qpid 0x%x, req_err=0x%x, resp_err=0x%x\n",
   VAR_14, VAR_6->req_err_state_reason,
   VAR_6->res_err_state_reason);
  if (!VAR_9)
   break;
  FUNC_0(VAR_9);
  VAR_3->aeq_handler(VAR_3, VAR_4, VAR_9);
  break;
 default:
  FUNC_7(&VAR_5->lock, VAR_8,
      VAR_2);
  VAR_12 = FUNC_4(VAR_4->cookie);
  VAR_13 = VAR_4->cookie;
  VAR_11 = VAR_12 & VAR_0;
  VAR_12 &= VAR_1;
  VAR_10 = VAR_12 % VAR_3->cmdq_depth;
  VAR_7 = &VAR_3->crsqe_tbl[VAR_10];
  if (VAR_7->resp &&
      VAR_7->resp->cookie == VAR_13) {
   FUNC_6(VAR_7->resp, VAR_4, sizeof(*VAR_4));
   VAR_7->resp = ((void*)0);
  } else {
   if (VAR_7->resp && VAR_7->resp->cookie)
    FUNC_2(&VAR_3->pdev->dev,
     "CMD %s cookie sent=%#x, recd=%#x\n",
     VAR_7->resp ? "mismatch" : "collision",
     VAR_7->resp ? VAR_7->resp->cookie : 0,
     VAR_13);
  }
  if (!FUNC_10(VAR_10, VAR_3->cmdq_bitmap))
   FUNC_3(&VAR_3->pdev->dev,
     "CMD bit %d was not requested\n", VAR_10);
  VAR_5->cons += VAR_7->req_size;
  VAR_7->req_size = 0;

  if (!VAR_11)
   FUNC_11(&VAR_3->waitq);
  FUNC_8(&VAR_5->lock, VAR_8);
 }
 return 0;
}
