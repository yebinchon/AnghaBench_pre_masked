
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rnews_gather_extra {scalar_t__ type_mask; scalar_t__ date; scalar_t__ end_date; scalar_t__ id; scalar_t__ t; scalar_t__ timestamp; } ;
struct gather {struct rnews_gather_extra* extra; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3 (struct gather *VAR_7, int VAR_8) {
  if (VAR_5[VAR_8] + VAR_3 <= 0 ) {
    return -1;
  }
  struct rnews_gather_extra *VAR_9 = VAR_7->extra;
  FUNC_1 (VAR_6);
  FUNC_1 (VAR_9->type_mask);
  FUNC_1 (VAR_9->date);
  FUNC_1 (VAR_9->end_date);
  FUNC_1 (VAR_9->id);
  FUNC_1 (VAR_9->t);
  FUNC_1 (VAR_9->timestamp);
  FUNC_1 (VAR_5[VAR_8] + VAR_3);
  FUNC_2 (VAR_2, VAR_3 * 4);
  int VAR_10 = VAR_4[VAR_8];
  int VAR_11;
  for (VAR_11 = 0; VAR_11 < VAR_5[VAR_8]; VAR_11++) {
    FUNC_0 (VAR_10 >= 0);
    FUNC_1 (VAR_0[2 * VAR_10 + 0]);
    FUNC_1 (VAR_0[2 * VAR_10 + 1]);
    VAR_10 = VAR_1[VAR_10];
  }
  FUNC_0 (VAR_10 == -1);
  return 0;
}
