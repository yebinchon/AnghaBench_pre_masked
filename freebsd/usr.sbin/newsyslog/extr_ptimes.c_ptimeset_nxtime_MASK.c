
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tm_mon; int tm_mday; int tm_year; int tm_isdst; } ;
struct ptime_data {int tmspec; int tsecs; TYPE_1__ tm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ptime_data*,struct ptime_data*) ;

int
FUNC_4(struct ptime_data *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 struct ptime_data VAR_12;

 if (VAR_7 == ((void*)0))
  return (-1);





 VAR_12 = *VAR_7;




 if (VAR_7->tmspec & VAR_6)
  return (-1);







 VAR_8 = 0;
 if (VAR_7->tmspec & VAR_5) {

  if (VAR_7->tm.tm_mon == 1 && VAR_7->tm.tm_mday == 29) {
   VAR_12.tm.tm_year += 4;
   if (FUNC_0(1, VAR_12.tm.tm_year) < 29)
    VAR_12.tm.tm_year += 4;
  } else {
   VAR_12.tm.tm_year += 1;
  }
  VAR_12.tm.tm_isdst = -1;
  VAR_12.tsecs = FUNC_2(&VAR_12.tm);

 } else if (VAR_7->tmspec & VAR_4) {





  if (VAR_7->tm.tm_mon < 11)
   VAR_8 = FUNC_0(VAR_7->tm.tm_mon + 1,
       VAR_7->tm.tm_year);
  else
   VAR_8 = FUNC_0(0, VAR_7->tm.tm_year + 1);

 } else if (VAR_7->tmspec & VAR_1) {

  VAR_8 = FUNC_0(VAR_7->tm.tm_mon, VAR_7->tm.tm_year);





  VAR_10 = VAR_7->tm.tm_mon;
  VAR_11 = VAR_7->tm.tm_year;
  for (;;) {
   if (VAR_10 < 11)
    VAR_10 += 1;
   else {
    VAR_10 = 0;
    VAR_11 += 1;
   }
   VAR_9 = FUNC_0(VAR_10, VAR_11);
   if (VAR_9 >= VAR_7->tm.tm_mday)
    break;
   VAR_8 += VAR_9;
  }

 } else if (VAR_7->tmspec & VAR_2) {
  VAR_8 = 7;
 } else if (VAR_7->tmspec & VAR_3) {
  VAR_8 = 1;
 }

 if (VAR_8 != 0) {
  VAR_12.tsecs += VAR_0 * 24 * VAR_8;
  VAR_12.tm = *(FUNC_1(&VAR_12.tsecs));
 }





 FUNC_3(&VAR_12, VAR_7);


 *VAR_7 = VAR_12;
 return (0);
}
