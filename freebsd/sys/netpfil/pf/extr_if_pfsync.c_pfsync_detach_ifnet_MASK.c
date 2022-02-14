
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * imo_multicast_ifp; int imo_head; } ;
struct pfsync_softc {struct ifnet* sc_sync_if; TYPE_1__ sc_imo; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct pfsync_softc*) ;
 int FUNC_1 (struct pfsync_softc*) ;
 struct pfsync_softc* VAR_0 ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ifnet *VAR_1)
{
 struct pfsync_softc *VAR_2 = VAR_0;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_2);

 if (VAR_2->sc_sync_if == VAR_1) {




  FUNC_2(&VAR_2->sc_imo.imo_head);
  VAR_2->sc_imo.imo_multicast_ifp = ((void*)0);
  VAR_2->sc_sync_if = ((void*)0);
 }

 FUNC_1(VAR_2);
}
