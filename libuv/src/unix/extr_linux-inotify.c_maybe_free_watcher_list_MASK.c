
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inotify_fd; int inotify_watchers; } ;
typedef TYPE_1__ uv_loop_t ;
struct watcher_list {int wd; int watchers; int iterating; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,struct watcher_list*) ;
 int FUNC_3 (struct watcher_list*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct watcher_list* VAR_1, uv_loop_t* VAR_2) {

  if ((!VAR_1->iterating) && FUNC_1(&VAR_1->watchers)) {

    FUNC_2(VAR_0, FUNC_0(&VAR_2->inotify_watchers), VAR_1);
    FUNC_4(VAR_2->inotify_fd, VAR_1->wd);
    FUNC_3(VAR_1);
  }
}
