
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs_fd; int backend_fd; } ;
typedef TYPE_1__ uv_loop_t ;


 int FUNC_0 (int) ;

int FUNC_1(uv_loop_t* VAR_0) {
  VAR_0->fs_fd = -1;



  VAR_0->backend_fd = FUNC_0(-1);

  if (VAR_0->backend_fd == -1)
    return -1;

  return 0;
}
