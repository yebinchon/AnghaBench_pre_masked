
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifaddrs {int ifa_flags; TYPE_1__* ifa_addr; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ifaddrs *VAR_3, int VAR_4) {
  if (!((VAR_3->ifa_flags & VAR_1) && (VAR_3->ifa_flags & VAR_0)))
    return 1;
  if (VAR_3->ifa_addr == ((void*)0))
    return 1;




  if (VAR_3->ifa_addr->sa_family == VAR_2)
    return VAR_4;
  return !VAR_4;
}
