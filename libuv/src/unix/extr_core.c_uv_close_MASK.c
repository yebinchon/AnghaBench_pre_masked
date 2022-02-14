
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_udp_t ;
typedef int uv_timer_t ;
typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_signal_t ;
typedef int uv_process_t ;
typedef int uv_prepare_t ;
typedef int uv_poll_t ;
typedef int uv_pipe_t ;
typedef int uv_idle_t ;
struct TYPE_5__ {int type; int close_cb; int flags; } ;
typedef TYPE_1__ uv_handle_t ;
typedef int uv_fs_poll_t ;
typedef int uv_fs_event_t ;
typedef int uv_close_cb ;
typedef int uv_check_t ;
typedef int uv_async_t ;






 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

void FUNC_17(uv_handle_t* VAR_1, uv_close_cb VAR_2) {
  FUNC_0(!FUNC_6(VAR_1));

  VAR_1->flags |= VAR_0;
  VAR_1->close_cb = VAR_2;

  switch (VAR_1->type) {
  case 136:
    FUNC_8((uv_pipe_t*)VAR_1);
    break;

  case 129:
    FUNC_13((uv_stream_t*)VAR_1);
    break;

  case 131:
    FUNC_14((uv_tcp_t*)VAR_1);
    break;

  case 128:
    FUNC_16((uv_udp_t*)VAR_1);
    break;

  case 134:
    FUNC_10((uv_prepare_t*)VAR_1);
    break;

  case 140:
    FUNC_2((uv_check_t*)VAR_1);
    break;

  case 137:
    FUNC_5((uv_idle_t*)VAR_1);
    break;

  case 141:
    FUNC_1((uv_async_t*)VAR_1);
    break;

  case 130:
    FUNC_15((uv_timer_t*)VAR_1);
    break;

  case 133:
    FUNC_11((uv_process_t*)VAR_1);
    break;

  case 139:
    FUNC_3((uv_fs_event_t*)VAR_1);
    break;

  case 135:
    FUNC_9((uv_poll_t*)VAR_1);
    break;

  case 138:
    FUNC_4((uv_fs_poll_t*)VAR_1);


    return;

  case 132:
    FUNC_12((uv_signal_t*) VAR_1);


    return;

  default:
    FUNC_0(0);
  }

  FUNC_7(VAR_1);
}
