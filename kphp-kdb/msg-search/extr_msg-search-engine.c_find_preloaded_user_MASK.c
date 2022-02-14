
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_id; scalar_t__ state; scalar_t__ lru; } ;
typedef TYPE_1__ loaded_user_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

loaded_user_t *FUNC_0 (int VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    if (VAR_0[VAR_4].user_id == VAR_3 && VAR_0[VAR_4].state > 0) {
      VAR_0[VAR_4].lru = ++VAR_1;
      return &VAR_0[VAR_4];
    }
  }
  return 0;
}
