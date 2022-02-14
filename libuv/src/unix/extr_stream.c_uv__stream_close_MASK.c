
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int fd; } ;
struct TYPE_11__ {int flags; int accepted_fd; TYPE_7__ io_watcher; TYPE_3__* queued_fds; int loop; TYPE_2__* select; } ;
typedef TYPE_1__ uv_stream_t ;
typedef int uv_handle_t ;
struct TYPE_12__ {int fake_fd; int int_fd; int async; int async_sem; int close_sem; int thread; } ;
typedef TYPE_2__ uv__stream_select_t ;
struct TYPE_13__ {unsigned int offset; int* fds; } ;
typedef TYPE_3__ uv__stream_queued_fds_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (int ,TYPE_7__*) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(uv_stream_t* VAR_6) {
  unsigned int VAR_7;
  uv__stream_queued_fds_t* VAR_8;
  FUNC_5(VAR_6->loop, &VAR_6->io_watcher);
  FUNC_8(VAR_6);
  FUNC_3(VAR_6);
  VAR_6->flags &= ~(VAR_3 | VAR_4);

  if (VAR_6->io_watcher.fd != -1) {

    if (VAR_6->io_watcher.fd > VAR_2)
      FUNC_1(VAR_6->io_watcher.fd);
    VAR_6->io_watcher.fd = -1;
  }

  if (VAR_6->accepted_fd != -1) {
    FUNC_1(VAR_6->accepted_fd);
    VAR_6->accepted_fd = -1;
  }


  if (VAR_6->queued_fds != ((void*)0)) {
    VAR_8 = VAR_6->queued_fds;
    for (VAR_7 = 0; VAR_7 < VAR_8->offset; VAR_7++)
      FUNC_1(VAR_8->fds[VAR_7]);
    FUNC_2(VAR_6->queued_fds);
    VAR_6->queued_fds = ((void*)0);
  }

  FUNC_0(!FUNC_4(&VAR_6->io_watcher, VAR_0 | VAR_1));
}
