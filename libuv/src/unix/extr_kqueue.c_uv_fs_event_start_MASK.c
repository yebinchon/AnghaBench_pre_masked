
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fd; } ;
struct TYPE_8__ {unsigned int cf_flags; TYPE_4__ event_watcher; int loop; int * path; scalar_t__ realpath_len; int * realpath; int * cf_cb; int cb; } ;
typedef TYPE_1__ uv_fs_event_t ;
typedef int uv_fs_event_cb ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 int FUNC_8 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (char const*) ;

int FUNC_11(uv_fs_event_t* VAR_8,
                      uv_fs_event_cb VAR_9,
                      const char* VAR_10,
                      unsigned int VAR_11) {
  int VAR_12;




  if (FUNC_9(VAR_8))
    return VAR_3;

  VAR_8->cb = VAR_9;
  VAR_8->path = FUNC_10(VAR_10);
  if (VAR_8->path == ((void*)0))
    return VAR_4;


  VAR_12 = FUNC_2(VAR_8->path, VAR_0);
  if (VAR_12 == -1) {
    FUNC_4(VAR_8->path);
    VAR_8->path = ((void*)0);
    return FUNC_0(VAR_5);
  }
  FUNC_6(VAR_8);
  FUNC_7(&VAR_8->event_watcher, VAR_6, VAR_12);
  FUNC_8(VAR_8->loop, &VAR_8->event_watcher, VAR_1);

  return 0;
}
