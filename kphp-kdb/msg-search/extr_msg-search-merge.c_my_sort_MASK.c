
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_id; } ;
typedef TYPE_1__ userlist_entry_t ;


 TYPE_1__** VAR_0 ;

__attribute__((used)) static void FUNC_0 (int VAR_1, int VAR_2) {
  userlist_entry_t *VAR_3;
  int VAR_4, VAR_5, VAR_6;
  if (VAR_1 >= VAR_2) return;
  VAR_5 = VAR_1; VAR_6 = VAR_2;
  VAR_4 = VAR_0[(VAR_1+VAR_2)>>1]->user_id;
  do {
    while (VAR_0[VAR_5]->user_id < VAR_4) VAR_5++;
    while (VAR_0[VAR_6]->user_id > VAR_4) VAR_6--;
    if (VAR_5 <= VAR_6) {
      VAR_3 = VAR_0[VAR_5]; VAR_0[VAR_5++] = VAR_0[VAR_6]; VAR_0[VAR_6--] = VAR_3;
    }
  } while (VAR_5 <= VAR_6);
  FUNC_0 (VAR_1, VAR_6);
  FUNC_0 (VAR_5, VAR_2);
}
