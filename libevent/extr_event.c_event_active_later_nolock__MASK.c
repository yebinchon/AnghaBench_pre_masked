
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int ev_flags; int ev_res; struct event_base* ev_base; } ;


 int FUNC_0 (struct event_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct event_base*,int ) ;
 int FUNC_2 (struct event*) ;

void
FUNC_3(struct event *VAR_2, int VAR_3)
{
 struct event_base *VAR_4 = VAR_2->ev_base;
 FUNC_0(VAR_4);

 if (VAR_2->ev_flags & (VAR_0|VAR_1)) {

  VAR_2->ev_res |= VAR_3;
  return;
 }

 VAR_2->ev_res = VAR_3;

 FUNC_1(VAR_4, FUNC_2(VAR_2));
}
