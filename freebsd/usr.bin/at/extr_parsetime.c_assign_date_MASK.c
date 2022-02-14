
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; long tm_mon; long tm_mday; } ;


 struct tm* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct tm *VAR_0, long VAR_1, long VAR_2, long VAR_3)
{





    if (VAR_3 != -1) {
 if (VAR_3 >= 1900)
  VAR_3 -= 1900;
 else if (VAR_3 < 100) {

  struct tm *VAR_4;
  time_t VAR_5;

  FUNC_1(&VAR_5);
  VAR_4 = FUNC_0(&VAR_5);


  VAR_3 += (VAR_4->tm_year / 100) * 100;

  if (VAR_3 == VAR_4->tm_year - 1) VAR_3++;
  else if (VAR_3 < VAR_4->tm_year)
   VAR_3 += 100;
 }
    }

    if (VAR_3 < 0 &&
 (VAR_0->tm_mon > VAR_2 ||(VAR_0->tm_mon == VAR_2 && VAR_0->tm_mday > VAR_1)))
 VAR_3 = VAR_0->tm_year + 1;

    VAR_0->tm_mday = VAR_1;
    VAR_0->tm_mon = VAR_2;

    if (VAR_3 >= 0)
 VAR_0->tm_year = VAR_3;
}
