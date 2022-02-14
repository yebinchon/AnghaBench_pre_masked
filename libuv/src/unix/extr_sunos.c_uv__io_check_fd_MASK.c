
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int backend_fd; } ;
typedef TYPE_1__ uv_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;

int FUNC_5(uv_loop_t* VAR_3, int VAR_4) {
  if (FUNC_3(VAR_3->backend_fd, VAR_1, VAR_4, VAR_0, 0))
    return FUNC_0(VAR_2);

  if (FUNC_4(VAR_3->backend_fd, VAR_1, VAR_4)) {
    FUNC_2("(libuv) port_dissociate()");
    FUNC_1();
  }

  return 0;
}
