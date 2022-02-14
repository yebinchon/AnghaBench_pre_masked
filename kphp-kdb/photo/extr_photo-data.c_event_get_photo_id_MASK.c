
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * obj; int * dyn; } ;
typedef TYPE_1__ actual_object ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

inline int FUNC_2 (actual_object *VAR_0) {
  if (VAR_0->obj == ((void*)0)) {
    FUNC_0 (VAR_0->dyn != ((void*)0));
    return FUNC_1 (VAR_0->dyn);
  }

  return FUNC_1 (VAR_0->obj);
}
