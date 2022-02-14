
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {int flags; TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,void const*,size_t) ;

__attribute__((used)) static int FUNC_2(uv_udp_t* VAR_4,
                         int VAR_5,
                         int VAR_6,
                         const void* VAR_7,
                         size_t VAR_8) {
  int VAR_9;

  if (VAR_4->flags & VAR_2)
    VAR_9 = FUNC_1(VAR_4->io_watcher.fd,
                   VAR_1,
                   VAR_6,
                   VAR_7,
                   VAR_8);
  else
    VAR_9 = FUNC_1(VAR_4->io_watcher.fd,
                   VAR_0,
                   VAR_5,
                   VAR_7,
                   VAR_8);
  if (VAR_9)
    return FUNC_0(VAR_3);

  return 0;
}
