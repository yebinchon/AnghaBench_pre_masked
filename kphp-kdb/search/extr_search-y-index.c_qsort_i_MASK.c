
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {long long item_id; } ;


 struct item** VAR_0 ;

__attribute__((used)) static void FUNC_0 (int VAR_1, int VAR_2) {
  int VAR_3, VAR_4;
  long long VAR_5;
  struct item *VAR_6;
  if (VAR_1 >= VAR_2) { return; }
  VAR_5 = VAR_0[(VAR_1+VAR_2)>>1]->item_id;
  VAR_3 = VAR_1;
  VAR_4 = VAR_2;
  do {
    while (VAR_0[VAR_3]->item_id < VAR_5) { VAR_3++; }
    while (VAR_0[VAR_4]->item_id > VAR_5) { VAR_4--; }
    if (VAR_3 <= VAR_4) {
      VAR_6 = VAR_0[VAR_3]; VAR_0[VAR_3++] = VAR_0[VAR_4]; VAR_0[VAR_4--] = VAR_6;
    }
  } while (VAR_3 <= VAR_4);
  FUNC_0 (VAR_1, VAR_4);
  FUNC_0 (VAR_3, VAR_2);
}
