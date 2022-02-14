
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_set_entry_text {int object_id; int text; void* list_id; scalar_t__ type; } ;


 void** VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (void*) ;
 void* VAR_10 ;
 int FUNC_1 (scalar_t__,int,void*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 struct lev_set_entry_text* FUNC_4 (int) ;

void FUNC_5 (void) {
  int VAR_11 = VAR_0[VAR_6];
  VAR_10 = VAR_0[VAR_9];
  if (FUNC_0 (VAR_10) < 0 || VAR_11 <= 0) {
    return;
  }
  FUNC_1 (VAR_2 + 19, VAR_11, VAR_0[VAR_8]);
  if (VAR_1[VAR_7] > 0 && FUNC_3 (VAR_4[VAR_7], "\\N") && VAR_1[VAR_7] < 256) {
    struct lev_set_entry_text *VAR_12 = FUNC_4 (12 + VAR_1[VAR_7]);
    VAR_12->type = VAR_3 + VAR_1[VAR_7];
    VAR_12->list_id = VAR_10;
    VAR_12->object_id = VAR_11;
    FUNC_2 (VAR_12->text, VAR_4[VAR_7], VAR_1[VAR_7]);
  }
  VAR_5++;
}
