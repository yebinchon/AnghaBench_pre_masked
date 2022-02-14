
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * handle; int * errmsg; } ;
typedef TYPE_1__ uv_lib_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(uv_lib_t* VAR_0) {
  FUNC_1(VAR_0->errmsg);
  VAR_0->errmsg = ((void*)0);

  if (VAR_0->handle) {

    FUNC_0(VAR_0->handle);
    VAR_0->handle = ((void*)0);
  }
}
