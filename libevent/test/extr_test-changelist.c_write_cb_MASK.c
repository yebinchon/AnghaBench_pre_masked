
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event*,int *) ;
 int FUNC_1 (struct event*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 FUNC_2("write callback. should only see this once\n");


 FUNC_1(*(struct event**)VAR_2);


 FUNC_0(*(struct event**)VAR_2,((void*)0));


 FUNC_1(*(struct event**)VAR_2);

}
