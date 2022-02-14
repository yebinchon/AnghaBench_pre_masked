
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; } ;


 int FUNC_0 (int,int,int) ;
 size_t FUNC_1 (int) ;
 int* VAR_0 ;
 int** VAR_1 ;

void
FUNC_2(struct tm *VAR_2, struct tm *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_4 = VAR_2->tm_year;
 VAR_5 = VAR_2->tm_mon + 1;
 VAR_6 = VAR_2->tm_mday;
 VAR_7 = VAR_3->tm_year;
 VAR_8 = VAR_3->tm_mon + 1;
 VAR_9 = VAR_3->tm_mday;

 if (VAR_4 == VAR_7) {
  if (VAR_5 == VAR_8) {

   for (VAR_12 = VAR_6; VAR_12 <= VAR_9; VAR_12++)
    FUNC_0(VAR_4, VAR_5, VAR_12);
   return;
  }






  VAR_0 = VAR_1[FUNC_1(VAR_4)];
  for (VAR_12 = VAR_6; VAR_12 <= VAR_0[VAR_5]; VAR_12++)
   FUNC_0(VAR_4, VAR_5, VAR_12);
  for (VAR_11 = VAR_5 + 1; VAR_11 < VAR_8; VAR_11++)
   for (VAR_12 = 1; VAR_12 <= VAR_0[VAR_11]; VAR_12++)
    FUNC_0(VAR_4, VAR_11, VAR_12);
  for (VAR_12 = 1; VAR_12 <= VAR_9; VAR_12++)
   FUNC_0(VAR_4, VAR_8, VAR_12);
  return;
 }
 VAR_0 = VAR_1[FUNC_1(VAR_4)];
 for (VAR_12 = VAR_6; VAR_12 <= VAR_0[VAR_5]; VAR_12++)
  FUNC_0(VAR_4, VAR_5, VAR_12);
 for (VAR_11 = VAR_5 + 1; VAR_11 <= 12; VAR_11++)
  for (VAR_12 = 1; VAR_12 <= VAR_0[VAR_11]; VAR_12++)
   FUNC_0(VAR_4, VAR_11, VAR_12);
 for (VAR_10 = VAR_4 + 1; VAR_10 < VAR_7; VAR_10++) {
  VAR_0 = VAR_1[FUNC_1(VAR_10)];
  for (VAR_11 = 1; VAR_11 <= 12; VAR_11++)
   for (VAR_12 = 1; VAR_12 <= VAR_0[VAR_11]; VAR_12++)
    FUNC_0(VAR_10, VAR_11, VAR_12);
 }
 VAR_0 = VAR_1[FUNC_1(VAR_7)];
 for (VAR_11 = 1; VAR_11 < VAR_8; VAR_11++)
  for (VAR_12 = 1; VAR_12 <= VAR_0[VAR_11]; VAR_12++)
   FUNC_0(VAR_7, VAR_11, VAR_12);
 for (VAR_12 = 1; VAR_12 <= VAR_9; VAR_12++)
  FUNC_0(VAR_7, VAR_8, VAR_12);
}
