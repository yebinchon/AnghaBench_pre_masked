
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct process_id {int dummy; } ;
struct TYPE_6__ {scalar_t__ ip; scalar_t__ port; scalar_t__ pid; scalar_t__ utime; } ;
typedef TYPE_1__ npid_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_1 (npid_t *VAR_0, npid_t *VAR_1) {
  if (!FUNC_0 (VAR_0, VAR_1, sizeof (struct process_id))) {
    return 2;
  } else if ((!VAR_1->ip || VAR_0->ip == VAR_1->ip) && (!VAR_1->port || VAR_0->port == VAR_1->port) && (!VAR_1->pid || VAR_0->pid == VAR_1->pid) && (!VAR_1->utime || VAR_0->utime == VAR_1->utime)) {
    return 1;
  } else {
    return 0;
  }
}
