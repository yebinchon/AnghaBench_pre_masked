
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* ne; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_0 (int VAR_4, int *VAR_5, int VAR_6) {
  int VAR_7 = VAR_4;
  VAR_2 = VAR_0;

  while (VAR_6--) {
    if (!VAR_3[VAR_7].ne[VAR_5[VAR_6]]) {
      break;
    }
    VAR_7 = VAR_3[VAR_7].ne[VAR_5[VAR_6]];
    if (VAR_3[VAR_7].type) {
      if (VAR_3[VAR_7].type <= VAR_2) {
        VAR_2 = VAR_3[VAR_7].type;
        VAR_1 = VAR_6;
      }
    }
  }

  if (VAR_2 & 1) {
    VAR_1++;
  }
}
