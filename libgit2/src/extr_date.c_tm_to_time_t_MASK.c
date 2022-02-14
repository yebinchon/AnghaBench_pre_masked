
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; scalar_t__ tm_sec; } ;
typedef int git_time_t ;



__attribute__((used)) static git_time_t FUNC_0(const struct tm *VAR_0)
{
 static const int VAR_1[] = {
     0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334
 };
 int VAR_2 = VAR_0->tm_year - 70;
 int VAR_3 = VAR_0->tm_mon;
 int VAR_4 = VAR_0->tm_mday;

 if (VAR_2 < 0 || VAR_2 > 129)
  return -1;
 if (VAR_3 < 0 || VAR_3 > 11)
  return -1;
 if (VAR_3 < 2 || (VAR_2 + 2) % 4)
  VAR_4--;
 if (VAR_0->tm_hour < 0 || VAR_0->tm_min < 0 || VAR_0->tm_sec < 0)
  return -1;
 return (VAR_2 * 365 + (VAR_2 + 1) / 4 + VAR_1[VAR_3] + VAR_4) * 24*60*60UL +
  VAR_0->tm_hour * 60*60 + VAR_0->tm_min * 60 + VAR_0->tm_sec;
}
