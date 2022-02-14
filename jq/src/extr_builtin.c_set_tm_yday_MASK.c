
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mon; int tm_year; int const tm_mday; int tm_yday; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct tm *VAR_0) {
  static const int VAR_1[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
  int VAR_2 = VAR_0->tm_mon;
  int VAR_3 = 1900 + VAR_0->tm_year;
  int VAR_4 = 0;
  if (VAR_0->tm_mon > 1 &&
      ((VAR_3 % 4 == 0 && VAR_3 % 100 != 0) || (VAR_3 % 400 == 0)))
    VAR_4 = 1;


  if (VAR_2 < 0)
    VAR_2 = -VAR_2;
  if (VAR_2 > 11)
    VAR_2 %= 12;

  int VAR_5 = VAR_1[VAR_2] + VAR_4 + VAR_0->tm_mday - 1;
  FUNC_0(VAR_5 == VAR_0->tm_yday || VAR_0->tm_yday == 367);
  VAR_0->tm_yday = VAR_5;
}
