
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wakeup_time; int wakeup; } ;
struct connection {TYPE_1__ timer; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2 (struct connection *VAR_3, double VAR_4) {
  VAR_3->timer.wakeup = VAR_1;
  VAR_3->flags &= ~VAR_0;
  if (VAR_4 > 0) {
    VAR_3->timer.wakeup_time = VAR_2 + VAR_4;
    return FUNC_0 (&VAR_3->timer);
  } else {
    VAR_3->timer.wakeup_time = 0;
    return FUNC_1 (&VAR_3->timer);
  }
}
