
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int field_desc ;
struct TYPE_4__ {int * obj; int * dyn; } ;
typedef TYPE_1__ actual_object ;
struct TYPE_5__ {int * fields; } ;


 int* FUNC_0 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;
 TYPE_2__* VAR_1 ;

int FUNC_2 (actual_object *VAR_2, int VAR_3, int VAR_4) {
  if (VAR_4 != -1) {
    field_desc *VAR_5 = &VAR_1[VAR_3].fields[VAR_4];

    if (VAR_2->dyn != ((void*)0) && FUNC_1 (VAR_2->dyn, VAR_4)) {
      return *FUNC_0 (VAR_2->dyn, VAR_5);
    } else if (VAR_2->obj != ((void*)0) && FUNC_1 (VAR_2->obj, VAR_4)) {
      return *FUNC_0 (VAR_2->obj, VAR_5);
    }
  }
  return VAR_0;
}
