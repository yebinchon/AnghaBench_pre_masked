
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_start {int schema_id; int extra_bytes; int str; void* split_max; void* split_min; int split_mod; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char*) ;
 struct lev_start* FUNC_2 (int) ;

void FUNC_3 (int VAR_3, char *VAR_4) {
  int VAR_5 = VAR_4 ? FUNC_1(VAR_4)+1 : 0;
  int VAR_6 = (VAR_5 + 3) & -4;
  if (VAR_5 == 1) { VAR_6 = VAR_5 = 0; }
  struct lev_start *VAR_7 = FUNC_2(sizeof(struct lev_start) - 4 + VAR_6);
  VAR_7->type = VAR_0;
  VAR_7->schema_id = VAR_3;
  VAR_7->extra_bytes = VAR_6;
  VAR_7->split_mod = VAR_1;
  VAR_7->split_min = VAR_2;
  VAR_7->split_max = VAR_2 + 1;
  if (VAR_5) {
    FUNC_0 (VAR_7->str, VAR_4, VAR_5);
  }
}
