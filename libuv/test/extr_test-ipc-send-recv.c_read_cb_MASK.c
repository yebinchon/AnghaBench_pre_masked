
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_write_t ;
typedef int uv_stream_t ;
struct TYPE_5__ {int loop; } ;
typedef TYPE_1__ uv_pipe_t ;
typedef scalar_t__ uv_handle_type ;
typedef int uv_buf_t ;
union handles {int stream; int tcp; int pipe; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {TYPE_1__ channel; int write_req2; union handles recv2; int write_req; union handles recv; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int *,int *,int,int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_9(uv_stream_t* VAR_7,
                    ssize_t VAR_8,
                    const uv_buf_t* VAR_9) {
  uv_buf_t VAR_10;
  uv_pipe_t* VAR_11;
  uv_handle_type VAR_12;
  int VAR_13;
  union handles* VAR_14;
  uv_write_t* VAR_15;

  if (VAR_8 == VAR_1 || VAR_8 == VAR_0) {
    return;
  }

  VAR_11 = (uv_pipe_t*) VAR_7;
  do {
    if (++VAR_5 == 2) {
      VAR_14 = &VAR_4;
      VAR_15 = &VAR_4;
    } else {
      VAR_14 = &VAR_4;
      VAR_15 = &VAR_4;
    }

    FUNC_0(VAR_11 == &VAR_4);
    FUNC_0(VAR_8 >= 0);
    FUNC_0(FUNC_5(VAR_11) > 0);

    VAR_12 = FUNC_6(VAR_11);
    FUNC_0(VAR_12 == VAR_2 || VAR_12 == VAR_3);

    if (VAR_12 == VAR_2)
      VAR_13 = FUNC_4(VAR_4, &VAR_14->pipe, 0);
    else if (VAR_12 == VAR_3)
      VAR_13 = FUNC_7(VAR_4, &VAR_14->tcp);
    else
      FUNC_1();
    FUNC_0(VAR_13 == 0);

    VAR_13 = FUNC_2(VAR_7, &VAR_14->stream);
    FUNC_0(VAR_13 == 0);

    VAR_10 = FUNC_3(".", 1);
    VAR_13 = FUNC_8(VAR_15,
                  (uv_stream_t*)&VAR_4,
                  &VAR_10,
                  1,
                  &VAR_14->stream,
                  VAR_6);
    FUNC_0(VAR_13 == 0);
  } while (FUNC_5(VAR_11) > 0);
}
