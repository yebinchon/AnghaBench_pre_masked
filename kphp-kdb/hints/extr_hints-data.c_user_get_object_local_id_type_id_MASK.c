
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int object_old_n; long long* object_type_ids; int object_table; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int *,long long) ;

int FUNC_1 (user *VAR_0, long long VAR_1) {
  if (VAR_0->object_old_n) {
    int VAR_2 = 1, VAR_3 = VAR_0->object_old_n + 1, VAR_4;
    while (VAR_2 + 1 < VAR_3) {
      VAR_4 = (VAR_2 + VAR_3) >> 1;
      if (VAR_0->object_type_ids[VAR_4] <= VAR_1) {
        VAR_2 = VAR_4;
      } else {
        VAR_3 = VAR_4;
      }
    }

    if (VAR_0->object_type_ids[VAR_2] == VAR_1) {
      return VAR_2;
    }
  }

  int VAR_5 = FUNC_0 (&VAR_0->object_table, VAR_1);
  if (VAR_5 == 0) {
    return 0;
  }
  return VAR_5 + VAR_0->object_old_n;
}
