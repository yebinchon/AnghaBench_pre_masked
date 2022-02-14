
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* ne; int type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

void FUNC_3 (int VAR_2, const char *VAR_3, int VAR_4) {
  int VAR_5 = VAR_2;
  int VAR_6 = FUNC_2 (VAR_3);

  while (VAR_6--) {
    int VAR_7 = FUNC_1(VAR_3[VAR_6]);
    if (!VAR_0[VAR_5].ne[VAR_7]) {
      VAR_0[VAR_5].ne[VAR_7] = VAR_1++;
    }
    VAR_5 = VAR_0[VAR_5].ne[VAR_7];
  }

  FUNC_0 (VAR_0[VAR_5].type == 0);
  VAR_0[VAR_5].type = VAR_4;
}
