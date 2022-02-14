
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {int flags; TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;
struct sockaddr {int sa_family; } ;
typedef int addr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct sockaddr*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct sockaddr*,int ,int) ;

int FUNC_3(uv_udp_t* VAR_5) {
    int VAR_6;
    struct sockaddr VAR_7;

    FUNC_2(&VAR_7, 0, sizeof(VAR_7));

    VAR_7.sa_family = VAR_0;

    do {
      VAR_4 = 0;
      VAR_6 = FUNC_1(VAR_5->io_watcher.fd, &VAR_7, sizeof(VAR_7));
    } while (VAR_6 == -1 && VAR_4 == VAR_2);

    if (VAR_6 == -1 && VAR_4 != VAR_1)
      return FUNC_0(VAR_4);

    VAR_5->flags &= ~VAR_3;
    return 0;
}
