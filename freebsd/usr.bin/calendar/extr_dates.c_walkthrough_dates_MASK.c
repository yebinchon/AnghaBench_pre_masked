
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
struct cal_year {struct cal_month* months; struct cal_year* nextyear; } ;
struct cal_month {struct cal_day* days; struct cal_month* nextmonth; } ;
struct cal_day {struct event* events; struct cal_day* nextday; } ;


 struct cal_year* VAR_0 ;

int
FUNC_0(struct event **VAR_1)
{
 static struct cal_year *VAR_2 = ((void*)0);
 static struct cal_month *VAR_3 = ((void*)0);
 static struct cal_day *VAR_4 = ((void*)0);

 if (VAR_2 == ((void*)0)) {
  VAR_2 = VAR_0;
  VAR_3 = VAR_2->months;
  VAR_4 = VAR_3->days;
  *VAR_1 = VAR_4->events;
  return (1);
 }
 if (VAR_4->nextday != ((void*)0)) {
  VAR_4 = VAR_4->nextday;
  *VAR_1 = VAR_4->events;
  return (1);
 }
 if (VAR_3->nextmonth != ((void*)0)) {
  VAR_3 = VAR_3->nextmonth;
  VAR_4 = VAR_3->days;
  *VAR_1 = VAR_4->events;
  return (1);
 }
 if (VAR_2->nextyear != ((void*)0)) {
  VAR_2 = VAR_2->nextyear;
  VAR_3 = VAR_2->months;
  VAR_4 = VAR_3->days;
  *VAR_1 = VAR_4->events;
  return (1);
 }

 return (0);
}
