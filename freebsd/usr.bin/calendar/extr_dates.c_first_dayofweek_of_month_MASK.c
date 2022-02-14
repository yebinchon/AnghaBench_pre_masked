
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_year {int year; struct cal_month* months; struct cal_year* nextyear; } ;
struct cal_month {int month; int firstdayofweek; struct cal_month* nextmonth; } ;


 struct cal_year* VAR_0 ;

int
FUNC_0(int VAR_1, int VAR_2)
{
 struct cal_year *VAR_3;
 struct cal_month *VAR_4;

 VAR_3 = VAR_0;
 while (VAR_3 != ((void*)0)) {
  if (VAR_3->year != VAR_1) {
   VAR_3 = VAR_3->nextyear;
   continue;
  }
  VAR_4 = VAR_3->months;
  while (VAR_4 != ((void*)0)) {
   if (VAR_4->month == VAR_2)
    return (VAR_4->firstdayofweek);
   VAR_4 = VAR_4->nextmonth;
  }

  return (-1);
 }


        return (-1);
}
