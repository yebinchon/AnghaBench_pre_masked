
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;
typedef int on ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int*,int) ;

int FUNC_2(uv_udp_t* VAR_3, int VAR_4) {
  if (FUNC_1(VAR_3->io_watcher.fd,
                 VAR_0,
                 VAR_1,
                 &VAR_4,
                 sizeof(VAR_4))) {
    return FUNC_0(VAR_2);
  }

  return 0;
}
