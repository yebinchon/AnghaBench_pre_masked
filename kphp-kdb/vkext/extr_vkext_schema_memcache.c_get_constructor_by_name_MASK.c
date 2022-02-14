
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_type {int constructors_num; TYPE_1__** constructors; } ;
struct TYPE_2__ {int name; } ;



int FUNC_0 (struct tl_type *VAR_0, int VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->constructors_num; VAR_2++) if (VAR_0->constructors[VAR_2]->name == VAR_1) {
    return VAR_2;
  }
  return -1;
}
