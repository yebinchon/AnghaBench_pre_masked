
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int extra_bytes; scalar_t__ split_mod; scalar_t__ split_min; scalar_t__ split_max; int str; int schema_id; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct lev_start* FUNC_1 (int,int) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int*,int) ;

struct lev_start *FUNC_3 (int VAR_4, int *VAR_5) {
  *VAR_5 = 28;
  struct lev_start *VAR_6 = FUNC_1 (*VAR_5, 1);
  VAR_6->type = VAR_1;
  VAR_6->schema_id = VAR_0;
  VAR_6->extra_bytes = 4;
  VAR_6->split_mod = VAR_3;
  VAR_6->split_min = VAR_2;
  VAR_6->split_max = VAR_2 + 1;
  FUNC_0 (VAR_6->split_mod > 0 && VAR_6->split_min >= 0 && VAR_6->split_min + 1 == VAR_6->split_max && VAR_6->split_max <= VAR_6->split_mod);

  FUNC_2 (VAR_6->str, &VAR_4, 4);
  return VAR_6;
}
