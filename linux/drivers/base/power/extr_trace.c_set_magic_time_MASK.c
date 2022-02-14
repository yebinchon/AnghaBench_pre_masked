
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned int tm_min; unsigned int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; int tm_sec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct rtc_time*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_3 + VAR_1*(VAR_4 + VAR_0*VAR_5);


 static struct rtc_time VAR_7 = {
  .tm_sec = 0,
  .tm_min = 0,
  .tm_hour = 0,
  .tm_mday = 7,
  .tm_mon = 5,
  .tm_year = 106,
  .tm_wday = 3,
  .tm_yday = 160,
  .tm_isdst = 1
 };

 VAR_7.tm_year = (VAR_6 % 100);
 VAR_6 /= 100;
 VAR_7.tm_mon = (VAR_6 % 12);
 VAR_6 /= 12;
 VAR_7.tm_mday = (VAR_6 % 28) + 1;
 VAR_6 /= 28;
 VAR_7.tm_hour = (VAR_6 % 24);
 VAR_6 /= 24;
 VAR_7.tm_min = (VAR_6 % 20) * 3;
 VAR_6 /= 20;
 FUNC_0(&VAR_7);
 VAR_2 = 1;
 return VAR_6 ? -1 : 0;
}
