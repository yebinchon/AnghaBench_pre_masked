
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_query_type {int dummy; } ;
struct TYPE_3__ {double wakeup_time; int wakeup; scalar_t__ h_idx; } ;
struct process_id {int dummy; } ;
struct rpc_query {long long qid; long long old_qid; int in_type; double start_time; TYPE_1__ ev; struct rpc_query_type type; struct process_id pid; } ;
typedef enum tl_type { ____Placeholder_tl_type } tl_type ;
struct TYPE_4__ {double timeout; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct rpc_query*) ;
 int FUNC_2 (int *,struct rpc_query*) ;
 int FUNC_3 (TYPE_1__*) ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rpc_query* FUNC_4 (int) ;

struct rpc_query *FUNC_5 (long long VAR_5, struct process_id VAR_6, long long VAR_7, enum tl_type VAR_8 , struct rpc_query_type VAR_9, double VAR_10) {
  struct rpc_query *VAR_11 = FUNC_4 (sizeof (*VAR_11));
  VAR_11->qid = VAR_5;
  VAR_11->pid = VAR_6;
  VAR_11->old_qid = VAR_7;

  VAR_11->in_type = VAR_8;
  VAR_11->start_time = VAR_2;
  FUNC_0 (!FUNC_2 (&VAR_3, VAR_11));
  FUNC_1 (&VAR_3, VAR_11);
  VAR_11->ev.h_idx = 0;
  VAR_11->ev.wakeup = VAR_4;
  VAR_11->ev.wakeup_time = VAR_2 + (VAR_10 ? VAR_10 : VAR_0->timeout);
  VAR_11->type = VAR_9;
  FUNC_3 (&VAR_11->ev);
  VAR_1 ++;
  return VAR_11;
}
