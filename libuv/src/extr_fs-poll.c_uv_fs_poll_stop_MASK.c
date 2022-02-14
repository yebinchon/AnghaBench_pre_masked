
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_4__ {struct poll_ctx* poll_ctx; } ;
typedef TYPE_1__ uv_fs_poll_t ;
struct poll_ctx {int timer_handle; TYPE_1__* parent_handle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(uv_fs_poll_t* VAR_1) {
  struct poll_ctx* VAR_2;

  if (!FUNC_3((uv_handle_t*)VAR_1))
    return 0;

  VAR_2 = VAR_1->poll_ctx;
  FUNC_0(VAR_2 != ((void*)0));
  FUNC_0(VAR_2->parent_handle == VAR_1);




  if (FUNC_3((uv_handle_t*)&VAR_2->timer_handle))
    FUNC_2((uv_handle_t*)&VAR_2->timer_handle, VAR_0);

  FUNC_1(VAR_1);

  return 0;
}
