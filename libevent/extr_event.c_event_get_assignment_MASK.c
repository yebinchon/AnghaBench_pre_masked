
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {short ev_events; void* ev_arg; int ev_callback; int ev_fd; struct event_base* ev_base; } ;
typedef int evutil_socket_t ;
typedef int event_callback_fn ;


 int FUNC_0 (struct event const*) ;

void
FUNC_1(const struct event *VAR_0, struct event_base **VAR_1, evutil_socket_t *VAR_2, short *VAR_3, event_callback_fn *VAR_4, void **VAR_5)
{
 FUNC_0(VAR_0);

 if (VAR_1)
  *VAR_1 = VAR_0->ev_base;
 if (VAR_2)
  *VAR_2 = VAR_0->ev_fd;
 if (VAR_3)
  *VAR_3 = VAR_0->ev_events;
 if (VAR_4)
  *VAR_4 = VAR_0->ev_callback;
 if (VAR_5)
  *VAR_5 = VAR_0->ev_arg;
}
