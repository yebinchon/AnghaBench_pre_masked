
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_wday; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0, u64 VAR_1, struct rtc_time *VAR_2)
{
 VAR_2->tm_year = ((FUNC_0(VAR_0 >> 24) * 100) +
      FUNC_0((VAR_0 >> 16) & 0xff)) - 1900;
 VAR_2->tm_mon = FUNC_0((VAR_0 >> 8) & 0xff) - 1;
 VAR_2->tm_mday = FUNC_0(VAR_0 & 0xff);
 VAR_2->tm_hour = FUNC_0((VAR_1 >> 56) & 0xff);
 VAR_2->tm_min = FUNC_0((VAR_1 >> 48) & 0xff);
 VAR_2->tm_sec = FUNC_0((VAR_1 >> 40) & 0xff);
 VAR_2->tm_wday = -1;
}
