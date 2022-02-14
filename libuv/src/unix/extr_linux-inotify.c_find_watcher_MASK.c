
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inotify_watchers; } ;
typedef TYPE_1__ uv_loop_t ;
struct watcher_list {int wd; } ;


 int FUNC_0 (int *) ;
 struct watcher_list* FUNC_1 (int ,int ,struct watcher_list*) ;
 int VAR_0 ;

__attribute__((used)) static struct watcher_list* FUNC_2(uv_loop_t* VAR_1, int VAR_2) {
  struct watcher_list VAR_3;
  VAR_3.wd = VAR_2;
  return FUNC_1(VAR_0, FUNC_0(&VAR_1->inotify_watchers), &VAR_3);
}
