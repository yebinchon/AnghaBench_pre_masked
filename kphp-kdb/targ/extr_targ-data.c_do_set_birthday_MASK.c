
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_birthday {int year; int day; int month; } ;


 int VAR_0 ;
 struct lev_birthday* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_birthday*) ;

int FUNC_3 (int VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  if (VAR_2 < 0 || VAR_2 > 31 || VAR_3 < 0 || VAR_3 > 12 || (VAR_4 < 1900 && VAR_4) || VAR_4 > 2008 || !FUNC_1 (VAR_1)) {
    return 0;
  }
  struct lev_birthday *VAR_5 = FUNC_0 (VAR_0, 12, VAR_1);
  VAR_5->year = VAR_4;
  VAR_5->day = VAR_2;
  VAR_5->month = VAR_3;
  FUNC_2 (VAR_5);
  return 1;
}
