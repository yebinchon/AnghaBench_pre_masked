
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct TYPE_3__ {int ev_timeout; } ;
struct TYPE_4__ {TYPE_1__ ev_io; } ;
struct event {int ev_flags; TYPE_2__ ev_; struct event_base* ev_base; } ;


 int FUNC_0 (struct event_base*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 (struct event_base*,struct event*) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct event *VAR_1)
{
 struct event_base *VAR_2 = VAR_1->ev_base;

 FUNC_0(VAR_2);
 FUNC_2(VAR_1);

 FUNC_1(("event_remove_timer_nolock: event: %p", VAR_1));


 if (VAR_1->ev_flags & VAR_0) {
  FUNC_3(VAR_2, VAR_1);
  FUNC_4(&VAR_1->ev_.ev_io.ev_timeout);
 }

 return (0);
}
