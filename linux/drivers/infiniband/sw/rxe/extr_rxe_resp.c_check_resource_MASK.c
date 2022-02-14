
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rxe_srq {int dummy; } ;
struct TYPE_6__ {scalar_t__ state; void* wqe; void* status; } ;
struct TYPE_5__ {int queue; } ;
struct TYPE_4__ {scalar_t__ max_dest_rd_atomic; } ;
struct rxe_qp {TYPE_3__ resp; TYPE_2__ rq; TYPE_1__ attr; struct rxe_srq* srq; } ;
struct rxe_pkt_info {int mask; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rxe_qp*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static enum resp_states FUNC_3(struct rxe_qp *VAR_9,
           struct rxe_pkt_info *VAR_10)
{
 struct rxe_srq *VAR_11 = VAR_9->srq;

 if (VAR_9->resp.state == VAR_1) {
  if (VAR_9->resp.wqe) {
   VAR_9->resp.status = VAR_0;
   return VAR_3;
  } else if (!VAR_11) {
   VAR_9->resp.wqe = FUNC_2(VAR_9->rq.queue);
   if (VAR_9->resp.wqe) {
    VAR_9->resp.status = VAR_0;
    return VAR_3;
   } else {
    return VAR_6;
   }
  } else {
   return VAR_6;
  }
 }

 if (VAR_10->mask & VAR_7) {




  if (FUNC_1(VAR_9->attr.max_dest_rd_atomic > 0))
   return VAR_2;
  else
   return VAR_5;
 }

 if (VAR_10->mask & VAR_8) {
  if (VAR_11)
   return FUNC_0(VAR_9);

  VAR_9->resp.wqe = FUNC_2(VAR_9->rq.queue);
  return (VAR_9->resp.wqe) ? VAR_2 : VAR_4;
 }

 return VAR_2;
}
