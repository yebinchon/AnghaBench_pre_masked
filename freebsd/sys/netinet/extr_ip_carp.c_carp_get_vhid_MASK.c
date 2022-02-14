
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifaddr {TYPE_1__* ifa_carp; } ;
struct TYPE_2__ {int sc_vhid; } ;



__attribute__((used)) static int
FUNC_0(struct ifaddr *VAR_0)
{

 if (VAR_0 == ((void*)0) || VAR_0->ifa_carp == ((void*)0))
  return (0);

 return (VAR_0->ifa_carp->sc_vhid);
}
