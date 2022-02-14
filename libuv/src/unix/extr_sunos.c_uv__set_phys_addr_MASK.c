
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int s6_addr; } ;
struct TYPE_16__ {TYPE_5__ sin6_addr; } ;
struct TYPE_12__ {int s_addr; } ;
struct TYPE_13__ {scalar_t__ sin_family; TYPE_2__ sin_addr; } ;
struct TYPE_17__ {TYPE_6__ address6; TYPE_3__ address4; } ;
struct TYPE_19__ {scalar_t__* phys_addr; TYPE_7__ address; } ;
typedef TYPE_9__ uv_interface_address_t ;
struct TYPE_14__ {scalar_t__* s6_addr; } ;
struct sockaddr_in6 {TYPE_4__ sin6_addr; } ;
struct TYPE_11__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr_dl {int dummy; } ;
struct ifaddrs {scalar_t__ ifa_addr; } ;
struct TYPE_18__ {int sa_data; } ;
struct arpreq {TYPE_8__ arp_ha; int arp_pa; } ;
typedef int arpreq ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (struct arpreq*,int ,int) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(uv_interface_address_t* VAR_5,
                             struct ifaddrs* VAR_6) {

  struct sockaddr_dl* VAR_7;
  int VAR_8;
  size_t VAR_9;
  struct arpreq VAR_10;


  VAR_7 = (struct sockaddr_dl*)(VAR_6->ifa_addr);
  FUNC_3(VAR_5->phys_addr, FUNC_0(VAR_7), sizeof(VAR_5->phys_addr));
  for (VAR_9 = 0; VAR_9 < sizeof(VAR_5->phys_addr); VAR_9++) {

    if (VAR_5->phys_addr[VAR_9] != 0)
      return 0;
  }
  FUNC_4(&VAR_10, 0, sizeof(VAR_10));
  if (VAR_5->address.address4.sin_family == VAR_0) {
    struct sockaddr_in* VAR_11 = ((struct sockaddr_in*)&VAR_10.arp_pa);
    VAR_11->sin_addr.s_addr = VAR_5->address.address4.sin_addr.s_addr;
  } else if (VAR_5->address.address4.sin_family == VAR_1) {
    struct sockaddr_in6* VAR_12 = ((struct sockaddr_in6*)&VAR_10.arp_pa);
    FUNC_3(VAR_12->sin6_addr.s6_addr,
           VAR_5->address.address6.sin6_addr.s6_addr,
           sizeof(VAR_5->address.address6.sin6_addr.s6_addr));
  } else {
    return 0;
  }

  VAR_8 = FUNC_5(VAR_0, VAR_3, 0);
  if (VAR_8 < 0)
    return FUNC_1(VAR_4);

  if (FUNC_2(VAR_8, VAR_2, (char*)&VAR_10) == -1) {
    FUNC_6(VAR_8);
    return FUNC_1(VAR_4);
  }
  FUNC_3(VAR_5->phys_addr, VAR_10.arp_ha.sa_data, sizeof(VAR_5->phys_addr));
  FUNC_6(VAR_8);
  return 0;
}
