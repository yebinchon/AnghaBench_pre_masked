
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int socket; } ;
typedef TYPE_1__ uv_udp_t ;
struct TYPE_10__ {scalar_t__ handle; } ;
typedef TYPE_2__ uv_tty_t ;
struct TYPE_11__ {int socket; } ;
typedef TYPE_3__ uv_tcp_t ;
struct TYPE_12__ {int socket; } ;
typedef TYPE_4__ uv_poll_t ;
struct TYPE_13__ {scalar_t__ handle; } ;
typedef TYPE_5__ uv_pipe_t ;
typedef scalar_t__ uv_os_fd_t ;
struct TYPE_14__ {int type; } ;
typedef TYPE_6__ uv_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 scalar_t__ FUNC_0 (TYPE_6__ const*) ;

int FUNC_1(const uv_handle_t* VAR_3, uv_os_fd_t* VAR_4) {
  uv_os_fd_t VAR_5;

  switch (VAR_3->type) {
  case 130:
    VAR_5 = (uv_os_fd_t)((uv_tcp_t*) VAR_3)->socket;
    break;

  case 132:
    VAR_5 = ((uv_pipe_t*) VAR_3)->handle;
    break;

  case 129:
    VAR_5 = ((uv_tty_t*) VAR_3)->handle;
    break;

  case 128:
    VAR_5 = (uv_os_fd_t)((uv_udp_t*) VAR_3)->socket;
    break;

  case 131:
    VAR_5 = (uv_os_fd_t)((uv_poll_t*) VAR_3)->socket;
    break;

  default:
    return VAR_2;
  }

  if (FUNC_0(VAR_3) || VAR_5 == VAR_0)
    return VAR_1;

  *VAR_4 = VAR_5;
  return 0;
}
