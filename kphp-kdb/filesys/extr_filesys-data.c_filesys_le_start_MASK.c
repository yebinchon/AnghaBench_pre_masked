
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; int extra_bytes; int str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (long long*,int ,int) ;
 int VAR_4 ;
 long long VAR_5 ;

__attribute__((used)) static int FUNC_4 (struct lev_start *VAR_6) {
  if (VAR_6->schema_id != VAR_0) {
    return -1;
  }
  long long VAR_7;
  VAR_2 = VAR_6->split_min;
  VAR_1 = VAR_6->split_max;
  VAR_3 = VAR_6->split_mod;
  FUNC_0 (VAR_3 > 0 && VAR_2 >= 0 && VAR_2 + 1 == VAR_1 && VAR_1 <= VAR_3);
  FUNC_0 (VAR_6->extra_bytes == 8);
  FUNC_3 (&VAR_7, VAR_6->str, 8);
  if (VAR_5 >= 0 && VAR_7 != VAR_5) {
    FUNC_2 (VAR_4, "Binlog volume_id isn't matched.\n");
    FUNC_1 (1);
  }
  VAR_5 = VAR_7;
  return 0;
}
