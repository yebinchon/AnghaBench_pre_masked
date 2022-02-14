
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int emfile_fd; int backend_fd; scalar_t__ nfds; scalar_t__ nwatchers; int * watchers; int watcher_queue; int pending_queue; int cloexec_lock; int wq_mutex; int wq; } ;
typedef TYPE_1__ uv_loop_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(uv_loop_t* VAR_0) {
  FUNC_7(VAR_0);
  FUNC_6(VAR_0);
  FUNC_2(VAR_0);

  if (VAR_0->emfile_fd != -1) {
    FUNC_3(VAR_0->emfile_fd);
    VAR_0->emfile_fd = -1;
  }

  if (VAR_0->backend_fd != -1) {
    FUNC_3(VAR_0->backend_fd);
    VAR_0->backend_fd = -1;
  }

  FUNC_9(&VAR_0->wq_mutex);
  FUNC_1(FUNC_0(&VAR_0->wq) && "thread pool work queue not empty!");
  FUNC_1(!FUNC_5(VAR_0));
  FUNC_10(&VAR_0->wq_mutex);
  FUNC_8(&VAR_0->wq_mutex);





  FUNC_11(&VAR_0->cloexec_lock);







  FUNC_4(VAR_0->watchers);
  VAR_0->watchers = ((void*)0);
  VAR_0->nwatchers = 0;
}
