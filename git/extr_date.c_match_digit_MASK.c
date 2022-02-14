
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
typedef int time_t ;
struct tm {int tm_year; int tm_mday; int tm_mon; } ;


 scalar_t__ FUNC_0 (int*,struct tm*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int,char,char const*,char*,struct tm*,int ) ;
 scalar_t__ FUNC_3 (struct tm*) ;
 int FUNC_4 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, struct tm *VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4;
 char *VAR_5;
 timestamp_t VAR_6;

 VAR_6 = FUNC_4(VAR_0, &VAR_5, 10);






 if (VAR_6 >= 100000000 && FUNC_3(VAR_1)) {
  time_t VAR_7 = VAR_6;
  if (FUNC_0(&VAR_7, VAR_1)) {
   *VAR_3 = 1;
   return VAR_5 - VAR_0;
  }
 }




 switch (*VAR_5) {
 case ':':
 case '.':
 case '/':
 case '-':
  if (FUNC_1(VAR_5[1])) {
   int VAR_8 = FUNC_2(VAR_6, *VAR_5, VAR_0, VAR_5, VAR_1, 0);
   if (VAR_8)
    return VAR_8;
  }
 }






 VAR_4 = 0;
 do {
  VAR_4++;
 } while (FUNC_1(VAR_0[VAR_4]));


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
