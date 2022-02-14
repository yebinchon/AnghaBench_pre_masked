
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wakeup_time; int h_idx; int (* wakeup ) (TYPE_1__*) ;} ;
typedef TYPE_1__ event_timer_t ;


 int FUNC_0 (int) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,char*,scalar_t__,double) ;

int FUNC_4 (void) {
  double VAR_4;
  event_timer_t *VAR_5;
  if (!VAR_1) {
    return 100000;
  }
  VAR_4 = VAR_0[1]->wakeup_time - VAR_3;
  if (VAR_4 > 0) {

    FUNC_3 (2, "%d event timers, next in %.3f seconds\n", VAR_1, VAR_4);
    return (int) (VAR_4*1000) + 1;
  }
  while (VAR_1 > 0 && VAR_0[1]->wakeup_time <= VAR_3 && !VAR_2) {
    VAR_5 = VAR_0[1];
    FUNC_0 (VAR_5->h_idx == 1);
    FUNC_1 (VAR_5);
    VAR_5->wakeup (VAR_5);
  }
  return 0;
}
