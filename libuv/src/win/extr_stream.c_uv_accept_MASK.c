
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_tcp_t ;
struct TYPE_5__ {int type; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_pipe_t ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;

int FUNC_4(uv_stream_t* VAR_1, uv_stream_t* VAR_2) {
  int VAR_3;

  VAR_3 = VAR_0;
  switch (VAR_1->type) {
    case 128:
      VAR_3 = FUNC_2((uv_tcp_t*)VAR_1, (uv_tcp_t*)VAR_2);
      break;
    case 129:
      VAR_3 = FUNC_1((uv_pipe_t*)VAR_1, VAR_2);
      break;
    default:
      FUNC_0(0);
  }

  return FUNC_3(VAR_3);
}
