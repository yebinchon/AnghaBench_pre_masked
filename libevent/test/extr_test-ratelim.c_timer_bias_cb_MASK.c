
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event*) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (struct timeval*,struct timeval*,struct timeval*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct timeval VAR_2 ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_3, short VAR_4, void *VAR_5)
{
 struct event *VAR_6 = VAR_5;
 struct timeval VAR_7;
 struct timeval VAR_8;


 FUNC_1(&VAR_7, ((void*)0));
 FUNC_2(&VAR_7, &VAR_2, &VAR_8);
 VAR_1 += VAR_8.tv_sec + VAR_8.tv_usec * 1e6;
 VAR_2 = VAR_7;

 if (++VAR_0 == 100)
  FUNC_0(VAR_6);
}
