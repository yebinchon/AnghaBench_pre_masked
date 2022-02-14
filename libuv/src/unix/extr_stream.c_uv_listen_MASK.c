
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_tcp_t ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_pipe_t ;
typedef int uv_connection_cb ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int ) ;

int FUNC_3(uv_stream_t* VAR_1, int VAR_2, uv_connection_cb VAR_3) {
  int VAR_4;

  switch (VAR_1->type) {
  case 128:
    VAR_4 = FUNC_2((uv_tcp_t*)VAR_1, VAR_2, VAR_3);
    break;

  case 129:
    VAR_4 = FUNC_1((uv_pipe_t*)VAR_1, VAR_2, VAR_3);
    break;

  default:
    VAR_4 = VAR_0;
  }

  if (VAR_4 == 0)
    FUNC_0(VAR_1);

  return VAR_4;
}
