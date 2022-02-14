
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bday_year; int bday_month; int bday_day; int uid; } ;
typedef TYPE_1__ user_t ;
struct lev_birthday {int year; int month; int day; int user_id; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2 (struct lev_birthday *VAR_3) {
  user_t *VAR_4 = FUNC_0 (VAR_3->user_id);
  if (!VAR_4) {
    return;
  }
  if (!VAR_3->year || (VAR_3->year >= 1900 && VAR_3->year <= 2017)) {
    FUNC_1 (VAR_4->uid, VAR_2, VAR_4->bday_year, VAR_3->year);
    VAR_4->bday_year = VAR_3->year;
  }
  if (VAR_3->month >= 0 && VAR_3->month <= 12) {
    FUNC_1 (VAR_4->uid, VAR_1, VAR_4->bday_month, VAR_3->month);
    VAR_4->bday_month = VAR_3->month;
  }
  if (VAR_3->day >= 0 && VAR_3->day <= 31) {
    FUNC_1 (VAR_4->uid, VAR_0, VAR_4->bday_day, VAR_3->day);
    VAR_4->bday_day = VAR_3->day;
  }
}
