
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {int tm_isdst; int tm_yday; int tm_wday; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_3__ {int tm_isdst; int tm_yday; int tm_wday; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
typedef TYPE_1__ qtime_t ;


 struct tm* FUNC_0 (int*) ;
 int FUNC_1 (int *) ;

int FUNC_2(qtime_t *VAR_0) {
 time_t VAR_1;
 struct tm *VAR_2;

 VAR_1 = FUNC_1(((void*)0));
 if (!VAR_0)
  return VAR_1;
 VAR_2 = FUNC_0(&VAR_1);
 if (VAR_2) {
  VAR_0->tm_sec = VAR_2->tm_sec;
  VAR_0->tm_min = VAR_2->tm_min;
  VAR_0->tm_hour = VAR_2->tm_hour;
  VAR_0->tm_mday = VAR_2->tm_mday;
  VAR_0->tm_mon = VAR_2->tm_mon;
  VAR_0->tm_year = VAR_2->tm_year;
  VAR_0->tm_wday = VAR_2->tm_wday;
  VAR_0->tm_yday = VAR_2->tm_yday;
  VAR_0->tm_isdst = VAR_2->tm_isdst;
 }
 return VAR_1;
}
