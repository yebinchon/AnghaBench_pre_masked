
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_query {int old_qid; int pid; int in_type; } ;
struct TYPE_4__ {TYPE_1__* h; } ;
struct TYPE_3__ {int real_op; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5 (struct rpc_query *VAR_3) {
  if (FUNC_2 (VAR_3->in_type, &VAR_3->pid, VAR_3->old_qid) < 0) {
    VAR_2 ++;
    return;
  }
  FUNC_4 (VAR_0->h);
  VAR_1 ++;


  FUNC_0 (FUNC_1 (), 1);

  FUNC_3 (VAR_0->h->real_op);
}
