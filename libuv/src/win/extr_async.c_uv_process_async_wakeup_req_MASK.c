
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_1__ uv_req_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_7__ {scalar_t__ type; int flags; int (* async_cb ) (TYPE_2__*) ;scalar_t__ async_sent; } ;
typedef TYPE_2__ uv_async_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(uv_loop_t* VAR_3, uv_async_t* VAR_4,
    uv_req_t* VAR_5) {
  FUNC_0(VAR_4->type == VAR_0);
  FUNC_0(VAR_5->type == VAR_2);

  VAR_4->async_sent = 0;

  if (VAR_4->flags & VAR_1) {
    FUNC_2(VAR_3, (uv_handle_t*)VAR_4);
  } else if (VAR_4->async_cb != ((void*)0)) {
    VAR_4->async_cb(VAR_4);
  }
}
