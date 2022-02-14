
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_hour; int tm_mday; int tm_mon; int tm_year; scalar_t__ tm_min; scalar_t__ tm_sec; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tm* FUNC_1 (int *) ;
 int FUNC_2 (struct tm*) ;
 int FUNC_3 (int ) ;

int FUNC_4 (int VAR_3) {
  if (!VAR_1) {
    if (VAR_0) {
      return (VAR_3 + FUNC_3 (VAR_2) ) / 86400;
    } else {
      return (VAR_3) / 86400;
    }
  } else {
    long VAR_4 = VAR_3;
    FUNC_0 (sizeof (time_t) == sizeof (long));

    struct tm *VAR_5 = FUNC_1 ((time_t *)&VAR_4);
    VAR_5->tm_sec = 0;
    VAR_5->tm_min = 0;
    VAR_5->tm_hour = 12;
    VAR_5->tm_mday = VAR_3 % 100;
    VAR_5->tm_mon = VAR_3 / 100 % 100 - 1;
    VAR_5->tm_year = VAR_3 / 10000 - 1900;
    return FUNC_2 (VAR_5) / 86400;
  }
}
