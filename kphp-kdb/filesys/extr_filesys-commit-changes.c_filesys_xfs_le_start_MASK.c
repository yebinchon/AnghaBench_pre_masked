
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; int extra_bytes; int str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (long long*,int ,int) ;
 long long VAR_4 ;

__attribute__((used)) static int FUNC_2 (struct lev_start *VAR_5) {
  if (VAR_5->schema_id != VAR_0) {
    return -1;
  }
  long long VAR_6;
  VAR_2 = VAR_5->split_min;
  VAR_1 = VAR_5->split_max;
  VAR_3 = VAR_5->split_mod;
  FUNC_0 (VAR_3 > 0 && VAR_2 >= 0 && VAR_2 + 1 == VAR_1 && VAR_1 <= VAR_3);
  FUNC_0 (VAR_5->extra_bytes == 8);
  FUNC_1 (&VAR_6, VAR_5->str, 8);






  VAR_4 = VAR_6;
  return 0;
}
