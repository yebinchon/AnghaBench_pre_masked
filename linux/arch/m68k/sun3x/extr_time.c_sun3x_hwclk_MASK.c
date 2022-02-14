
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct mostek_dt {int csr; void* year; void* month; void* mday; void* wday; void* hour; void* min; void* sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

int FUNC_4(int VAR_4, struct rtc_time *VAR_5)
{
 volatile struct mostek_dt *VAR_6 =
  (struct mostek_dt *)(VAR_3+VAR_2);
 unsigned long VAR_7;

 FUNC_3(VAR_7);

 if(VAR_4) {
  VAR_6->csr |= VAR_1;
  VAR_6->sec = FUNC_1(VAR_5->tm_sec);
  VAR_6->min = FUNC_1(VAR_5->tm_min);
  VAR_6->hour = FUNC_1(VAR_5->tm_hour);
  VAR_6->wday = FUNC_1(VAR_5->tm_wday);
  VAR_6->mday = FUNC_1(VAR_5->tm_mday);
  VAR_6->month = FUNC_1(VAR_5->tm_mon + 1);
  VAR_6->year = FUNC_1(VAR_5->tm_year % 100);
  VAR_6->csr &= ~VAR_1;
 } else {
  VAR_6->csr |= VAR_0;
  VAR_5->tm_sec = FUNC_0(VAR_6->sec);
  VAR_5->tm_min = FUNC_0(VAR_6->min);
  VAR_5->tm_hour = FUNC_0(VAR_6->hour);
  VAR_5->tm_wday = FUNC_0(VAR_6->wday);
  VAR_5->tm_mday = FUNC_0(VAR_6->mday);
  VAR_5->tm_mon = FUNC_0(VAR_6->month) - 1;
  VAR_5->tm_year = FUNC_0(VAR_6->year);
  VAR_6->csr &= ~VAR_0;
  if (VAR_5->tm_year < 70)
   VAR_5->tm_year += 100;
 }

 FUNC_2(VAR_7);

 return 0;
}
