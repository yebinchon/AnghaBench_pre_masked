
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wd; int loop; int watchers; int * path; } ;
typedef TYPE_1__ uv_fs_event_t ;
struct watcher_list {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct watcher_list* FUNC_2 (int ,int) ;
 int FUNC_3 (struct watcher_list*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(uv_fs_event_t* VAR_0) {
  struct watcher_list* VAR_1;

  if (!FUNC_5(VAR_0))
    return 0;

  VAR_1 = FUNC_2(VAR_0->loop, VAR_0->wd);
  FUNC_1(VAR_1 != ((void*)0));

  VAR_0->wd = -1;
  VAR_0->path = ((void*)0);
  FUNC_4(VAR_0);
  FUNC_0(&VAR_0->watchers);

  FUNC_3(VAR_1, VAR_0->loop);

  return 0;
}
