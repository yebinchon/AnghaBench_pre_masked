
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_logs_set_color {long long field_value; int cnt; int and_mask; int xor_mask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct lev_logs_set_color* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (struct lev_logs_set_color*) ;

int FUNC_2 (int VAR_3, long long VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (VAR_3 < 0 || VAR_3 >= VAR_0 || VAR_5 <= 0 || VAR_5 >= VAR_2) {
    return 0;
  }

  struct lev_logs_set_color *VAR_8 =
    FUNC_0 (VAR_1 + VAR_3, sizeof (struct lev_logs_set_color), 0);

  VAR_8->field_value = VAR_4;
  VAR_8->cnt = VAR_5;
  VAR_8->and_mask = VAR_6;
  VAR_8->xor_mask = VAR_7;

  return FUNC_1 (VAR_8);
}
