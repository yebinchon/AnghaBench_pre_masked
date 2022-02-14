
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udp_target_set {int state; int T_count; struct udp_target* last; struct udp_target* S; int T; int pid; int utime; } ;
struct TYPE_3__ {int pid; int utime; } ;
struct udp_target {TYPE_1__ PID; } ;
struct process_id {int pid; int utime; } ;
struct TYPE_4__ {struct udp_target* x; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct udp_target*) ;
 TYPE_2__* FUNC_3 (int ) ;
 struct udp_target** FUNC_4 (int ,void*) ;
 struct udp_target_set** FUNC_5 (int ,void*) ;
 int FUNC_6 (struct udp_target*) ;
 int VAR_0 ;

void FUNC_7 (struct process_id *VAR_1) {
  struct udp_target_set **VAR_2 = FUNC_5 (VAR_0, (void *)VAR_1);
  if (!VAR_2) { return; }
  struct udp_target_set *VAR_3 = *VAR_2;
  switch (VAR_3->state) {
  case 0:
    return;
  case 1:
    if (VAR_3->utime == VAR_1->utime && VAR_3->pid == VAR_1->pid) {
      VAR_3->state = 0;
    }
    return;
  case 2:
    if (VAR_3->S->PID.utime == VAR_1->utime && VAR_3->S->PID.pid == VAR_1->pid) {
      FUNC_6 (VAR_3->S);
      VAR_3->state = 0;
    }
    return;
  case 3:
    {
      int VAR_4 = VAR_3->last->PID.utime != VAR_1->utime || VAR_3->last->PID.pid != VAR_1->pid;

      struct udp_target **VAR_5 = FUNC_4 (VAR_3->T, (void *)VAR_1);
      if (VAR_5) {
        struct udp_target *VAR_6 = *VAR_5;

        FUNC_0 (VAR_3->T_count >= 2);
        VAR_3->T = FUNC_2 (VAR_3->T, VAR_6);
        VAR_3->T_count --;
        FUNC_6 (VAR_6);

        VAR_6 = FUNC_3 (VAR_3->T)->x;

        if (VAR_3->T_count == 1) {
          FUNC_1 (VAR_3->T);
          VAR_3->state = 2;
          VAR_3->S = VAR_6;
        } else {
          if (!VAR_4) {
            VAR_3->last = VAR_6;
          }
        }
      }
      return;
    }
  default:
    FUNC_0 (0);
    return;

  }

}
