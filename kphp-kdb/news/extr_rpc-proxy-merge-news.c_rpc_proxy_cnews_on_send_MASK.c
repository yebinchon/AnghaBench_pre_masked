
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct news_gather_extra {int timestamp; int end_date; } ;
struct gather {struct news_gather_extra* extra; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2 (struct gather *VAR_5, int VAR_6) {
  if (VAR_3[VAR_6] <= 0) {
    return -1;
  }
  struct news_gather_extra *VAR_7 = VAR_5->extra;
  FUNC_1 (VAR_4);
  FUNC_1 (VAR_7->timestamp);
  FUNC_1 (VAR_7->end_date);
  FUNC_1 (VAR_3[VAR_6]);
  int VAR_8 = VAR_2[VAR_6];
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_3[VAR_6]; VAR_9++) {
    FUNC_0 (VAR_8 >= 0);
    FUNC_1 (VAR_0[3 * VAR_8 + 0]);
    FUNC_1 (VAR_0[3 * VAR_8 + 1]);
    FUNC_1 (VAR_0[3 * VAR_8 + 2]);
    VAR_8 = VAR_1[VAR_8];
  }
  FUNC_0 (VAR_8 == -1);
  return 0;
}
