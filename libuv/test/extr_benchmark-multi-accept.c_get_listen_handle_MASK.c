
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_loop_t ;
struct ipc_client_ctx {int ipc_pipe; int connect_req; TYPE_1__* server_handle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(uv_loop_t* VAR_3, uv_stream_t* VAR_4) {
  struct ipc_client_ctx VAR_5;

  VAR_5.server_handle = VAR_4;
  VAR_5.server_handle->data = "server handle";

  FUNC_0(0 == FUNC_2(VAR_3, &VAR_5.ipc_pipe, 1));
  FUNC_1(&VAR_5.connect_req,
                  &VAR_5.ipc_pipe,
                  VAR_0,
                  VAR_2);
  FUNC_0(0 == FUNC_3(VAR_3, VAR_1));
}
