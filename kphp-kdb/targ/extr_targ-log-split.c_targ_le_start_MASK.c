
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; int split_mod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1 (struct lev_start *VAR_8) {
  if (VAR_8->schema_id != VAR_0) {
    return -1;
  }
  if (VAR_5) {
    return 0;

  }
  VAR_4 = VAR_8->split_min;
  VAR_3 = VAR_8->split_max;
  VAR_5 = VAR_8->split_mod;
  FUNC_0 (VAR_5 > 0 && VAR_4 >= 0 && VAR_4 + 1 == VAR_3 && VAR_3 <= VAR_5);
  if (VAR_6) {
    FUNC_0 (VAR_1 / VAR_6 % VAR_5 == 0);
  } else {
    FUNC_0 (VAR_1 % VAR_5 == 0);
    VAR_6 = VAR_1 / VAR_5;
  }
  VAR_7 = VAR_2 / (VAR_1 / VAR_6);

  return 0;
}
