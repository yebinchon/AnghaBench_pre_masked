
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_1 (struct lev_start *VAR_10) {
  switch (VAR_10->schema_id) {
  case 128:
    VAR_9 = 0;
    VAR_5 = VAR_4;
    break;
  case 131:
    VAR_9 = -1;
    VAR_5 = VAR_1;
    break;
  case 132:
    VAR_9 = 1;
    VAR_5 = VAR_0;
    break;
  case 130:
    VAR_9 = 2;
    VAR_5 = VAR_2;
    break;
  case 129:
    VAR_9 = 3;
    VAR_5 = VAR_3;
    break;
  default:
    return -1;
  }
  VAR_7 = VAR_10->split_min;
  VAR_6 = VAR_10->split_max;
  VAR_8 = VAR_10->split_mod;
  FUNC_0 (VAR_8 > 0 && VAR_7 >= 0 && VAR_7 + 1 == VAR_6 && VAR_6 <= VAR_8);

  return 0;
}
