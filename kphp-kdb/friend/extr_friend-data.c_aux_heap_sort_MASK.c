
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int date; } ;
typedef TYPE_1__ tree_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0 (void) {
  int VAR_2, VAR_3, VAR_4, VAR_5;
  if (!VAR_1) { return; }
  for (VAR_4 = VAR_1 - 1; VAR_4 > 0; VAR_4--) {
    tree_t *VAR_6 = VAR_0[VAR_4+1];
    VAR_0[VAR_4+1] = VAR_0[1];
    VAR_5 = VAR_6->date;
    VAR_2 = 1;
    while (1) {
      VAR_3 = 2*VAR_2;
      if (VAR_3 > VAR_4) { break; }
      if (VAR_3 < VAR_4 && VAR_0[VAR_3+1]->date < VAR_0[VAR_3]->date) { VAR_3++; }
      if (VAR_5 <= VAR_0[VAR_3]->date) { break; }
      VAR_0[VAR_2] = VAR_0[VAR_3];
      VAR_2 = VAR_3;
    }
    VAR_0[VAR_2] = VAR_6;
  }
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
    VAR_0[VAR_2] = VAR_0[VAR_2+1];
  }
}
