
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wd; int cb; int path; int watchers; TYPE_5__* loop; } ;
typedef TYPE_1__ uv_fs_event_t ;
typedef int uv_fs_event_cb ;
struct watcher_list {int wd; int path; int watchers; scalar_t__ iterating; } ;
struct TYPE_8__ {int inotify_watchers; int inotify_fd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,struct watcher_list*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct watcher_list* FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (struct watcher_list*,char const*,size_t) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,char const*,int) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 struct watcher_list* FUNC_12 (int) ;
 int VAR_11 ;

int FUNC_13(uv_fs_event_t* VAR_12,
                      uv_fs_event_cb VAR_13,
                      const char* VAR_14,
                      unsigned int VAR_15) {
  struct watcher_list* VAR_16;
  size_t VAR_17;
  int VAR_18;
  int VAR_19;
  int VAR_20;

  if (FUNC_11(VAR_12))
    return VAR_0;

  VAR_19 = FUNC_6(VAR_12->loop);
  if (VAR_19)
    return VAR_19;

  VAR_18 = VAR_2
         | VAR_3
         | VAR_6
         | VAR_4
         | VAR_5
         | VAR_9
         | VAR_7
         | VAR_8;

  VAR_20 = FUNC_10(VAR_12->loop->inotify_fd, VAR_14, VAR_18);
  if (VAR_20 == -1)
    return FUNC_4(VAR_10);

  VAR_16 = FUNC_5(VAR_12->loop, VAR_20);
  if (VAR_16)
    goto no_insert;

  VAR_17 = FUNC_8(VAR_14) + 1;
  VAR_16 = FUNC_12(sizeof(*VAR_16) + VAR_17);
  if (VAR_16 == ((void*)0))
    return VAR_1;

  VAR_16->wd = VAR_20;
  VAR_16->path = FUNC_7(VAR_16 + 1, VAR_14, VAR_17);
  FUNC_1(&VAR_16->watchers);
  VAR_16->iterating = 0;
  FUNC_3(VAR_11, FUNC_0(&VAR_12->loop->inotify_watchers), VAR_16);

no_insert:
  FUNC_9(VAR_12);
  FUNC_2(&VAR_16->watchers, &VAR_12->watchers);
  VAR_12->path = VAR_16->path;
  VAR_12->cb = VAR_13;
  VAR_12->wd = VAR_20;

  return 0;
}
