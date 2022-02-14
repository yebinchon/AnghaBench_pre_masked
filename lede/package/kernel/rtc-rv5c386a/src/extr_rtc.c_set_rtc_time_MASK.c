
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct rtc_time *VAR_4)
{
 VAR_4->tm_sec = FUNC_5(VAR_4->tm_sec);
 VAR_4->tm_min = FUNC_5(VAR_4->tm_min);
 VAR_4->tm_hour = FUNC_5(VAR_4->tm_hour);
 VAR_4->tm_mday = FUNC_5(VAR_4->tm_mday);
 VAR_4->tm_mon = FUNC_5(VAR_4->tm_mon + 1);
 VAR_4->tm_year = FUNC_5(VAR_4->tm_year);

 if (VAR_4->tm_year >= 0x100) {
  VAR_4->tm_year -= 0x100;
  VAR_4->tm_mon |= VAR_2;
 }

 FUNC_3(&VAR_3);
 FUNC_1();
 FUNC_0(VAR_1 | VAR_0);
 FUNC_0(0x00);
 FUNC_0(VAR_4->tm_sec);
 FUNC_0(VAR_4->tm_min);
 FUNC_0(VAR_4->tm_hour);
 FUNC_0(VAR_4->tm_wday);
 FUNC_0(VAR_4->tm_mday);
 FUNC_0(VAR_4->tm_mon);
 FUNC_0(VAR_4->tm_year);
 FUNC_2();
 FUNC_4(&VAR_3);
}
