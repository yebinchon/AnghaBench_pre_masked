
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int backend_fd; int inotify_fd; int * inotify_watchers; } ;
typedef TYPE_1__ uv_loop_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,int) ;

int FUNC_4(uv_loop_t* VAR_4) {
  int VAR_5;
  VAR_5 = FUNC_2(VAR_2);





  if (VAR_5 == -1 && (VAR_3 == VAR_1 || VAR_3 == VAR_0)) {
    VAR_5 = FUNC_1(256);

    if (VAR_5 != -1)
      FUNC_3(VAR_5, 1);
  }

  VAR_4->backend_fd = VAR_5;
  VAR_4->inotify_fd = -1;
  VAR_4->inotify_watchers = ((void*)0);

  if (VAR_5 == -1)
    return FUNC_0(VAR_3);

  return 0;
}
