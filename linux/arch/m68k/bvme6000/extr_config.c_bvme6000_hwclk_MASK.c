
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; scalar_t__ tm_wday; } ;
struct TYPE_2__ {int msr; int t0cr_rtmr; void* bcd_dow; void* bcd_year; void* bcd_mth; void* bcd_dom; void* bcd_hr; void* bcd_min; void* bcd_sec; scalar_t__ bcd_tenms; } ;
typedef TYPE_1__* RtcPtr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (int) ;

int FUNC_2(int VAR_1, struct rtc_time *VAR_2)
{
 volatile RtcPtr_t VAR_3 = (RtcPtr_t)VAR_0;
 unsigned char VAR_4 = VAR_3->msr & 0xc0;

 VAR_3->msr = 0x40;

 if (VAR_1)
 {
  VAR_3->t0cr_rtmr = VAR_2->tm_year%4;
  VAR_3->bcd_tenms = 0;
  VAR_3->bcd_sec = FUNC_1(VAR_2->tm_sec);
  VAR_3->bcd_min = FUNC_1(VAR_2->tm_min);
  VAR_3->bcd_hr = FUNC_1(VAR_2->tm_hour);
  VAR_3->bcd_dom = FUNC_1(VAR_2->tm_mday);
  VAR_3->bcd_mth = FUNC_1(VAR_2->tm_mon + 1);
  VAR_3->bcd_year = FUNC_1(VAR_2->tm_year%100);
  if (VAR_2->tm_wday >= 0)
   VAR_3->bcd_dow = FUNC_1(VAR_2->tm_wday+1);
  VAR_3->t0cr_rtmr = VAR_2->tm_year%4 | 0x08;
 }
 else
 {
  do {
   VAR_2->tm_sec = FUNC_0(VAR_3->bcd_sec);
   VAR_2->tm_min = FUNC_0(VAR_3->bcd_min);
   VAR_2->tm_hour = FUNC_0(VAR_3->bcd_hr);
   VAR_2->tm_mday = FUNC_0(VAR_3->bcd_dom);
   VAR_2->tm_mon = FUNC_0(VAR_3->bcd_mth)-1;
   VAR_2->tm_year = FUNC_0(VAR_3->bcd_year);
   if (VAR_2->tm_year < 70)
    VAR_2->tm_year += 100;
   VAR_2->tm_wday = FUNC_0(VAR_3->bcd_dow)-1;
  } while (VAR_2->tm_sec != FUNC_0(VAR_3->bcd_sec));
 }

 VAR_3->msr = VAR_4;

 return 0;
}
