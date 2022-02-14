
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mday; int tm_wday; } ;
struct cal_year {int year; int firstdayofweek; struct cal_month* months; struct cal_year* nextyear; int paskha; int easter; } ;
struct cal_month {int month; int firstdayjulian; int firstdayofweek; struct cal_day* days; struct cal_month* nextmonth; struct cal_year* year; } ;
struct cal_day {int dayofmonth; int julianday; int dayofweek; struct cal_day* nextday; struct cal_year* year; struct cal_month* month; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int** VAR_0 ;
 int FUNC_1 (int) ;
 struct cal_year* VAR_1 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int *,struct tm*) ;
 int FUNC_4 (struct tm*) ;
 int FUNC_5 (int) ;
 struct tm VAR_2 ;

__attribute__((used)) static void
FUNC_6(int VAR_3, int VAR_4, int VAR_5)
{
 struct cal_year *VAR_6, *VAR_7;
 struct cal_month *VAR_8, *VAR_9;
 struct cal_day *VAR_10, *VAR_11;
 int *VAR_12;

 VAR_7 = ((void*)0);
 VAR_6 = VAR_1;
 while (VAR_6 != ((void*)0)) {
  if (VAR_6->year == VAR_3 + 1900)
   break;
  VAR_7 = VAR_6;
  VAR_6 = VAR_6->nextyear;
 }

 if (VAR_6 == ((void*)0)) {
  struct tm VAR_13;
  time_t VAR_14;
  VAR_6 = (struct cal_year *)FUNC_0(1, sizeof(struct cal_year));
  VAR_6->year = VAR_3 + 1900;
  VAR_6->easter = FUNC_1(VAR_3);
  VAR_6->paskha = FUNC_5(VAR_3);

  VAR_13 = VAR_2;
  VAR_13.tm_year = VAR_3;
  VAR_13.tm_mday = 1;
  VAR_14 = FUNC_4(&VAR_13);
  FUNC_3(&VAR_14, &VAR_13);
  VAR_6->firstdayofweek = VAR_13.tm_wday;

  if (VAR_7 != ((void*)0))
   VAR_7->nextyear = VAR_6;
 }
 if (VAR_7 == ((void*)0)) {

  VAR_1 = VAR_6;
 }

 VAR_9 = ((void*)0);
 VAR_8 = VAR_6->months;
 while (VAR_8 != ((void*)0)) {
  if (VAR_8->month == VAR_4)
   break;
  VAR_9 = VAR_8;
  VAR_8 = VAR_8->nextmonth;
 }

 if (VAR_8 == ((void*)0)) {
  VAR_8 = (struct cal_month *)FUNC_0(1, sizeof(struct cal_month));
  VAR_8->year = VAR_6;
  VAR_8->month = VAR_4;
  VAR_12 = VAR_0[FUNC_2(VAR_3)];
  VAR_8->firstdayjulian = VAR_12[VAR_4] + 2;
  VAR_8->firstdayofweek =
      (VAR_6->firstdayofweek + VAR_8->firstdayjulian -1) % 7;
  if (VAR_9 != ((void*)0))
   VAR_9->nextmonth = VAR_8;
 }
 if (VAR_9 == ((void*)0))
  VAR_6->months = VAR_8;

 VAR_11 = ((void*)0);
 VAR_10 = VAR_8->days;
 while (VAR_10 != ((void*)0)) {
  VAR_11 = VAR_10;
  VAR_10 = VAR_10->nextday;
 }

 if (VAR_10 == ((void*)0)) {
  VAR_10 = (struct cal_day *)FUNC_0(1, sizeof(struct cal_day));
  VAR_10->month = VAR_8;
  VAR_10->year = VAR_6;
  VAR_10->dayofmonth = VAR_5;
  VAR_10->julianday = VAR_8->firstdayjulian + VAR_5 - 1;
  VAR_10->dayofweek = (VAR_8->firstdayofweek + VAR_5 - 1) % 7;
  if (VAR_11 != ((void*)0))
   VAR_11->nextday = VAR_10;
 }
 if (VAR_11 == ((void*)0))
  VAR_8->days = VAR_10;
}
