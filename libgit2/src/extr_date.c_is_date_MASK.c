
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_mon; int tm_mday; int tm_year; } ;


 scalar_t__ FUNC_0 (struct tm*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2, struct tm *VAR_3, time_t VAR_4, struct tm *VAR_5)
{
 if (VAR_1 > 0 && VAR_1 < 13 && VAR_2 > 0 && VAR_2 < 32) {
  struct tm VAR_6 = *VAR_5;
  struct tm *VAR_7 = (VAR_3 ? &VAR_6 : VAR_5);
  time_t VAR_8;

  VAR_7->tm_mon = VAR_1 - 1;
  VAR_7->tm_mday = VAR_2;
  if (VAR_0 == -1) {
   if (!VAR_3)
    return 1;
   VAR_7->tm_year = VAR_3->tm_year;
  }
  else if (VAR_0 >= 1970 && VAR_0 < 2100)
   VAR_7->tm_year = VAR_0 - 1900;
  else if (VAR_0 > 70 && VAR_0 < 100)
   VAR_7->tm_year = VAR_0;
  else if (VAR_0 < 38)
   VAR_7->tm_year = VAR_0 + 100;
  else
   return 0;
  if (!VAR_3)
   return 1;

  VAR_8 = FUNC_0(VAR_7);





  if (VAR_4 + 10*24*3600 < VAR_8)
   return 0;
  VAR_5->tm_mon = VAR_7->tm_mon;
  VAR_5->tm_mday = VAR_7->tm_mday;
  if (VAR_0 != -1)
   VAR_5->tm_year = VAR_7->tm_year;
  return 1;
 }
 return 0;
}
