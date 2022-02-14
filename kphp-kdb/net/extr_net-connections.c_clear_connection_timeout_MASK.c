
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wakeup_time; } ;
struct connection {TYPE_1__ timer; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1 (struct connection *VAR_1) {
  VAR_1->flags &= ~VAR_0;
  VAR_1->timer.wakeup_time = 0;
  return FUNC_0 (&VAR_1->timer);
}
