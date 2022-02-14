
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_sec; double tv_usec; } ;
struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event*,struct timeval*) ;
 int VAR_0 ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 (struct timeval*,struct timeval*,struct timeval*) ;
 struct timeval VAR_1 ;
 int FUNC_4 (char*,int,double) ;

__attribute__((used)) static void
FUNC_5(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 struct timeval VAR_5, VAR_6;
 struct event *VAR_7 = VAR_4;
 double VAR_8;

 FUNC_1(&VAR_5, ((void*)0));
 FUNC_3(&VAR_5, &VAR_1, &VAR_6);
 VAR_8 = VAR_6.tv_sec +
     (VAR_6.tv_usec / 1.0e6);

 FUNC_4("timeout_cb called at %d: %.3f seconds elapsed.\n",
     (int)VAR_5.tv_sec, VAR_8);
 VAR_1 = VAR_5;

 if (! VAR_0) {
  struct timeval VAR_9;
  FUNC_2(&VAR_9);
  VAR_9.tv_sec = 2;
  FUNC_0(VAR_7, &VAR_9);
 }
}
