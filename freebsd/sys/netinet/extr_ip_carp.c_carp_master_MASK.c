
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddr {struct carp_softc* ifa_carp; } ;
struct carp_softc {scalar_t__ sc_state; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct ifaddr *VAR_1)
{
 struct carp_softc *VAR_2 = VAR_1->ifa_carp;

 return (VAR_2->sc_state == VAR_0);
}
