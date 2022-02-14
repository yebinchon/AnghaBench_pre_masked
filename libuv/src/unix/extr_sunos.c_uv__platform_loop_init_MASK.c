
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs_fd; int backend_fd; } ;
typedef TYPE_1__ uv_loop_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

int FUNC_4(uv_loop_t* VAR_1) {
  int VAR_2;
  int VAR_3;

  VAR_1->fs_fd = -1;
  VAR_1->backend_fd = -1;

  VAR_3 = FUNC_1();
  if (VAR_3 == -1)
    return FUNC_0(VAR_0);

  VAR_2 = FUNC_2(VAR_3, 1);
  if (VAR_2) {
    FUNC_3(VAR_3);
    return VAR_2;
  }
  VAR_1->backend_fd = VAR_3;

  return 0;
}
