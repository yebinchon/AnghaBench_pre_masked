
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; int lru; int size; int user_id; int ptr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int ,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_2 (void) {
  int VAR_6, VAR_7 = -1, VAR_8 = 0x7fffffff;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    if (VAR_0[VAR_6].state > 0 && VAR_0[VAR_6].lru < VAR_8) {
      VAR_8 = VAR_0[VAR_6].lru;
      VAR_7 = VAR_6;
    }
  }
  if (VAR_7 >= 0) {
    if (VAR_5 > 0) {
      FUNC_1 (VAR_4, "drop_lru_user(): drop slot #%d at %d, size %d of user %d\n",
        VAR_7, VAR_0[VAR_7].ptr, VAR_0[VAR_7].size, VAR_0[VAR_7].user_id);
    }
    VAR_3 -= VAR_0[VAR_7].size;
    VAR_0[VAR_7].state = 0;
    FUNC_0 (--VAR_1 >= 0);
    if (VAR_7 == VAR_2 - 1) {
      FUNC_0 (--VAR_2 >= 0);
    }
  }
  return VAR_7;
}
