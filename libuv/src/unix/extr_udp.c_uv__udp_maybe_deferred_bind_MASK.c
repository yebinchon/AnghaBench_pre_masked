
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fd; } ;
struct TYPE_8__ {TYPE_1__ io_watcher; } ;
typedef TYPE_3__ uv_udp_t ;
struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in6 {int sin_family; int sin6_family; int sin6_addr; TYPE_2__ sin_addr; } ;
struct sockaddr_in {int sin_family; int sin6_family; int sin6_addr; TYPE_2__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;




 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct sockaddr_in6*,int ,int) ;
 int FUNC_3 (TYPE_3__*,struct sockaddr*,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(uv_udp_t* VAR_2,
                                       int VAR_3,
                                       unsigned int VAR_4) {
  union {
    struct sockaddr_in6 in6;
    struct sockaddr_in in;
    struct sockaddr addr;
  } VAR_5;
  socklen_t VAR_6;

  if (VAR_2->io_watcher.fd != -1)
    return 0;

  switch (VAR_3) {
  case 129:
  {
    struct sockaddr_in* VAR_7 = &VAR_5.in;
    FUNC_2(VAR_7, 0, sizeof *VAR_7);
    VAR_7->sin_family = 129;
    VAR_7->sin_addr.s_addr = VAR_0;
    VAR_6 = sizeof *VAR_7;
    break;
  }
  case 128:
  {
    struct sockaddr_in6* VAR_8 = &VAR_5.in6;
    FUNC_2(VAR_8, 0, sizeof *VAR_8);
    VAR_8->sin6_family = 128;
    VAR_8->sin6_addr = VAR_1;
    VAR_6 = sizeof *VAR_8;
    break;
  }
  default:
    FUNC_1(0 && "unsupported address family");
    FUNC_0();
  }

  return FUNC_3(VAR_2, &VAR_5.addr, VAR_6, VAR_4);
}
