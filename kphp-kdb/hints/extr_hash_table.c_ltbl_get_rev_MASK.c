
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; long long* rev; } ;
typedef TYPE_1__ lookup_table ;



long long FUNC_0 (lookup_table *VAR_0, int VAR_1) {
  if (VAR_1 <= 0 || VAR_1 >= VAR_0->size) {
    return 0;
  }

  return VAR_0->rev[VAR_1];
}
