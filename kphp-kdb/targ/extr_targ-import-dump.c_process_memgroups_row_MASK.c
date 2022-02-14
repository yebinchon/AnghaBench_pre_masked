
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_user_generic {int user_id; scalar_t__ type; } ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 struct lev_user_generic* FUNC_2 (int) ;

void FUNC_3 (void) {
  struct lev_user_generic *VAR_14;
  int VAR_15 = VAR_5[VAR_11];
  VAR_13 = VAR_5[VAR_12];

  if (VAR_15 <= 0 || VAR_15 >= VAR_7 || !FUNC_1(VAR_13) || VAR_5[VAR_10] != 2) {
    return;
  }

  if (VAR_15 < VAR_4 && VAR_3[VAR_15] > 0) {
    VAR_14 = FUNC_2 (8);
    VAR_14->type = VAR_6 + VAR_3[VAR_15];
    VAR_14->user_id = VAR_13;
    VAR_9++;
  }

  if (!VAR_0) {
    VAR_2 = VAR_1 = VAR_0 = VAR_3;
  }

  if (VAR_2 <= VAR_3 + VAR_8 - 8) {
    FUNC_0 (VAR_2);
    ((int *) VAR_2)[0] = VAR_15;
    ((int *) VAR_2)[1] = VAR_13;
    VAR_2 += 8;
  }
}
