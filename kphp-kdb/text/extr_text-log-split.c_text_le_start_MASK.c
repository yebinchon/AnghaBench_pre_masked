
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {scalar_t__ schema_id; int split_mod; int split_min; int split_max; int extra_bytes; int* str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1 (struct lev_start *VAR_5) {
  FUNC_0 (VAR_5->schema_id == VAR_0);
  if (VAR_4) {
    FUNC_0 (VAR_5->split_mod >= VAR_4 && !(VAR_5->split_mod % VAR_4) && VAR_3 == VAR_5->split_min % VAR_4 && VAR_5->split_max == VAR_5->split_min + 1);
  }
  VAR_3 = VAR_5->split_min;
  VAR_2 = VAR_5->split_max;
  VAR_4 = VAR_5->split_mod;
  FUNC_0 (VAR_4 > 0 && VAR_3 >= 0 && VAR_3 + 1 == VAR_2 && VAR_2 <= VAR_4);

  VAR_1 = 0;
  if (VAR_5->extra_bytes >= 3 && VAR_5->str[0] == 1) {
    VAR_1 = *(unsigned short *) (VAR_5->str + 1);
  }

  return 0;
}
