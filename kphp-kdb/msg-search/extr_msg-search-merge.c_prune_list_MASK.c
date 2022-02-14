
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos_to; int neg_to; int* delmsg_list; int delmsg_cnt; } ;


 int* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0 (int *VAR_4, int *VAR_5, int VAR_6, int VAR_7) {
  int *VAR_8, *VAR_9;
  int VAR_10, VAR_11, VAR_12;

  if (VAR_2) {
    VAR_10 = VAR_2->pos_to;
    VAR_11 = VAR_2->neg_to;
    VAR_8 = VAR_2->delmsg_list;
    if (VAR_8) {
      VAR_9 = VAR_8 + VAR_2->delmsg_cnt - 1;
    } else {
      VAR_9 = 0;
      VAR_8 = VAR_9 + 1;
    }
  } else {
    VAR_10 = VAR_11 = 0;
    VAR_9 = 0;
    VAR_8 = VAR_9 + 1;
  }

  while (VAR_4 < VAR_5) {
    VAR_12 = *VAR_4++;
    if (VAR_12 > 0) {
      while (VAR_8 <= VAR_9 && *VAR_9 > VAR_12) { VAR_9--; }
      if ((VAR_8 <= VAR_9 && VAR_12 == *VAR_9) || VAR_12 <= VAR_10 || VAR_12 >= VAR_6) {
 VAR_3++;
      } else {
 VAR_0[VAR_1++] = VAR_12;
      }
    } else {
      while (VAR_8 <= VAR_9 && *VAR_8 < VAR_12) { VAR_8++; }
      if ((VAR_8 <= VAR_9 && VAR_12 == *VAR_8) || VAR_12 >= VAR_11 || VAR_12 <= VAR_7) {
 VAR_3++;
      } else {
 VAR_0[VAR_1++] = VAR_12;
      }
    }
  }
}
