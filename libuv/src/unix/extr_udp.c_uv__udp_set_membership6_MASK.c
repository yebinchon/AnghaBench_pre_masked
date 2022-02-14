
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_udp_t ;
typedef int uv_membership ;
struct sockaddr_in6 {int sin6_addr; scalar_t__ sin6_scope_id; } ;
struct ipv6_mreq {int ipv6mr_multiaddr; scalar_t__ ipv6mr_interface; } ;
typedef int mreq ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ipv6_mreq*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int,struct ipv6_mreq*,int) ;
 scalar_t__ FUNC_3 (char const*,int ,struct sockaddr_in6*) ;

__attribute__((used)) static int FUNC_4(uv_udp_t* VAR_7,
                                   const struct sockaddr_in6* VAR_8,
                                   const char* VAR_9,
                                   uv_membership VAR_10) {
  int VAR_11;
  struct ipv6_mreq VAR_12;
  struct sockaddr_in6 VAR_13;

  FUNC_1(&VAR_12, 0, sizeof VAR_12);

  if (VAR_9) {
    if (FUNC_3(VAR_9, 0, &VAR_13))
      return VAR_4;
    VAR_12.ipv6mr_interface = VAR_13;
  } else {
    VAR_12.ipv6mr_interface = 0;
  }

  VAR_12.ipv6mr_multiaddr = VAR_8->sin6_addr;

  switch (VAR_10) {
  case 129:
    VAR_11 = VAR_2;
    break;
  case 128:
    VAR_11 = VAR_3;
    break;
  default:
    return VAR_4;
  }

  if (FUNC_2(VAR_7->io_watcher.fd,
                 VAR_1,
                 VAR_11,
                 &VAR_12,
                 sizeof(VAR_12))) {




    return FUNC_0(VAR_6);
  }

  return 0;
}
