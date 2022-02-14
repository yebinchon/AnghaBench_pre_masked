
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int list_id; } ;
typedef TYPE_1__ list_t ;
typedef int list_id_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

void FUNC_1 (list_t **VAR_0, int VAR_1) {
  if (VAR_1 <= 0) {
    return;
  }
  int VAR_2 = 0, VAR_3 = VAR_1;
  list_id_t VAR_4 = VAR_0[VAR_1 >> 1]->list_id;
  list_t *VAR_5;
  do {
    while (FUNC_0 (VAR_0[VAR_2]->list_id, VAR_4)) {
      VAR_2++;
    }
    while (FUNC_0 (VAR_4, VAR_0[VAR_3]->list_id)) {
      VAR_3--;
    }
    if (VAR_2 <= VAR_3) {
      VAR_5 = VAR_0[VAR_2];
      VAR_0[VAR_2] = VAR_0[VAR_3];
      VAR_0[VAR_3] = VAR_5;
      VAR_2++;
      VAR_3--;
    }
  } while (VAR_2 <= VAR_3);
  FUNC_1 (VAR_0, VAR_3);
  FUNC_1 (VAR_0 + VAR_2, VAR_1 - VAR_2);
}
