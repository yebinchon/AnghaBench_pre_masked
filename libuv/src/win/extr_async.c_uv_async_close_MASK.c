
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_4__ {int async_sent; } ;
typedef TYPE_1__ uv_async_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(uv_loop_t* VAR_0, uv_async_t* VAR_1) {
  if (!((uv_async_t*)VAR_1)->async_sent) {
    FUNC_1(VAR_0, (uv_handle_t*) VAR_1);
  }

  FUNC_0(VAR_1);
}
