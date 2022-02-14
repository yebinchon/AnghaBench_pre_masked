
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long time_t ;
struct tm {unsigned long tm_year; unsigned long tm_mday; unsigned long tm_mon; } ;


 scalar_t__ FUNC_0 (char const) ;
 size_t FUNC_1 (unsigned long,char,char const*,char*,struct tm*) ;
 scalar_t__ FUNC_2 (struct tm*) ;
 scalar_t__ FUNC_3 (unsigned long*,struct tm*) ;
 unsigned long FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static size_t FUNC_5(const char *VAR_0, struct tm *VAR_1, int *VAR_2, int *VAR_3)
{
 size_t VAR_4;
 char *VAR_5;
 unsigned long VAR_6;

 VAR_6 = FUNC_4(VAR_0, &VAR_5, 10);






 if (VAR_6 >= 100000000 && FUNC_2(VAR_1)) {
  time_t VAR_7 = VAR_6;
  if (FUNC_3(&VAR_7, VAR_1)) {
   *VAR_3 = 1;
   return VAR_5 - VAR_0;
  }
 }




 switch (*VAR_5) {
 case ':':
 case '.':
 case '/':
 case '-':
  if (FUNC_0(VAR_5[1])) {
   size_t VAR_8 = FUNC_1(VAR_6, *VAR_5, VAR_0, VAR_5, VAR_1);
   if (VAR_8)
    return VAR_8;
  }
 }






 VAR_4 = 0;
 do {
  VAR_4++;
 } while (FUNC_0(VAR_0[VAR_4]));


 if (VAR_4 == 4) {
  if (VAR_6 <= 1400 && *VAR_2 == -1) {
   unsigned int VAR_9 = VAR_6 % 100;
   unsigned int VAR_10 = VAR_6 / 100;
   *VAR_2 = VAR_10*60 + VAR_9;
  } else if (VAR_6 > 1900 && VAR_6 < 2100)
   VAR_1->tm_year = VAR_6 - 1900;
  return VAR_4;
 }





 if (VAR_4 > 2)
  return VAR_4;
 if (VAR_6 > 0 && VAR_6 < 32 && VAR_1->tm_mday < 0) {
  VAR_1->tm_mday = VAR_6;
  return VAR_4;
 }


 if (VAR_4 == 2 && VAR_1->tm_year < 0) {
  if (VAR_6 < 10 && VAR_1->tm_mday >= 0) {
   VAR_1->tm_year = VAR_6 + 100;
   return VAR_4;
  }
  if (VAR_6 >= 70) {
   VAR_1->tm_year = VAR_6;
   return VAR_4;
  }
 }

 if (VAR_6 > 0 && VAR_6 < 13 && VAR_1->tm_mon < 0)
  VAR_1->tm_mon = VAR_6-1;

 return VAR_4;
}
