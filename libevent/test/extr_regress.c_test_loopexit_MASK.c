
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct event {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (struct event*,struct timeval*) ;
 int FUNC_6 (struct event*) ;
 int FUNC_7 (struct event*,int ,int *) ;
 int FUNC_8 (struct timeval*,int *) ;
 int VAR_0 ;
 int FUNC_9 (char*) ;
 int VAR_1 ;
 int FUNC_10 (struct timeval*,struct timeval*,int) ;
 int VAR_2 ;
 int FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(void)
{
 struct timeval VAR_3, VAR_4, VAR_5;
 struct event VAR_6;

 FUNC_9("Loop exit: ");

 VAR_3.tv_usec = 0;
 VAR_3.tv_sec = 60*60*24;
 FUNC_7(&VAR_6, VAR_2, ((void*)0));
 FUNC_5(&VAR_6, &VAR_3);

 VAR_3.tv_usec = 300*1000;
 VAR_3.tv_sec = 0;
 FUNC_4(&VAR_3);

 FUNC_8(&VAR_4, ((void*)0));
 FUNC_3();
 FUNC_8(&VAR_5, ((void*)0));

 FUNC_6(&VAR_6);

 FUNC_11(FUNC_2(VAR_0));
 FUNC_11(!FUNC_1(VAR_0));

 FUNC_10(&VAR_4, &VAR_5, 300);

 VAR_1 = 1;
end:
 FUNC_0();
}
