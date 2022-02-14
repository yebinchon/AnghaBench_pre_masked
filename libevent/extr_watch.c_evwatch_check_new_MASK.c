
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union evwatch_cb {int check; } ;
struct evwatch {int dummy; } ;
struct event_base {int dummy; } ;
typedef int evwatch_check_cb ;


 int VAR_0 ;
 struct evwatch* FUNC_0 (struct event_base*,union evwatch_cb,void*,int ) ;

struct evwatch *
FUNC_1(struct event_base *VAR_1, evwatch_check_cb VAR_2, void *VAR_3)
{
 union evwatch_cb VAR_4 = { .check = VAR_2 };
 return FUNC_0(VAR_1, VAR_4, VAR_3, VAR_0);
}
