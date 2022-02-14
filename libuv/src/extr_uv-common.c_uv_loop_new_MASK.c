
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_loop_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;

uv_loop_t* FUNC_3(void) {
  uv_loop_t* VAR_0;

  VAR_0 = FUNC_1(sizeof(*VAR_0));
  if (VAR_0 == ((void*)0))
    return ((void*)0);

  if (FUNC_2(VAR_0)) {
    FUNC_0(VAR_0);
    return ((void*)0);
  }

  return VAR_0;
}
