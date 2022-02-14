
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int async_handles; } ;
typedef TYPE_1__ uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_9__ {int queue; scalar_t__ pending; int async_cb; } ;
typedef TYPE_2__ uv_async_t ;
typedef int uv_async_cb ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(uv_loop_t* VAR_1, uv_async_t* VAR_2, uv_async_cb VAR_3) {
  int VAR_4;

  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4)
    return VAR_4;

  FUNC_2(VAR_1, (uv_handle_t*)VAR_2, VAR_0);
  VAR_2->async_cb = VAR_3;
  VAR_2->pending = 0;

  FUNC_0(&VAR_1->async_handles, &VAR_2->queue);
  FUNC_3(VAR_2);

  return 0;
}
