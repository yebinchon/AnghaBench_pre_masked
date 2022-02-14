
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nfds; TYPE_2__** watchers; int watcher_queue; } ;
typedef TYPE_1__ uv_loop_t ;
struct TYPE_7__ {int fd; unsigned int pevents; unsigned int events; int watcher_queue; } ;
typedef TYPE_2__ uv__io_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(uv_loop_t* VAR_5, uv__io_t* VAR_6, unsigned int VAR_7) {
  FUNC_2(0 == (VAR_7 & ~(VAR_1 | VAR_2 | VAR_4 | VAR_3)));
  FUNC_2(0 != VAR_7);
  FUNC_2(VAR_6->fd >= 0);
  FUNC_2(VAR_6->fd < VAR_0);

  VAR_6->pevents |= VAR_7;
  FUNC_3(VAR_5, VAR_6->fd + 1);






  if (VAR_6->events == VAR_6->pevents)
    return;


  if (FUNC_0(&VAR_6->watcher_queue))
    FUNC_1(&VAR_5->watcher_queue, &VAR_6->watcher_queue);

  if (VAR_5->watchers[VAR_6->fd] == ((void*)0)) {
    VAR_5->watchers[VAR_6->fd] = VAR_6;
    VAR_5->nfds++;
  }
}
