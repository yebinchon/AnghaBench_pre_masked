
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evwatch {struct event_base* base; } ;
struct event_base {int dummy; } ;



struct event_base *
FUNC_0(struct evwatch *VAR_0)
{
 return VAR_0->base;
}
