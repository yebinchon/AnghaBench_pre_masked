
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rtc_time {int tm_isdst; int tm_yday; int tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_5__ {int daylight; scalar_t__ year; scalar_t__ month; int day; int hour; int minute; int second; } ;
typedef TYPE_1__ efi_time_t ;




 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct rtc_time*,int ,int) ;

__attribute__((used)) static void
FUNC_3(efi_time_t *VAR_0, struct rtc_time *VAR_1)
{
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->tm_sec = VAR_0->second;
 VAR_1->tm_min = VAR_0->minute;
 VAR_1->tm_hour = VAR_0->hour;
 VAR_1->tm_mday = VAR_0->day;
 VAR_1->tm_mon = VAR_0->month - 1;
 VAR_1->tm_year = VAR_0->year - 1900;


 VAR_1->tm_wday = FUNC_0(VAR_0);


 VAR_1->tm_yday = FUNC_1(VAR_0);


 switch (VAR_0->daylight & 129) {
  case 129:
   VAR_1->tm_isdst = 1;
   break;
  case 128:
   VAR_1->tm_isdst = 0;
   break;
  default:
   VAR_1->tm_isdst = -1;
 }
}
