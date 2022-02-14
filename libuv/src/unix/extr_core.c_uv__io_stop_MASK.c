
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int nwatchers; scalar_t__ nfds; int watcher_queue; TYPE_2__** watchers; } ;
typedef TYPE_1__ uv_loop_t ;
struct TYPE_6__ {int fd; unsigned int pevents; int watcher_queue; scalar_t__ events; } ;
typedef TYPE_2__ uv__io_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (int) ;

void FUNC_5(uv_loop_t* VAR_4, uv__io_t* VAR_5, unsigned int VAR_6) {
  FUNC_4(0 == (VAR_6 & ~(VAR_0 | VAR_1 | VAR_3 | VAR_2)));
  FUNC_4(0 != VAR_6);

  if (VAR_5->fd == -1)
    return;

  FUNC_4(VAR_5->fd >= 0);


  if ((unsigned) VAR_5->fd >= VAR_4->nwatchers)
    return;

  VAR_5->pevents &= ~VAR_6;

  if (VAR_5->pevents == 0) {
    FUNC_3(&VAR_5->watcher_queue);
    FUNC_1(&VAR_5->watcher_queue);

    if (VAR_4->watchers[VAR_5->fd] != ((void*)0)) {
      FUNC_4(VAR_4->watchers[VAR_5->fd] == VAR_5);
      FUNC_4(VAR_4->nfds > 0);
      VAR_4->watchers[VAR_5->fd] = ((void*)0);
      VAR_4->nfds--;
      VAR_5->events = 0;
    }
  }
  else if (FUNC_0(&VAR_5->watcher_queue))
    FUNC_2(&VAR_4->watcher_queue, &VAR_5->watcher_queue);
}
