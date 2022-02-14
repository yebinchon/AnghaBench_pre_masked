
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,struct rtc_time*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(time64_t VAR_8)
{
 struct rtc_time VAR_9;
 unsigned long VAR_10;


 FUNC_3(VAR_8, &VAR_9);







 FUNC_4(&VAR_7, VAR_10);
 VAR_9.tm_sec = FUNC_0(VAR_9.tm_sec);
 FUNC_2(VAR_5, VAR_9.tm_sec);

 VAR_9.tm_min = FUNC_0(VAR_9.tm_min);
 FUNC_2(VAR_3, VAR_9.tm_min);

 VAR_9.tm_hour = FUNC_0(VAR_9.tm_hour);
 VAR_9.tm_hour = (VAR_9.tm_hour & 0x3f) | (FUNC_1(VAR_2) & 0xc0);
 FUNC_2(VAR_2, VAR_9.tm_hour);


 if (VAR_9.tm_wday == 0) VAR_9.tm_wday = 7;
 VAR_9.tm_wday = FUNC_0(VAR_9.tm_wday);
 FUNC_2(VAR_1, VAR_9.tm_wday);

 VAR_9.tm_mday = FUNC_0(VAR_9.tm_mday);
 FUNC_2(VAR_0, VAR_9.tm_mday);


 VAR_9.tm_mon ++;
 VAR_9.tm_mon = FUNC_0(VAR_9.tm_mon);
 FUNC_2(VAR_4, VAR_9.tm_mon);


 VAR_9.tm_year %= 100;
 VAR_9.tm_year = FUNC_0(VAR_9.tm_year);
 FUNC_2(VAR_6, VAR_9.tm_year);
 FUNC_5(&VAR_7, VAR_10);

 return 0;
}
