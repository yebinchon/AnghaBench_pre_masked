
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_7__ {TYPE_1__ async_io_watcher; } ;
typedef TYPE_2__ uv_loop_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(uv_loop_t* VAR_0) {
  if (VAR_0->async_io_watcher.fd == -1)
    return 0;

  FUNC_1(VAR_0);

  return FUNC_0(VAR_0);
}
