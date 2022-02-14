
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;
typedef int evutil_socket_t ;


 scalar_t__ FUNC_0 (struct event*,struct event_base*,int ,short,void (*) (int ,short,void*),void*) ;
 int FUNC_1 (struct event*) ;
 struct event* FUNC_2 (int) ;

struct event *
FUNC_3(struct event_base *VAR_0, evutil_socket_t VAR_1, short VAR_2, void (*VAR_3)(evutil_socket_t, short, void *), void *VAR_4)
{
 struct event *VAR_5;
 VAR_5 = FUNC_2(sizeof(struct event));
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 if (FUNC_0(VAR_5, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4) < 0) {
  FUNC_1(VAR_5);
  return (((void*)0));
 }

 return (VAR_5);
}
