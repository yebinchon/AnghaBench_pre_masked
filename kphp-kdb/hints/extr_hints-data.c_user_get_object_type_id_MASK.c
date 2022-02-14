
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int object_old_n; long long* object_type_ids; int object_table; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (TYPE_1__*,int) ;
 long long FUNC_1 (int *,int) ;

long long FUNC_2 (user *VAR_0, int VAR_1) {
  FUNC_0 (VAR_0, VAR_1);

  if (VAR_1 <= VAR_0->object_old_n) {
    return VAR_0->object_type_ids[VAR_1];
  } else {
    return FUNC_1 (&VAR_0->object_table, VAR_1 - VAR_0->object_old_n);
  }
}
