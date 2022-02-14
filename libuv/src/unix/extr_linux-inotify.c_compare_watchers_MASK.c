
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watcher_list {scalar_t__ wd; } ;



__attribute__((used)) static int FUNC_0(const struct watcher_list* VAR_0,
                            const struct watcher_list* VAR_1) {
  if (VAR_0->wd < VAR_1->wd) return -1;
  if (VAR_0->wd > VAR_1->wd) return 1;
  return 0;
}
