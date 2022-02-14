
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; } ;


 int FUNC_0 (struct rtc_time*) ;
 int FUNC_1 (char*,struct rtc_time*,struct rtc_time*) ;

__attribute__((used)) static unsigned int FUNC_2(void)
{
 struct rtc_time VAR_0;
 unsigned int VAR_1;

 FUNC_0(&VAR_0);
 FUNC_1("RTC time: %ptRt, date: %ptRd\n", &VAR_0, &VAR_0);
 VAR_1 = VAR_0.tm_year;
 if (VAR_1 > 100)
  VAR_1 -= 100;
 VAR_1 += VAR_0.tm_mon * 100;
 VAR_1 += (VAR_0.tm_mday-1) * 100 * 12;
 VAR_1 += VAR_0.tm_hour * 100 * 12 * 28;
 VAR_1 += (VAR_0.tm_min / 3) * 100 * 12 * 28 * 24;
 return VAR_1;
}
