
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mday; long tm_hour; long tm_min; long tm_sec; scalar_t__ tm_mon; } ;


 long VAR_0 ;

int FUNC_0(int VAR_1, struct rtc_time *VAR_2)
{
 if (!VAR_1) {
  long VAR_3 = VAR_0;
  VAR_2->tm_year = 1;
  VAR_2->tm_mon = 0;
  VAR_2->tm_mday = 1;
  VAR_2->tm_hour = (VAR_3 >> 24) % 24;
  VAR_2->tm_min = (VAR_3 >> 16) % 60;
  VAR_2->tm_sec = VAR_3 % 60;
 }

 return 0;
}
