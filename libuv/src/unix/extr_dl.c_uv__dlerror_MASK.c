
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * errmsg; } ;
typedef TYPE_1__ uv_lib_t ;


 char* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(uv_lib_t* VAR_0) {
  const char* VAR_1;

  FUNC_1(VAR_0->errmsg);

  VAR_1 = FUNC_0();

  if (VAR_1) {
    VAR_0->errmsg = FUNC_2(VAR_1);
    return -1;
  }
  else {
    VAR_0->errmsg = ((void*)0);
    return 0;
  }
}
