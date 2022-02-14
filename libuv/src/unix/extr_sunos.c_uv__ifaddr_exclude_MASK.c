
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifaddrs {int ifa_flags; TYPE_1__* ifa_addr; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct ifaddrs *VAR_4) {
  if (!((VAR_4->ifa_flags & VAR_3) && (VAR_4->ifa_flags & VAR_2)))
    return 1;
  if (VAR_4->ifa_addr == ((void*)0))
    return 1;
  if (VAR_4->ifa_addr->sa_family != VAR_0 &&
      VAR_4->ifa_addr->sa_family != VAR_1)
    return 1;
  return 0;
}
