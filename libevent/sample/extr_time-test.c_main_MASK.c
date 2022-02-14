
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;
typedef int WSADATA ;
typedef int WORD ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct event*,struct timeval*) ;
 int FUNC_3 (struct event*,struct event_base*,int,int,int ,void*) ;
 int FUNC_4 (struct event_base*) ;
 struct event_base* FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct timeval*) ;
 int VAR_2 ;
 int FUNC_8 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (char*,char*) ;
 int VAR_5 ;

int
FUNC_10(int VAR_6, char **VAR_7)
{
 struct event VAR_8;
 struct timeval VAR_9;
 struct event_base *VAR_10;
 int VAR_11;
 if (VAR_6 == 2 && !FUNC_9(VAR_7[1], "-p")) {
  VAR_1 = 1;
  VAR_11 = VAR_0;
 } else {
  VAR_1 = 0;
  VAR_11 = 0;
 }


 VAR_10 = FUNC_5();


 FUNC_3(&VAR_8, VAR_10, -1, VAR_11, VAR_5, (void*) &VAR_8);

 FUNC_7(&VAR_9);
 VAR_9.tv_sec = 2;
 FUNC_2(&VAR_8, &VAR_9);

 FUNC_6(&VAR_2, ((void*)0));

 FUNC_8(VAR_4, ((void*)0));
 FUNC_8(VAR_3, ((void*)0));

 FUNC_4(VAR_10);

 return (0);
}
