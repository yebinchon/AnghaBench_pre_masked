
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fd; } ;
struct TYPE_7__ {int * path; TYPE_4__ event_watcher; int loop; int * cf_cb; } ;
typedef TYPE_1__ uv_fs_event_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(uv_fs_event_t* VAR_1) {
  int VAR_2;
  VAR_2 = 0;

  if (!FUNC_5(VAR_1))
    return 0;

  FUNC_3(VAR_1);






  if (VAR_1->event_watcher.fd != -1) {
    FUNC_4(VAR_1->loop, &VAR_1->event_watcher);
    FUNC_0(VAR_1->event_watcher.fd);
    VAR_1->event_watcher.fd = -1;
  }

  FUNC_1(VAR_1->path);
  VAR_1->path = ((void*)0);

  return VAR_2;
}
