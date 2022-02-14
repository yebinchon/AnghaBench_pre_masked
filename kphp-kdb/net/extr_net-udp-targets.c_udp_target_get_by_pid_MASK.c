
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_target_set {int state; int T; struct udp_target* last; struct udp_target* S; } ;
struct TYPE_2__ {int utime; int pid; } ;
struct udp_target {TYPE_1__ PID; } ;
struct process_id {int utime; int pid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,struct process_id*) ;
 struct udp_target** FUNC_2 (int ,void*) ;
 struct udp_target_set** FUNC_3 (int ,void*) ;
 int FUNC_4 (struct udp_target_set*) ;
 int VAR_0 ;

struct udp_target *FUNC_5 (struct process_id *VAR_1) {
  struct udp_target_set **VAR_2 = FUNC_3 (VAR_0, (void *)VAR_1);
  if (!VAR_2) { return 0; }
  struct udp_target_set *VAR_3 = *VAR_2;
  struct udp_target *VAR_4;
  struct udp_target **VAR_5;
  switch (VAR_3->state) {
  case 0:
    return 0;
  case 1:
    FUNC_4 (VAR_3);
  case 2:
    VAR_4 = VAR_3->S;
    if (!VAR_1->pid && !VAR_1->utime) {
      return VAR_4;
    } else if (!VAR_4->PID.pid && !VAR_4->PID.utime) {
      return VAR_4;
    } else if (FUNC_1 (&VAR_4->PID, VAR_1) == 2) {
      return VAR_4;
    } else {
      return 0;
    }
  case 3:
    if (!VAR_1->pid && !VAR_1->utime) {
      return VAR_3->last;
    } else {
      VAR_5 = FUNC_2 (VAR_3->T, (void *)VAR_1);
      return VAR_5 ? *VAR_5 : 0;
    }
  default:
    FUNC_0 (0);
    return 0;
  }
}
