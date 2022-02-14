
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int inotify_fd; int inotify_read_watcher; } ;
typedef TYPE_1__ uv_loop_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_3(uv_loop_t* VAR_2) {
  int VAR_3;

  if (VAR_2->inotify_fd != -1)
    return 0;

  VAR_3 = FUNC_0();
  if (VAR_3 < 0)
    return VAR_3;

  VAR_2->inotify_fd = VAR_3;
  FUNC_1(&VAR_2->inotify_read_watcher, VAR_1, VAR_2->inotify_fd);
  FUNC_2(VAR_2, &VAR_2->inotify_read_watcher, VAR_0);

  return 0;
}
