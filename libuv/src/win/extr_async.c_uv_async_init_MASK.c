
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ uv_req_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_7__ {TYPE_1__ async_req; int async_cb; scalar_t__ async_sent; } ;
typedef TYPE_2__ uv_async_t ;
typedef int uv_async_cb ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(uv_loop_t* VAR_2, uv_async_t* VAR_3, uv_async_cb VAR_4) {
  uv_req_t* VAR_5;

  FUNC_1(VAR_2, (uv_handle_t*) VAR_3, VAR_0);
  VAR_3->async_sent = 0;
  VAR_3->async_cb = VAR_4;

  VAR_5 = &VAR_3->async_req;
  FUNC_0(VAR_5, VAR_1);
  VAR_5->data = VAR_3;

  FUNC_2(VAR_3);

  return 0;
}
