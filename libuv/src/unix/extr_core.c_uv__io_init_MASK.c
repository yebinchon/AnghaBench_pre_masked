
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; scalar_t__ wcount; scalar_t__ rcount; scalar_t__ pevents; scalar_t__ events; int * cb; int watcher_queue; int pending_queue; } ;
typedef TYPE_1__ uv__io_t ;
typedef int * uv__io_cb ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

void FUNC_2(uv__io_t* VAR_0, uv__io_cb VAR_1, int VAR_2) {
  FUNC_1(VAR_1 != ((void*)0));
  FUNC_1(VAR_2 >= -1);
  FUNC_0(&VAR_0->pending_queue);
  FUNC_0(&VAR_0->watcher_queue);
  VAR_0->cb = VAR_1;
  VAR_0->fd = VAR_2;
  VAR_0->events = 0;
  VAR_0->pevents = 0;





}
