
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1 (struct lev_start *VAR_4) {
  if (VAR_4->schema_id != VAR_0) {
    return -1;
  }
  VAR_2 = VAR_4->split_min;
  VAR_1 = VAR_4->split_max;
  VAR_3 = VAR_4->split_mod;
  FUNC_0 (VAR_3 > 0 && VAR_2 >= 0 && VAR_2 + 1 == VAR_1 && VAR_1 <= VAR_3);
  FUNC_0 (VAR_3 == 1);

  return 0;
}
