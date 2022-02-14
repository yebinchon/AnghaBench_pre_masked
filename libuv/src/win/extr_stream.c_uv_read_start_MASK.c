
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_tty_t ;
typedef int uv_tcp_t ;
struct TYPE_3__ {int flags; int type; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_read_cb ;
typedef int uv_pipe_t ;
typedef int uv_alloc_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ) ;

int FUNC_5(uv_stream_t* VAR_5, uv_alloc_cb VAR_6,
    uv_read_cb VAR_7) {
  int VAR_8;

  if (VAR_5->flags & VAR_4) {
    return VAR_1;
  }

  if (!(VAR_5->flags & VAR_3)) {
    return VAR_2;
  }

  VAR_8 = VAR_0;
  switch (VAR_5->type) {
    case 129:
      VAR_8 = FUNC_2((uv_tcp_t*)VAR_5, VAR_6, VAR_7);
      break;
    case 130:
      VAR_8 = FUNC_1((uv_pipe_t*)VAR_5, VAR_6, VAR_7);
      break;
    case 128:
      VAR_8 = FUNC_4((uv_tty_t*) VAR_5, VAR_6, VAR_7);
      break;
    default:
      FUNC_0(0);
  }

  return FUNC_3(VAR_8);
}
