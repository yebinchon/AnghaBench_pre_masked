
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct itimerval {struct timeval const it_interval; struct timeval const it_value; } ;


 int VAR_0 ;
 int FUNC_0 (int (*) ()) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct timeval const*,struct timeval const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_5(int VAR_5, struct itimerval *VAR_6, struct itimerval *VAR_7)
{
 static const struct timeval VAR_8;
 static int VAR_9;

 if (VAR_7 != ((void*)0))
  return VAR_1 = VAR_0,
   FUNC_1("setitimer param 3 != NULL not implemented");
 if (!FUNC_2(&VAR_6->it_interval, &VAR_8) &&
     !FUNC_2(&VAR_6->it_interval, &VAR_6->it_value))
  return VAR_1 = VAR_0,
   FUNC_1("setitimer: it_interval must be zero or eq it_value");

 if (VAR_4)
  FUNC_4();

 if (FUNC_2(&VAR_6->it_value, &VAR_8) &&
     FUNC_2(&VAR_6->it_interval, &VAR_8))
  return 0;

 VAR_3 = VAR_6->it_value.tv_sec * 1000 + VAR_6->it_value.tv_usec / 1000;
 VAR_2 = FUNC_2(&VAR_6->it_interval, &VAR_8);
 if (!VAR_9) {
  FUNC_0(FUNC_4);
  VAR_9 = 1;
 }
 return FUNC_3();
}
