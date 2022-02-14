
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_query {scalar_t__ in_type; int old_qid; int pid; } ;
struct connection {int dummy; } ;
struct TYPE_2__ {int h; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int,struct connection**) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct connection*,int ) ;
 scalar_t__ VAR_3 ;

void FUNC_10 (struct rpc_query *VAR_4) {
  struct connection *VAR_5[3];
  int VAR_6 = FUNC_1 (FUNC_2 (&VAR_4->pid), &VAR_4->pid, 2, VAR_5);
  if (VAR_6 >= 0 && VAR_4->in_type == VAR_3) {
    int VAR_7;
    int VAR_8 = FUNC_5 ();
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 ++) {
      struct connection *VAR_9 = VAR_5[VAR_7];
      FUNC_9 (VAR_9, VAR_4->old_qid);
      FUNC_8 (VAR_0->h);
      FUNC_3 (FUNC_5 (), 0);
      FUNC_7 ();
    }
    VAR_1 ++;
    FUNC_0 (FUNC_4 (VAR_8) == VAR_8);
  } else {
    if (FUNC_6 (VAR_4->in_type, &VAR_4->pid, VAR_4->old_qid) < 0) {
      VAR_2 ++;
      return;
    }
    FUNC_8 (VAR_0->h);
    VAR_1 ++;

    FUNC_3 (FUNC_5 (), 1);
    FUNC_7 ();
  }
}
