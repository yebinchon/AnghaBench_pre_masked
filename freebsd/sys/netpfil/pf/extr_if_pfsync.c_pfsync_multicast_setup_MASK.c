
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_moptions {int imo_multicast_vif; scalar_t__ imo_multicast_loop; int imo_multicast_ttl; struct ifnet* imo_multicast_ifp; int imo_head; } ;
struct pfsync_softc {int sc_sync_peer; struct ip_moptions sc_imo; } ;
struct in_mfilter {int imf_inm; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct in_mfilter*) ;

__attribute__((used)) static int
FUNC_3(struct pfsync_softc *VAR_3, struct ifnet *VAR_4,
    struct in_mfilter *VAR_5)
{
 struct ip_moptions *VAR_6 = &VAR_3->sc_imo;
 int VAR_7;

 if (!(VAR_4->if_flags & VAR_1))
  return (VAR_0);

 VAR_6->imo_multicast_vif = -1;

 if ((VAR_7 = FUNC_0(VAR_4, &VAR_3->sc_sync_peer, ((void*)0),
     &VAR_5->imf_inm)) != 0)
  return (VAR_7);

 FUNC_1(&VAR_6->imo_head);
 FUNC_2(&VAR_6->imo_head, VAR_5);
 VAR_6->imo_multicast_ifp = VAR_4;
 VAR_6->imo_multicast_ttl = VAR_2;
 VAR_6->imo_multicast_loop = 0;

 return (0);
}
