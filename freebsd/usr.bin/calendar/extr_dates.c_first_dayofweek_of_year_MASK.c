
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_year {int year; int firstdayofweek; struct cal_year* nextyear; } ;


 struct cal_year* VAR_0 ;

int
FUNC_0(int VAR_1)
{
 struct cal_year *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2 != ((void*)0)) {
  if (VAR_2->year == VAR_1)
   return (VAR_2->firstdayofweek);
  VAR_2 = VAR_2->nextyear;
 }


 return (-1);
}
