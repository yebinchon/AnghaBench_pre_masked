
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; int extra_bytes; int str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_4 (struct lev_start *VAR_6) {
  if (VAR_6->schema_id != VAR_0) {
    return -1;
  }
  VAR_3 = VAR_6->split_min;
  VAR_2 = VAR_6->split_max;
  VAR_4 = VAR_6->split_mod;
  FUNC_0 (VAR_6->extra_bytes == 8);
  FUNC_0 (VAR_4 > 0 && VAR_3 >= 0 && VAR_3 + 1 == VAR_2 && VAR_2 <= VAR_4);

  FUNC_3 (&VAR_1, VAR_6->str, 8);
  if (VAR_5 && VAR_5 != VAR_1) {
    FUNC_2 ("aux_volume_id isn't equal to main_volume_id");
    FUNC_1 (1);
  }

  return 0;
}
