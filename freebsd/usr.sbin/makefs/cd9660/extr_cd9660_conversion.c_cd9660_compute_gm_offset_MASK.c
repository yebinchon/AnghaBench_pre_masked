
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {scalar_t__ tm_year; int tm_yday; int tm_hour; int tm_min; } ;


 int FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (int *,struct tm*) ;

__attribute__((used)) static char
FUNC_2(time_t VAR_0)
{
 struct tm VAR_1, VAR_2;

 (void)FUNC_1(&VAR_0, &VAR_1);
 (void)FUNC_0(&VAR_0, &VAR_2);
 VAR_2.tm_year -= VAR_1.tm_year;
 VAR_2.tm_yday -= VAR_1.tm_yday;
 VAR_2.tm_hour -= VAR_1.tm_hour;
 VAR_2.tm_min -= VAR_1.tm_min;
 if (VAR_2.tm_year < 0)
  VAR_2.tm_yday = -1;
 else if (VAR_2.tm_year > 0)
  VAR_2.tm_yday = 1;

 return (char)(-(VAR_2.tm_min + 60* (24 * VAR_2.tm_yday + VAR_2.tm_hour)) / 15);
}
