
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int inotify_fd; int inotify_read_watcher; } ;
typedef TYPE_1__ uv_loop_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;

void FUNC_2(uv_loop_t* VAR_1) {
  if (VAR_1->inotify_fd == -1) return;
  FUNC_1(VAR_1, &VAR_1->inotify_read_watcher, VAR_0);
  FUNC_0(VAR_1->inotify_fd);
  VAR_1->inotify_fd = -1;
}
