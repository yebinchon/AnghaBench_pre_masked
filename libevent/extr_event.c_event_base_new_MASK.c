
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_config {int dummy; } ;
struct event_base {int dummy; } ;


 struct event_base* FUNC_0 (struct event_config*) ;
 int FUNC_1 (struct event_config*) ;
 struct event_config* FUNC_2 () ;

struct event_base *
FUNC_3(void)
{
 struct event_base *VAR_0 = ((void*)0);
 struct event_config *VAR_1 = FUNC_2();
 if (VAR_1) {
  VAR_0 = FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 }
 return VAR_0;
}
