
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct event_base {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event_base*,struct timeval*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 struct timeval VAR_4;
 struct event_base *VAR_5 = VAR_3;

 VAR_0++;
 VAR_4.tv_usec = 100000;
 VAR_4.tv_sec = 0;
 FUNC_0(VAR_5, &VAR_4);
}
