
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_target {struct connection* first; TYPE_1__* target; } ;
struct process_id {int dummy; } ;
struct connection {struct connection* next; } ;
struct TYPE_4__ {int remote_pid; } ;
struct TYPE_3__ {struct connection* first_conn; } ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct process_id*) ;
 int FUNC_3 (struct connection*) ;

int FUNC_4 (struct rpc_target *VAR_1, struct process_id *VAR_2, int VAR_3, struct connection *VAR_4[]) {
  if (!VAR_1) {
    return 0;
  }
  struct connection *VAR_5;
  int VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8;
  if (VAR_1->target) {
    for (VAR_5 = VAR_1->target->first_conn; VAR_5 != (struct connection *) (VAR_1->target); VAR_5 = VAR_5->next) {
      VAR_8 = FUNC_3 (VAR_5);
      if ((VAR_8 == VAR_0) && (!VAR_2 || FUNC_2 (&FUNC_0(VAR_5)->remote_pid, VAR_2) >= 1)) {
        if (VAR_6 < VAR_3) {
          VAR_4[VAR_6 ++] = VAR_5;
        } else {
          int VAR_9 = FUNC_1 () % (VAR_7 + 1);
          if (VAR_9 < VAR_3) {
            VAR_4[VAR_9] = VAR_5;
          }
        }
        VAR_7 ++;
      }
    }
  }
  for (VAR_5 = VAR_1->first; VAR_5 != (struct connection *) (VAR_1); VAR_5 = VAR_5->next) {
    VAR_8 = FUNC_3 (VAR_5);
    if ((VAR_8 == VAR_0) && (!VAR_2 || FUNC_2 (&FUNC_0(VAR_5)->remote_pid, VAR_2) >= 1)) {
      if (VAR_6 < VAR_3) {
        VAR_4[VAR_6 ++] = VAR_5;
      } else {
        int VAR_10 = FUNC_1 () % (VAR_7 + 1);
        if (VAR_10 < VAR_3) {
          VAR_4[VAR_10] = VAR_5;
        }
      }
      VAR_7 ++;
    }
  }
  return VAR_6;
}
