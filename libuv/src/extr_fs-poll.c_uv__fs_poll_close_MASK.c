
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_4__ {int * poll_ctx; } ;
typedef TYPE_1__ uv_fs_poll_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(uv_fs_poll_t* VAR_0) {
  FUNC_1(VAR_0);

  if (VAR_0->poll_ctx == ((void*)0))
    FUNC_0((uv_handle_t*)VAR_0);
}
