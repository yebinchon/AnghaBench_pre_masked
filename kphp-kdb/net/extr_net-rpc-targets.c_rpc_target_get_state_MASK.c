
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_target {struct connection* first; TYPE_1__* target; } ;
struct process_id {int dummy; } ;
struct connection {int unreliability; struct connection* next; } ;
struct TYPE_4__ {int remote_pid; } ;
struct TYPE_3__ {struct connection* first_conn; } ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct process_id*) ;
 int FUNC_2 (struct connection*) ;

int FUNC_3 (struct rpc_target *VAR_2, struct process_id *VAR_3) {
  if (!VAR_2) {
    return 0;
  }
  int VAR_4 = -1;
  int VAR_5 = 10000;
  int VAR_6;
  struct connection *VAR_7;
  if (VAR_2->target) {
    for (VAR_7 = VAR_2->target->first_conn; VAR_7 != (struct connection *) (VAR_2->target); VAR_7 = VAR_7->next) {
      VAR_6 = FUNC_2 (VAR_7);
      if (VAR_6 == VAR_0) {
        if (!VAR_3 || FUNC_1 (&FUNC_0(VAR_7)->remote_pid, VAR_3) >= 1) {
          return 1;
        }
      } else if (VAR_6 == VAR_1 && VAR_7->unreliability < VAR_5) {
        if (!VAR_3 || FUNC_1 (&FUNC_0(VAR_7)->remote_pid, VAR_3) >= 1) {
          VAR_4 = 0;
        }
      }
    }
  }
  for (VAR_7 = VAR_2->first; VAR_7 != (struct connection *) (VAR_2); VAR_7 = VAR_7->next) {
    VAR_6 = FUNC_2 (VAR_7);
    if (VAR_6 == VAR_0) {
      if (!VAR_3 || FUNC_1 (&FUNC_0(VAR_7)->remote_pid, VAR_3) >= 1) {
        return 1;
      }
    } else if (VAR_6 == VAR_1 && VAR_7->unreliability < VAR_5) {
      if (!VAR_3 || FUNC_1 (&FUNC_0(VAR_7)->remote_pid, VAR_3) >= 1) {
        VAR_4 = 0;
      }
    }
  }
  return VAR_4;
}
