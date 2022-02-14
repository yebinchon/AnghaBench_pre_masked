
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_callback {int dummy; } ;
struct event {struct event_callback ev_evcallback; } ;



__attribute__((used)) static inline struct event_callback *
FUNC_0(struct event *VAR_0)
{
 return &VAR_0->ev_evcallback;
}
