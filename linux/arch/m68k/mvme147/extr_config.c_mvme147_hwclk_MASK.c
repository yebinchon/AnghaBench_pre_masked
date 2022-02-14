
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int tm_year; void* tm_sec; void* tm_min; void* tm_hour; void* tm_mday; void* tm_mon; } ;
struct TYPE_2__ {scalar_t__ ctrl; int bcd_sec; int bcd_min; int bcd_hr; int bcd_dom; int bcd_mth; int bcd_year; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;

int FUNC_1(int VAR_2, struct rtc_time *VAR_3)
{

 if (!VAR_2) {
  VAR_1->ctrl = VAR_0;
  VAR_3->tm_year = FUNC_0 (VAR_1->bcd_year);
  VAR_3->tm_mon = FUNC_0(VAR_1->bcd_mth) - 1;
  VAR_3->tm_mday = FUNC_0 (VAR_1->bcd_dom);
  VAR_3->tm_hour = FUNC_0 (VAR_1->bcd_hr);
  VAR_3->tm_min = FUNC_0 (VAR_1->bcd_min);
  VAR_3->tm_sec = FUNC_0 (VAR_1->bcd_sec);
  VAR_1->ctrl = 0;
  if (VAR_3->tm_year < 70)
   VAR_3->tm_year += 100;
 }
 return 0;
}
