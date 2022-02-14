
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_write_t ;
typedef int uv_write_cb ;
typedef int uv_tty_t ;
typedef int uv_tcp_t ;
struct TYPE_3__ {int flags; int type; int * loop; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_pipe_t ;
typedef int uv_loop_t ;
typedef int uv_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,int const*,unsigned int,int *,int ) ;
 int FUNC_2 (int *,int *,int *,int const*,unsigned int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int *,int const*,unsigned int,int ) ;

int FUNC_5(uv_write_t* VAR_3,
             uv_stream_t* VAR_4,
             const uv_buf_t VAR_5[],
             unsigned int VAR_6,
             uv_write_cb VAR_7) {
  uv_loop_t* VAR_8 = VAR_4->loop;
  int VAR_9;

  if (!(VAR_4->flags & VAR_2)) {
    return VAR_1;
  }

  VAR_9 = VAR_0;
  switch (VAR_4->type) {
    case 129:
      VAR_9 = FUNC_2(VAR_8, VAR_3, (uv_tcp_t*) VAR_4, VAR_5, VAR_6, VAR_7);
      break;
    case 130:
      VAR_9 = FUNC_1(
          VAR_8, VAR_3, (uv_pipe_t*) VAR_4, VAR_5, VAR_6, ((void*)0), VAR_7);
      break;
    case 128:
      VAR_9 = FUNC_4(VAR_8, VAR_3, (uv_tty_t*) VAR_4, VAR_5, VAR_6, VAR_7);
      break;
    default:
      FUNC_0(0);
  }

  return FUNC_3(VAR_9);
}
