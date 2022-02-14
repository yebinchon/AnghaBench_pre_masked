
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; scalar_t__ extra_bytes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_2 (struct lev_start *VAR_4) {
  if (VAR_4->schema_id != VAR_0) {
    FUNC_1 ("LEV_START schema_id isn't to DNS_SCHEMA_V1.\n");
    return -1;
  }
  if (VAR_4->extra_bytes) {
    FUNC_1 ("LEV_START extra_bytes isn't equal to 0.\n");
    return -1;
  }
  VAR_2 = VAR_4->split_min;
  VAR_1 = VAR_4->split_max;
  VAR_3 = VAR_4->split_mod;
  FUNC_0 (VAR_3 > 0 && VAR_2 >= 0 && VAR_2 + 1 == VAR_1 && VAR_1 <= VAR_3);

  return 0;
}
