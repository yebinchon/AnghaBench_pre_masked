
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int backend_fd; } ;
typedef TYPE_1__ uv_loop_t ;
struct poll_ctl {int fd; int cmd; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,struct poll_ctl*,int) ;

int FUNC_3(uv_loop_t* VAR_4, int VAR_5) {
  struct poll_ctl VAR_6;

  VAR_6.events = VAR_0;
  VAR_6.cmd = VAR_2;
  VAR_6.fd = VAR_5;

  if (FUNC_2(VAR_4->backend_fd, &VAR_6, 1))
    return FUNC_0(VAR_3);

  VAR_6.cmd = VAR_1;
  if (FUNC_2(VAR_4->backend_fd, &VAR_6, 1))
    FUNC_1();

  return 0;
}
