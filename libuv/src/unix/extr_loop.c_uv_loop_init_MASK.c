
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int flags; } ;
struct TYPE_16__ {int fd; } ;
struct TYPE_15__ {scalar_t__ count; } ;
struct TYPE_17__ {int async_wfd; int* signal_pipefd; int backend_fd; int emfile_fd; int cloexec_lock; int wq_mutex; TYPE_5__ wq_async; int process_handles; TYPE_5__ child_watcher; scalar_t__ stop_flag; scalar_t__ timer_counter; TYPE_2__ async_io_watcher; int * closing_handles; int watcher_queue; int pending_queue; scalar_t__ nwatchers; int * watchers; scalar_t__ nfds; TYPE_1__ active_reqs; scalar_t__ active_handles; int handle_queue; int prepare_handles; int check_handles; int async_handles; int idle_handles; int wq; int timer_heap; void* data; } ;
typedef TYPE_3__ uv_loop_t ;
struct heap {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct heap*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_3__*,TYPE_5__*) ;

int FUNC_15(uv_loop_t* VAR_2) {
  void* VAR_3;
  int VAR_4;


  VAR_3 = VAR_2->data;
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));
  VAR_2->data = VAR_3;

  FUNC_1((struct heap*) &VAR_2->timer_heap);
  FUNC_0(&VAR_2->wq);
  FUNC_0(&VAR_2->idle_handles);
  FUNC_0(&VAR_2->async_handles);
  FUNC_0(&VAR_2->check_handles);
  FUNC_0(&VAR_2->prepare_handles);
  FUNC_0(&VAR_2->handle_queue);

  VAR_2->active_handles = 0;
  VAR_2->active_reqs.count = 0;
  VAR_2->nfds = 0;
  VAR_2->watchers = ((void*)0);
  VAR_2->nwatchers = 0;
  FUNC_0(&VAR_2->pending_queue);
  FUNC_0(&VAR_2->watcher_queue);

  VAR_2->closing_handles = ((void*)0);
  FUNC_8(VAR_2);
  VAR_2->async_io_watcher.fd = -1;
  VAR_2->async_wfd = -1;
  VAR_2->signal_pipefd[0] = -1;
  VAR_2->signal_pipefd[1] = -1;
  VAR_2->backend_fd = -1;
  VAR_2->emfile_fd = -1;

  VAR_2->timer_counter = 0;
  VAR_2->stop_flag = 0;

  VAR_4 = FUNC_5(VAR_2);
  if (VAR_4)
    return VAR_4;

  FUNC_6();
  VAR_4 = FUNC_14(VAR_2, &VAR_2->child_watcher);
  if (VAR_4)
    goto fail_signal_init;

  FUNC_3(&VAR_2->child_watcher);
  VAR_2->child_watcher.flags |= VAR_0;
  FUNC_0(&VAR_2->process_handles);

  VAR_4 = FUNC_13(&VAR_2->cloexec_lock);
  if (VAR_4)
    goto fail_rwlock_init;

  VAR_4 = FUNC_11(&VAR_2->wq_mutex);
  if (VAR_4)
    goto fail_mutex_init;

  VAR_4 = FUNC_9(VAR_2, &VAR_2->wq_async, VAR_1);
  if (VAR_4)
    goto fail_async_init;

  FUNC_3(&VAR_2->wq_async);
  VAR_2->wq_async.flags |= VAR_0;

  return 0;

fail_async_init:
  FUNC_10(&VAR_2->wq_mutex);

fail_mutex_init:
  FUNC_12(&VAR_2->cloexec_lock);

fail_rwlock_init:
  FUNC_7(VAR_2);

fail_signal_init:
  FUNC_4(VAR_2);

  return VAR_4;
}
