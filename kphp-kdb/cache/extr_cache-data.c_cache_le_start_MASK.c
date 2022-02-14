
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {scalar_t__ schema_id; int extra_bytes; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; int str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3 (struct lev_start *VAR_5) {
  if (VAR_5->schema_id != VAR_0) {
    FUNC_1 ("LEV_START schema_id isn't to CACHE_SCHEMA_V1.\n");
    return -1;
  }
  if (VAR_5->extra_bytes < 4) {
    FUNC_1 ("LEV_START extra_bytes isn't equal to 4.\n");
    return -1;
  }
  VAR_3 = VAR_5->split_min;
  VAR_2 = VAR_5->split_max;
  VAR_4 = VAR_5->split_mod;
  FUNC_0 (VAR_4 > 0 && VAR_3 >= 0 && VAR_3 + 1 == VAR_2 && VAR_2 <= VAR_4);

  FUNC_2 (&VAR_1, VAR_5->str, 4);

  return 0;
}
