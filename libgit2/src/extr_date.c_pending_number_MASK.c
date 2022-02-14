
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mday; int tm_mon; int tm_year; } ;



__attribute__((used)) static void FUNC_0(struct tm *VAR_0, int *VAR_1)
{
 int VAR_2 = *VAR_1;

 if (VAR_2) {
  *VAR_1 = 0;
  if (VAR_0->tm_mday < 0 && VAR_2 < 32)
   VAR_0->tm_mday = VAR_2;
  else if (VAR_0->tm_mon < 0 && VAR_2 < 13)
   VAR_0->tm_mon = VAR_2-1;
  else if (VAR_0->tm_year < 0) {
   if (VAR_2 > 1969 && VAR_2 < 2100)
    VAR_0->tm_year = VAR_2 - 1900;
   else if (VAR_2 > 69 && VAR_2 < 100)
    VAR_0->tm_year = VAR_2;
   else if (VAR_2 < 38)
    VAR_0->tm_year = 100 + VAR_2;

  }
 }
}
