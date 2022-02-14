
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int date; } ;
typedef TYPE_1__ item_t ;


 TYPE_1__** VAR_0 ;

void FUNC_0 (int VAR_1, int VAR_2) {
  int VAR_3, VAR_4, VAR_5;
  item_t *VAR_6;
  if (VAR_1 >= VAR_2) { return; }
  VAR_3 = VAR_1; VAR_4 = VAR_2; VAR_5 = VAR_0[(VAR_1+VAR_2)>>1]->date;
  do {
    while (VAR_0[VAR_3]->date > VAR_5) { VAR_3++; }
    while (VAR_0[VAR_4]->date < VAR_5) { VAR_4--; }
    if (VAR_3 <= VAR_4) {
      VAR_6 = VAR_0[VAR_3]; VAR_0[VAR_3++] = VAR_0[VAR_4]; VAR_0[VAR_4--] = VAR_6;
    }
  } while (VAR_3 <= VAR_4);
  FUNC_0 (VAR_1, VAR_4);
  FUNC_0 (VAR_3, VAR_2);
}
