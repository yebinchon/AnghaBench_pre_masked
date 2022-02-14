
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_year {int year; struct cal_month* months; struct cal_year* nextyear; } ;
struct cal_month {int month; struct cal_month* nextmonth; struct cal_day* days; } ;
struct cal_day {int julianday; int dayofmonth; struct cal_day* nextday; } ;


 scalar_t__ VAR_0 ;
 struct cal_year* VAR_1 ;
 int FUNC_0 (char*,int,int) ;

int
FUNC_1(int VAR_2, int VAR_3, int *VAR_4, int *VAR_5)
{
 struct cal_year *VAR_6;
 struct cal_month *VAR_7;
 struct cal_day *VAR_8;

 if (VAR_0)
  FUNC_0("remember_yd: %d - %d\n", VAR_2, VAR_3);

 VAR_6 = VAR_1;
 while (VAR_6 != ((void*)0)) {
  if (VAR_6->year != VAR_2) {
   VAR_6 = VAR_6->nextyear;
   continue;
  }
  VAR_7 = VAR_6->months;
  while (VAR_7 != ((void*)0)) {
   VAR_8 = VAR_7->days;
   while (VAR_8 != ((void*)0)) {
    if (VAR_8->julianday == VAR_3) {
     *VAR_4 = VAR_7->month;
     *VAR_5 = VAR_8->dayofmonth;
     return (1);
    }
    VAR_8 = VAR_8->nextday;
   }
   VAR_7 = VAR_7->nextmonth;
  }
  return (0);
 }
 return (0);
}
