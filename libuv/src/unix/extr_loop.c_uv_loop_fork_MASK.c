
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int nwatchers; int watcher_queue; TYPE_2__** watchers; } ;
typedef TYPE_1__ uv_loop_t ;
struct TYPE_8__ {scalar_t__ pevents; int watcher_queue; scalar_t__ events; } ;
typedef TYPE_2__ uv__io_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(uv_loop_t* VAR_0) {
  int VAR_1;
  unsigned int VAR_2;
  uv__io_t* VAR_3;

  VAR_1 = FUNC_3(VAR_0);
  if (VAR_1)
    return VAR_1;

  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1)
    return VAR_1;

  VAR_1 = FUNC_4(VAR_0);
  if (VAR_1)
    return VAR_1;


  for (VAR_2 = 0; VAR_2 < VAR_0->nwatchers; VAR_2++) {
    VAR_3 = VAR_0->watchers[VAR_2];
    if (VAR_3 == ((void*)0))
      continue;

    if (VAR_3->pevents != 0 && FUNC_0(&VAR_3->watcher_queue)) {
      VAR_3->events = 0;
      FUNC_1(&VAR_0->watcher_queue, &VAR_3->watcher_queue);
    }
  }

  return 0;
}
