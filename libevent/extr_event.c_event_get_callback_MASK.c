
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int ev_callback; } ;
typedef int event_callback_fn ;


 int FUNC_0 (struct event const*) ;

event_callback_fn
FUNC_1(const struct event *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->ev_callback;
}
