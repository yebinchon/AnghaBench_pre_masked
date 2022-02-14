
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp {struct event_base* base; } ;
struct event_base {int dummy; } ;


 struct evhttp* FUNC_0 () ;

struct evhttp *
FUNC_1(struct event_base *VAR_0)
{
 struct evhttp *VAR_1 = ((void*)0);

 VAR_1 = FUNC_0();
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_1->base = VAR_0;

 return (VAR_1);
}
