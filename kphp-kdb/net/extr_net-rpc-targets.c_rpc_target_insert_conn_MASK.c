
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree_rpc_target {struct rpc_target* x; } ;
struct TYPE_3__ {scalar_t__ ip; } ;
struct rpc_target {int inbound_num; struct connection* last; struct connection* first; TYPE_1__ PID; } ;
struct connection {struct connection* next; struct connection* prev; scalar_t__ target; } ;
struct TYPE_4__ {TYPE_1__ remote_pid; } ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 struct rpc_target* FUNC_2 (TYPE_1__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 struct tree_rpc_target* FUNC_4 (int ,struct rpc_target*) ;

void FUNC_5 (struct connection *VAR_2) {
  if (VAR_2->target) { return; }
  FUNC_3 ();
  static struct rpc_target VAR_3;
  VAR_3.PID = FUNC_0(VAR_2)->remote_pid;
  if (VAR_1 && !VAR_3.PID.ip) {
    VAR_3.PID.ip = VAR_1;
  }
  struct tree_rpc_target *VAR_4 = FUNC_4 (VAR_0, &VAR_3);
  struct rpc_target *VAR_5 = VAR_4 ? VAR_4->x : 0;
  if (!VAR_5) {
    VAR_5 = FUNC_2 (VAR_3.PID);
  }
  struct connection *VAR_6 = VAR_5->first;
  while (VAR_6 != (struct connection *)VAR_5) {
    if (VAR_6 == VAR_2) {
      return;
    }
    VAR_6 = VAR_6->next;
  }
  FUNC_1 (!VAR_2->next);
  FUNC_1 (!VAR_2->prev);
  VAR_2->next = (void *)VAR_5;
  VAR_2->prev = VAR_5->last;
  VAR_2->next->prev = VAR_2;
  VAR_2->prev->next = VAR_2;
  VAR_5->inbound_num ++;
}
