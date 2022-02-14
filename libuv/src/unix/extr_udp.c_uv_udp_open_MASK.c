
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {int flags; TYPE_1__ io_watcher; int loop; } ;
typedef TYPE_2__ uv_udp_t ;
typedef int uv_os_sock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

int FUNC_4(uv_udp_t* VAR_3, uv_os_sock_t VAR_4) {
  int VAR_5;


  if (VAR_3->io_watcher.fd != -1)
    return VAR_0;

  if (FUNC_0(VAR_3->loop, VAR_4))
    return VAR_1;

  VAR_5 = FUNC_1(VAR_4, 1);
  if (VAR_5)
    return VAR_5;

  VAR_5 = FUNC_2(VAR_4);
  if (VAR_5)
    return VAR_5;

  VAR_3->io_watcher.fd = VAR_4;
  if (FUNC_3(VAR_3))
    VAR_3->flags |= VAR_2;

  return 0;
}
