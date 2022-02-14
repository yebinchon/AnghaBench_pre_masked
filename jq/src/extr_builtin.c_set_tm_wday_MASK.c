
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_wday; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct tm *VAR_0) {
  int VAR_1 = (1900 + VAR_0->tm_year) / 100;
  int VAR_2 = (1900 + VAR_0->tm_year) % 100;
  if (VAR_0->tm_mon < 2)
    VAR_2--;




  int VAR_3 = VAR_0->tm_mon - 1;
  if (VAR_3 < 1)
    VAR_3 += 12;
  int VAR_4 =
    (VAR_0->tm_mday + (int)FUNC_1((2.6 * VAR_3 - 0.2)) + VAR_2 + (int)FUNC_1(VAR_2 / 4.0) + (int)FUNC_1(VAR_1 / 4.0) - 2 * VAR_1) % 7;
  if (VAR_4 < 0)
    VAR_4 += 7;




  VAR_0->tm_wday = VAR_4;
}
