
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_isdst; void* tm_min; void* tm_hour; void* tm_mday; void* tm_mon; } ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;


 void* FUNC_0 (char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 struct tm* FUNC_3 (int *) ;
 int FUNC_4 (struct tm*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0, int VAR_1, struct timespec *VAR_2)
{
 time_t VAR_3;
 struct tm *VAR_4;

 VAR_3 = FUNC_5(((void*)0));
 if ((VAR_4 = FUNC_3(&VAR_3)) == ((void*)0))
  FUNC_1(1, "localtime");

 VAR_4->tm_mon = FUNC_0(VAR_0);
 --VAR_4->tm_mon;
 VAR_4->tm_mday = FUNC_0(VAR_0);
 VAR_4->tm_hour = FUNC_0(VAR_0);
 VAR_4->tm_min = FUNC_0(VAR_0);
 if (VAR_1) {
  VAR_4->tm_year = FUNC_0(VAR_0);
  if (VAR_4->tm_year < 39)
   VAR_4->tm_year += 100;
 }

 VAR_4->tm_isdst = -1;
 VAR_2[0].tv_sec = VAR_2[1].tv_sec = FUNC_4(VAR_4);
 if (VAR_2[0].tv_sec == -1)
  FUNC_2(1,
 "out of range or illegal time specification: MMDDhhmm[yy]");

 VAR_2[0].tv_nsec = VAR_2[1].tv_nsec = 0;
}
