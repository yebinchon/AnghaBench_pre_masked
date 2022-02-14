
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_udp_t ;
typedef int uv_tty_t ;
typedef int uv_timer_t ;
typedef int uv_tcp_t ;
typedef int uv_signal_t ;
typedef int uv_process_t ;
typedef int uv_prepare_t ;
typedef int uv_poll_t ;
typedef int uv_pipe_t ;
typedef int uv_loop_t ;
typedef int uv_idle_t ;
struct TYPE_5__ {int flags; int type; int close_cb; int * loop; } ;
typedef TYPE_1__ uv_handle_t ;
typedef int uv_fs_poll_t ;
typedef int uv_fs_event_t ;
typedef int uv_close_cb ;
typedef int uv_check_t ;
typedef int uv_async_t ;






 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,TYPE_1__*) ;

void FUNC_18(uv_handle_t* VAR_1, uv_close_cb VAR_2) {
  uv_loop_t* VAR_3 = VAR_1->loop;

  if (VAR_1->flags & VAR_0) {
    FUNC_1(0);
    return;
  }

  VAR_1->close_cb = VAR_2;


  switch (VAR_1->type) {
    case 131:
      FUNC_13(VAR_3, (uv_tcp_t*)VAR_1);
      return;

    case 136:
      FUNC_8(VAR_3, (uv_pipe_t*) VAR_1);
      return;

    case 129:
      FUNC_15((uv_tty_t*) VAR_1);
      return;

    case 128:
      FUNC_16(VAR_3, (uv_udp_t*) VAR_1);
      return;

    case 135:
      FUNC_9(VAR_3, (uv_poll_t*) VAR_1);
      return;

    case 130:
      FUNC_14((uv_timer_t*)VAR_1);
      FUNC_3(VAR_1);
      FUNC_17(VAR_3, VAR_1);
      return;

    case 134:
      FUNC_10((uv_prepare_t*)VAR_1);
      FUNC_3(VAR_1);
      FUNC_17(VAR_3, VAR_1);
      return;

    case 140:
      FUNC_5((uv_check_t*)VAR_1);
      FUNC_3(VAR_1);
      FUNC_17(VAR_3, VAR_1);
      return;

    case 137:
      FUNC_7((uv_idle_t*)VAR_1);
      FUNC_3(VAR_1);
      FUNC_17(VAR_3, VAR_1);
      return;

    case 141:
      FUNC_4(VAR_3, (uv_async_t*) VAR_1);
      return;

    case 132:
      FUNC_12(VAR_3, (uv_signal_t*) VAR_1);
      return;

    case 133:
      FUNC_11(VAR_3, (uv_process_t*) VAR_1);
      return;

    case 139:
      FUNC_6(VAR_3, (uv_fs_event_t*) VAR_1);
      return;

    case 138:
      FUNC_2((uv_fs_poll_t*) VAR_1);
      FUNC_3(VAR_1);
      return;

    default:

      FUNC_0();
  }
}
