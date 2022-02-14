
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int fd; } ;
struct TYPE_14__ {TYPE_5__ io_watcher; } ;
typedef TYPE_6__ uv_udp_t ;
typedef scalar_t__ uv_membership ;
struct TYPE_12__ {int s_addr; } ;
struct sockaddr_in {TYPE_4__ sin_addr; } ;
struct TYPE_11__ {int s_addr; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_9__ {int s_addr; } ;
struct ip_mreq_source {TYPE_3__ imr_sourceaddr; TYPE_2__ imr_multiaddr; TYPE_1__ imr_interface; } ;
typedef int mreq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ip_mreq_source*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int,struct ip_mreq_source*,int) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int FUNC_5 (int ,char const*,int *) ;

__attribute__((used)) static int FUNC_6(uv_udp_t* VAR_10,
                                          const struct sockaddr_in* VAR_11,
                                          const char* VAR_12,
                                          const struct sockaddr_in* VAR_13,
                                          uv_membership VAR_14) {
  struct ip_mreq_source VAR_15;
  int VAR_16;
  int VAR_17;

  VAR_17 = FUNC_4(VAR_10, VAR_0, VAR_8);
  if (VAR_17)
    return VAR_17;

  FUNC_2(&VAR_15, 0, sizeof(VAR_15));

  if (VAR_12 != ((void*)0)) {
    VAR_17 = FUNC_5(VAR_0, VAR_12, &VAR_15.imr_interface.s_addr);
    if (VAR_17)
      return VAR_17;
  } else {
    VAR_15.imr_interface.s_addr = FUNC_1(VAR_1);
  }

  VAR_15.imr_multiaddr.s_addr = VAR_11->sin_addr.s_addr;
  VAR_15.imr_sourceaddr.s_addr = VAR_13->sin_addr.s_addr;

  if (VAR_14 == VAR_6)
    VAR_16 = VAR_3;
  else if (VAR_14 == VAR_7)
    VAR_16 = VAR_4;
  else
    return VAR_5;

  if (FUNC_3(VAR_10->io_watcher.fd,
                 VAR_2,
                 VAR_16,
                 &VAR_15,
                 sizeof(VAR_15))) {
    return FUNC_0(VAR_9);
  }

  return 0;
}
