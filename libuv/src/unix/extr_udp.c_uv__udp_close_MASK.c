
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_5__ {TYPE_3__ io_watcher; int loop; } ;
typedef TYPE_1__ uv_udp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_3__*) ;

void FUNC_3(uv_udp_t* VAR_0) {
  FUNC_2(VAR_0->loop, &VAR_0->io_watcher);
  FUNC_1(VAR_0);

  if (VAR_0->io_watcher.fd != -1) {
    FUNC_0(VAR_0->io_watcher.fd);
    VAR_0->io_watcher.fd = -1;
  }
}
