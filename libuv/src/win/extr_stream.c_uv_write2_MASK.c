
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uv_write_t ;
typedef int uv_write_cb ;
struct TYPE_8__ {scalar_t__ type; int flags; int * loop; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_9__ {int ipc; } ;
typedef TYPE_2__ uv_pipe_t ;
typedef int uv_loop_t ;
typedef int uv_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,TYPE_2__*,int const*,unsigned int,TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,int const*,unsigned int,int ) ;

int FUNC_3(uv_write_t* VAR_4,
              uv_stream_t* VAR_5,
              const uv_buf_t VAR_6[],
              unsigned int VAR_7,
              uv_stream_t* VAR_8,
              uv_write_cb VAR_9) {
  uv_loop_t* VAR_10 = VAR_5->loop;
  int VAR_11;

  if (VAR_8 == ((void*)0)) {
    return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
  }

  if (VAR_5->type != VAR_3 || !((uv_pipe_t*) VAR_5)->ipc) {
    return VAR_0;
  } else if (!(VAR_5->flags & VAR_2)) {
    return VAR_1;
  }

  VAR_11 = FUNC_0(
      VAR_10, VAR_4, (uv_pipe_t*) VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  return FUNC_1(VAR_11);
}
