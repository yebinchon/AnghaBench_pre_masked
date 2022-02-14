
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fd; } ;
struct TYPE_10__ {TYPE_1__ io_watcher; } ;
typedef TYPE_3__ uv_udp_t ;
typedef int uv_stream_t ;
struct TYPE_9__ {int fd; } ;
struct TYPE_11__ {TYPE_2__ io_watcher; } ;
typedef TYPE_4__ uv_poll_t ;
typedef int uv_os_fd_t ;
struct TYPE_12__ {int type; } ;
typedef TYPE_5__ uv_handle_t ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ FUNC_0 (TYPE_5__ const*) ;
 int FUNC_1 (int *) ;

int FUNC_2(const uv_handle_t* VAR_2, uv_os_fd_t* VAR_3) {
  int VAR_4;

  switch (VAR_2->type) {
  case 130:
  case 132:
  case 129:
    VAR_4 = FUNC_1((uv_stream_t*) VAR_2);
    break;

  case 128:
    VAR_4 = ((uv_udp_t *) VAR_2)->io_watcher.fd;
    break;

  case 131:
    VAR_4 = ((uv_poll_t *) VAR_2)->io_watcher.fd;
    break;

  default:
    return VAR_1;
  }

  if (FUNC_0(VAR_2) || VAR_4 == -1)
    return VAR_0;

  *VAR_3 = VAR_4;
  return 0;
}
