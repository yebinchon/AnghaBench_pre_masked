
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int currId; int* rev; } ;
typedef TYPE_1__ lookup_table ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2 (lookup_table *VAR_0, int VAR_1) {
  FUNC_1 (VAR_0);
  FUNC_0 (VAR_0->size > 0);

  if (VAR_1 <= 0 || VAR_1 >= VAR_0->currId) {
    return 0;
  }

  return VAR_0->rev[VAR_1];
}
