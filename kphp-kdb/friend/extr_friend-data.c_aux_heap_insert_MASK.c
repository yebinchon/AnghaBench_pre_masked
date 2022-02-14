
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int date; } ;
typedef TYPE_1__ tree_t ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (tree_t *VAR_4) {
  int VAR_5 = VAR_4->date, VAR_6, VAR_7;
  if (VAR_2 == VAR_3) {
    if (!VAR_2 || VAR_1[1]->date >= VAR_5) { return; }
    VAR_6 = 1;
    while (1) {
      VAR_7 = VAR_6*2;
      if (VAR_7 > VAR_2) { break; }
      if (VAR_7 < VAR_2 && VAR_1[VAR_7+1]->date < VAR_1[VAR_7]->date) { VAR_7++; }
      if (VAR_1[VAR_7]->date >= VAR_5) { break; }
      VAR_1[VAR_6] = VAR_1[VAR_7];
      VAR_6 = VAR_7;
    }
    VAR_1[VAR_6] = VAR_4;
  } else {
    VAR_6 = ++VAR_2;
    FUNC_0 (VAR_2 < VAR_0);
    while (VAR_6 > 1) {
      VAR_7 = (VAR_6 >> 1);
      if (VAR_1[VAR_7]->date <= VAR_5) { break; }
      VAR_1[VAR_6] = VAR_1[VAR_7];
      VAR_6 = VAR_7;
    }
    VAR_1[VAR_6] = VAR_4;
  }
}
