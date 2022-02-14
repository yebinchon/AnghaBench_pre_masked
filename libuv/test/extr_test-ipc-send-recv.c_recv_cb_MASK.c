
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_stream_t ;
struct TYPE_5__ {int loop; } ;
typedef TYPE_1__ uv_pipe_t ;
typedef scalar_t__ uv_handle_type ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
union handles {int stream; int tcp; int pipe; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {scalar_t__ expected_type; TYPE_1__ channel; union handles recv2; union handles recv; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(uv_stream_t* VAR_5,
                    ssize_t VAR_6,
                    const uv_buf_t* VAR_7) {
  uv_handle_type VAR_8;
  uv_pipe_t* VAR_9;
  int VAR_10;
  union handles* VAR_11;

  VAR_9 = (uv_pipe_t*) VAR_5;
  FUNC_0(VAR_9 == &VAR_3.channel);

  do {
    if (++VAR_4 == 1) {
      VAR_11 = &VAR_3.recv;
    } else {
      VAR_11 = &VAR_3.recv2;
    }






    if (VAR_6 == VAR_0) {

      FUNC_0(VAR_4 == 2);
    } else {
      FUNC_0(VAR_6 >= 0);
      FUNC_0(FUNC_5(VAR_9) > 0);

      VAR_8 = FUNC_6(VAR_9);
      FUNC_0(VAR_8 == VAR_3.expected_type);

      if (VAR_8 == VAR_1)
        VAR_10 = FUNC_4(VAR_3.channel.loop, &VAR_11->pipe, 0);
      else if (VAR_8 == VAR_2)
        VAR_10 = FUNC_7(VAR_3.channel.loop, &VAR_11->tcp);
      else
        FUNC_1();
      FUNC_0(VAR_10 == 0);

      VAR_10 = FUNC_2(VAR_5, &VAR_11->stream);
      FUNC_0(VAR_10 == 0);
    }
  } while (FUNC_5(VAR_9) > 0);


  if (VAR_4 == 2) {
    FUNC_3((uv_handle_t*)&VAR_3.channel, ((void*)0));
  }
}
