
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_military {void* finish; void* start; void* unit_id; void* user_id; int type; } ;


 void** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 struct lev_military* FUNC_1 (int) ;

void FUNC_2 (void) {
  struct lev_military *VAR_8;
  VAR_7 = VAR_0[VAR_4];

  if (!FUNC_0(VAR_7)) {
    return;
  }

  VAR_8 = FUNC_1 (sizeof (*VAR_8));
  VAR_8->type = VAR_1;
  VAR_8->user_id = VAR_0[VAR_4];
  VAR_8->unit_id = VAR_0[VAR_6];
  VAR_8->start = VAR_0[VAR_5];
  VAR_8->finish = VAR_0[VAR_3];

  VAR_2++;

}
