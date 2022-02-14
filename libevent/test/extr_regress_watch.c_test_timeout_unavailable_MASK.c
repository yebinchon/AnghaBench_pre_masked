
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct basic_test_data {struct event_base* base; } ;


 int FUNC_0 (struct event_base*) ;
 int FUNC_1 (struct event_base*,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct basic_test_data *VAR_2 = VAR_1;
 struct event_base *VAR_3 = VAR_2->base;

 FUNC_1(VAR_3, &VAR_0, ((void*)0));
 FUNC_0(VAR_3);
}
