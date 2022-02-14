
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_year {int year; int firstdayofweek; struct cal_year* nextyear; struct cal_month* months; } ;
struct cal_month {int month; int firstdayjulian; int firstdayofweek; struct cal_month* nextmonth; struct cal_day* days; } ;
struct cal_day {int dayofmonth; int julianday; int dayofweek; struct cal_day* nextday; } ;


 struct cal_year* VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;

void
FUNC_1(void)
{
 struct cal_year *VAR_1;
 struct cal_month *VAR_2;
 struct cal_day *VAR_3;

 VAR_1 = VAR_0;
 while (VAR_1 != ((void*)0)) {
  FUNC_0("%-5d (wday:%d)\n", VAR_1->year, VAR_1->firstdayofweek);
  VAR_2 = VAR_1->months;
  while (VAR_2 != ((void*)0)) {
   FUNC_0("-- %-5d (julian:%d, dow:%d)\n", VAR_2->month,
       VAR_2->firstdayjulian, VAR_2->firstdayofweek);
   VAR_3 = VAR_2->days;
   while (VAR_3 != ((void*)0)) {
    FUNC_0("  -- %-5d (julian:%d, dow:%d)\n",
        VAR_3->dayofmonth, VAR_3->julianday, VAR_3->dayofweek);
    VAR_3 = VAR_3->nextday;
   }
   VAR_2 = VAR_2->nextmonth;
  }
  VAR_1 = VAR_1->nextyear;
 }
}
