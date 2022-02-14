
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ val; scalar_t__ name; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int* VAR_2 ;

void FUNC_2 (int VAR_3) {
  int VAR_4 = FUNC_0 (VAR_3);
  int VAR_5 = 0;
  while (VAR_0[VAR_5].name || VAR_0[VAR_5].val) { VAR_5 ++; }
  if (VAR_3 >= 0 && VAR_3 <= 127) {
    VAR_2[VAR_3 / 32] |= 1 << (VAR_3 & 31);
  }

  if (VAR_4 >= 0) {
    while (VAR_4 + 1 != VAR_5) {
      VAR_0[VAR_4] = VAR_0[VAR_4 + 1];
      VAR_1[VAR_4] = VAR_1[VAR_4 + 1];
      VAR_4++;
    }
    FUNC_1 (&VAR_0[VAR_5 - 1], 0, sizeof (*VAR_0));
    char *VAR_6;
    VAR_6 = VAR_1[VAR_4];
    VAR_1[VAR_4] = VAR_1[VAR_5 - 1];
    VAR_1[VAR_5 - 1] = VAR_6;
  }
}
