
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {int flags; TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;
struct sockaddr {int sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct sockaddr const*,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

int FUNC_3(uv_udp_t* VAR_3,
                    const struct sockaddr* VAR_4,
                    unsigned int VAR_5) {
  int VAR_6;

  VAR_6 = FUNC_2(VAR_3, VAR_4->sa_family, 0);
  if (VAR_6)
    return VAR_6;

  do {
    VAR_2 = 0;
    VAR_6 = FUNC_1(VAR_3->io_watcher.fd, VAR_4, VAR_5);
  } while (VAR_6 == -1 && VAR_2 == VAR_0);

  if (VAR_6)
    return FUNC_0(VAR_2);

  VAR_3->flags |= VAR_1;

  return 0;
}
