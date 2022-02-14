
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int extra_bytes; int * str; void* split_max; void* split_min; int split_mod; int schema_id; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lev_start*,int) ;
 int FUNC_2 (struct lev_start*) ;
 struct lev_start* FUNC_3 (int) ;
 int FUNC_4 (int *,int*,int) ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5 (void) {
  int VAR_5 = 0;
  struct lev_start *VAR_6 = FUNC_3 (36);
  VAR_6->type = VAR_0;
  VAR_6->schema_id = VAR_1;
  VAR_6->extra_bytes = 12;
  VAR_6->split_mod = VAR_2;
  VAR_6->split_min = VAR_3;
  VAR_6->split_max = VAR_3 + 1;
  FUNC_4 (VAR_6->str, &VAR_4, 8);
  FUNC_4 (&VAR_6->str[8], &VAR_5, 4);
  FUNC_0 (!FUNC_1 (VAR_6, 36));
  FUNC_2 (VAR_6);
}
