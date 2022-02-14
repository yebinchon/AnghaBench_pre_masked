
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udp_target_set {int state; int utime; int T_count; struct tree_udp_target_by_fpid* T; TYPE_3__* last; struct udp_target* S; } ;
struct TYPE_5__ {int utime; } ;
struct udp_target {TYPE_1__ PID; } ;
struct tree_udp_target_by_fpid {struct udp_target* x; } ;
struct process_id {int utime; int pid; } ;
struct TYPE_8__ {TYPE_3__* x; } ;
struct TYPE_6__ {int utime; } ;
struct TYPE_7__ {TYPE_2__ PID; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tree_udp_target_by_fpid*,int (*) (struct udp_target*)) ;
 int FUNC_2 (struct tree_udp_target_by_fpid*) ;
 int FUNC_3 (struct tree_udp_target_by_fpid*) ;
 TYPE_4__* FUNC_4 (struct tree_udp_target_by_fpid*) ;
 struct udp_target_set** FUNC_5 (int ,void*) ;
 int FUNC_6 (struct tree_udp_target_by_fpid**,struct tree_udp_target_by_fpid**,struct tree_udp_target_by_fpid*,void*) ;
 int FUNC_7 (struct udp_target*) ;
 int VAR_0 ;

void FUNC_8 (struct process_id *VAR_1, int VAR_2) {
  struct udp_target_set **VAR_3 = FUNC_5 (VAR_0, (void *)VAR_1);
  if (!VAR_3) { return; }
  struct udp_target_set *VAR_4 = *VAR_3;
  switch (VAR_4->state) {
  case 0:
    return;
  case 1:
    if (VAR_4->utime < VAR_2) {
      VAR_4->state = 0;
    }
    return;
  case 2:
    if (VAR_4->S->PID.utime < VAR_2 && VAR_4->S->PID.utime) {
      FUNC_7 (VAR_4->S);
      VAR_4->state = 0;
    }
    return;
  case 3:
    {
      int VAR_5 = VAR_4->last->PID.utime < VAR_2;
      struct tree_udp_target_by_fpid *VAR_6, *VAR_7;
      struct process_id VAR_8;
      VAR_8.utime = VAR_2 ;
      VAR_8.pid = 0;
      FUNC_6 (&VAR_6, &VAR_7, VAR_4->T, (void *)&VAR_8);
      VAR_4->T = VAR_7;
      VAR_4->T_count -= FUNC_3 (VAR_6);
      FUNC_1 (VAR_6, FUNC_7);
      FUNC_2 (VAR_6);

      FUNC_0 (VAR_4->T_count >= 0);
      if (VAR_4->T_count == 0) {
        VAR_4->state = 0;
      } else if (VAR_4->T_count == 1) {
        struct udp_target *VAR_9 = VAR_4->T->x;
        FUNC_2 (VAR_4->T);
        VAR_4->state = 2;
        VAR_4->S = VAR_9;
      } else {
        if (VAR_5) {
          VAR_4->last = FUNC_4 (VAR_4->T)->x;
        }
      }
      return;
    }
  default:
    FUNC_0 (0);
    return;

  }
}
