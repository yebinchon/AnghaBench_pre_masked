
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int fd; } ;
struct TYPE_11__ {TYPE_4__ io_watcher; } ;
typedef TYPE_5__ uv_udp_t ;
typedef int uv_membership ;
struct TYPE_9__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct ip_mreq {TYPE_2__ imr_multiaddr; TYPE_1__ imr_interface; } ;
typedef int mreq ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ip_mreq*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int,struct ip_mreq*,int) ;
 int FUNC_4 (int ,char const*,int *) ;

__attribute__((used)) static int FUNC_5(uv_udp_t* VAR_9,
                                   const struct sockaddr_in* VAR_10,
                                   const char* VAR_11,
                                   uv_membership VAR_12) {
  struct ip_mreq VAR_13;
  int VAR_14;
  int VAR_15;

  FUNC_2(&VAR_13, 0, sizeof VAR_13);

  if (VAR_11) {
    VAR_15 = FUNC_4(VAR_0, VAR_11, &VAR_13.imr_interface.s_addr);
    if (VAR_15)
      return VAR_15;
  } else {
    VAR_13.imr_interface.s_addr = FUNC_1(VAR_2);
  }

  VAR_13.imr_multiaddr.s_addr = VAR_10->sin_addr.s_addr;

  switch (VAR_12) {
  case 129:
    VAR_14 = VAR_4;
    break;
  case 128:
    VAR_14 = VAR_5;
    break;
  default:
    return VAR_6;
  }

  if (FUNC_3(VAR_9->io_watcher.fd,
                 VAR_3,
                 VAR_14,
                 &VAR_13,
                 sizeof(VAR_13))) {




    return FUNC_0(VAR_8);
  }

  return 0;
}
