
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_5__ {int async_wfd; TYPE_3__ async_io_watcher; } ;
typedef TYPE_1__ uv_loop_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*,int ) ;

void FUNC_2(uv_loop_t* VAR_1) {
  if (VAR_1->async_io_watcher.fd == -1)
    return;

  if (VAR_1->async_wfd != -1) {
    if (VAR_1->async_wfd != VAR_1->async_io_watcher.fd)
      FUNC_0(VAR_1->async_wfd);
    VAR_1->async_wfd = -1;
  }

  FUNC_1(VAR_1, &VAR_1->async_io_watcher, VAR_0);
  FUNC_0(VAR_1->async_io_watcher.fd);
  VAR_1->async_io_watcher.fd = -1;
}
