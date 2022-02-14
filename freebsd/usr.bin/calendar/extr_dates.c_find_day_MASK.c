
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_year {int year; struct cal_month* months; struct cal_year* nextyear; } ;
struct cal_month {int month; struct cal_day* days; struct cal_month* nextmonth; } ;
struct cal_day {int dayofmonth; struct cal_day* nextday; } ;


 scalar_t__ VAR_0 ;
 struct cal_year* VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static struct cal_day *
FUNC_1(int VAR_2, int VAR_3, int VAR_4)
{
 struct cal_year *VAR_5;
 struct cal_month *VAR_6;
 struct cal_day *VAR_7;

 if (VAR_0)
  FUNC_0("remember_ymd: %d - %d - %d\n", VAR_2, VAR_3, VAR_4);

 VAR_5 = VAR_1;
 while (VAR_5 != ((void*)0)) {
  if (VAR_5->year != VAR_2) {
   VAR_5 = VAR_5->nextyear;
   continue;
  }
  VAR_6 = VAR_5->months;
  while (VAR_6 != ((void*)0)) {
   if (VAR_6->month != VAR_3) {
    VAR_6 = VAR_6->nextmonth;
    continue;
   }
   VAR_7 = VAR_6->days;
   while (VAR_7 != ((void*)0)) {
    if (VAR_7->dayofmonth == VAR_4)
     return (VAR_7);
    VAR_7 = VAR_7->nextday;
    continue;
   }
   return (((void*)0));
  }
  return (((void*)0));
 }
 return (((void*)0));
}
