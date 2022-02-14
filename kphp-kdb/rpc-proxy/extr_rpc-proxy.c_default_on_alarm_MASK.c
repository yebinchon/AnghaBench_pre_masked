
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_query {scalar_t__ start_time; int old_qid; int pid; int in_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int FUNC_2 () ;

void FUNC_3 (struct rpc_query *VAR_4) {
  VAR_3 ++;
  VAR_2 ++;
  if (FUNC_1 (VAR_4->in_type, &VAR_4->pid, VAR_4->old_qid) >= 0) {
    FUNC_0 (VAR_0, "Query timeout: working_time = %lf", VAR_1 - VAR_4->start_time);
    FUNC_2 ();
  }

}
