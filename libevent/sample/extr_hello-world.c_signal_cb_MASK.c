
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;
struct event_base {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event_base*,struct timeval*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct event_base *VAR_3 = VAR_2;
 struct timeval VAR_4 = { 2, 0 };

 FUNC_1("Caught an interrupt signal; exiting cleanly in two seconds.\n");

 FUNC_0(VAR_3, &VAR_4);
}
