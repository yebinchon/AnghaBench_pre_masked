
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_10__ {int s_addr; } ;
struct pfsyncreq {int pfsyncr_maxupdates; int pfsyncr_defer; int ip_hl; TYPE_2__ ip_dst; TYPE_1__ ip_src; int ip_p; int ip_ttl; int ip_off; int ip_tos; int ip_v; TYPE_3__ pfsyncr_syncpeer; int * pfsyncr_syncdev; } ;
struct pfsync_softc {int sc_maxupdates; int sc_flags; int sc_bulkfail_tmo; int sc_ureq_sent; TYPE_6__* sc_buckets; TYPE_3__ sc_sync_peer; struct pfsyncreq sc_template; struct ifnet* sc_sync_if; TYPE_4__* sc_ifp; } ;
struct ip {int pfsyncr_maxupdates; int pfsyncr_defer; int ip_hl; TYPE_2__ ip_dst; TYPE_1__ ip_src; int ip_p; int ip_ttl; int ip_off; int ip_tos; int ip_v; TYPE_3__ pfsyncr_syncpeer; int * pfsyncr_syncdev; } ;
struct in_mfilter {int dummy; } ;
struct ifreq {int ifr_mtu; } ;
struct ifnet {int if_flags; int if_mtu; int if_xname; int if_drv_flags; struct pfsync_softc* if_softc; } ;
typedef int pfsyncr ;
typedef scalar_t__ caddr_t ;
struct TYPE_13__ {int b_len; } ;
struct TYPE_12__ {int debug; } ;
struct TYPE_11__ {int if_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct pfsync_softc*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (struct pfsync_softc*) ;
 int VAR_15 ;
 int FUNC_4 (struct pfsync_softc*) ;
 int VAR_16 ;
 int FUNC_5 (struct pfsync_softc*) ;
 int VAR_17 ;
 int VAR_18 ;




 TYPE_5__ VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int FUNC_6 (struct pfsyncreq*,int) ;
 int FUNC_7 (int *,int,int ,struct pfsync_softc*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,struct pfsyncreq*,int) ;
 int FUNC_10 (struct pfsyncreq*,int ,int) ;
 int VAR_22 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_23 ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct ifreq*) ;
 struct ifnet* FUNC_15 (int *) ;
 struct in_mfilter* FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (struct in_mfilter*) ;
 int VAR_24 ;
 int VAR_25 ;
 int * VAR_26 ;
 int FUNC_18 (struct pfsync_softc*) ;
 int FUNC_19 (struct pfsync_softc*,struct ifnet*,struct in_mfilter*) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int,int) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int *,int ,int ) ;
 int FUNC_27 (int ,char*) ;
 int VAR_27 ;

__attribute__((used)) static int
FUNC_28(struct ifnet *VAR_28, u_long VAR_29, caddr_t VAR_30)
{
 struct pfsync_softc *VAR_31 = VAR_28->if_softc;
 struct ifreq *VAR_32 = (struct ifreq *)VAR_30;
 struct pfsyncreq VAR_33;
 int VAR_34;
 int VAR_35;

 switch (VAR_29) {
 case 129:
  FUNC_4(VAR_31);
  if (VAR_28->if_flags & VAR_3) {
   VAR_28->if_drv_flags |= VAR_2;
   FUNC_5(VAR_31);
   FUNC_20();
  } else {
   VAR_28->if_drv_flags &= ~VAR_2;
   FUNC_5(VAR_31);
   FUNC_21();
  }
  break;
 case 128:
  if (!VAR_31->sc_sync_if ||
      VAR_32->ifr_mtu <= VAR_16 ||
      VAR_32->ifr_mtu > VAR_31->sc_sync_if->if_mtu)
   return (VAR_0);
  if (VAR_32->ifr_mtu < VAR_28->if_mtu) {
   for (VAR_35 = 0; VAR_35 < VAR_24; VAR_35++) {
    FUNC_1(&VAR_31->sc_buckets[VAR_35]);
    if (VAR_31->sc_buckets[VAR_35].b_len > VAR_16)
     FUNC_23(1, VAR_35);
    FUNC_2(&VAR_31->sc_buckets[VAR_35]);
   }
  }
  VAR_28->if_mtu = VAR_32->ifr_mtu;
  break;
 case 131:
  FUNC_6(&VAR_33, sizeof(VAR_33));
  FUNC_4(VAR_31);
  if (VAR_31->sc_sync_if) {
   FUNC_26(VAR_33.pfsyncr_syncdev,
       VAR_31->sc_sync_if->if_xname, VAR_4);
  }
  VAR_33.pfsyncr_syncpeer = VAR_31->sc_sync_peer;
  VAR_33.pfsyncr_maxupdates = VAR_31->sc_maxupdates;
  VAR_33.pfsyncr_defer = (VAR_13 ==
      (VAR_31->sc_flags & VAR_13));
  FUNC_5(VAR_31);
  return (FUNC_10(&VAR_33, FUNC_14(VAR_32),
      sizeof(VAR_33)));

 case 130:
     {
  struct in_mfilter *VAR_36 = ((void*)0);
  struct ifnet *VAR_37;
  struct ip *VAR_38;

  if ((VAR_34 = FUNC_25(VAR_22, VAR_18)) != 0)
   return (VAR_34);
  if ((VAR_34 = FUNC_9(FUNC_14(VAR_32), &VAR_33,
      sizeof(VAR_33))))
   return (VAR_34);

  if (VAR_33.pfsyncr_maxupdates > 255)
   return (VAR_0);

  if (VAR_33.pfsyncr_syncdev[0] == 0)
   VAR_37 = ((void*)0);
  else if ((VAR_37 = FUNC_15(VAR_33.pfsyncr_syncdev)) == ((void*)0))
   return (VAR_0);

  if (VAR_37 != ((void*)0) && (
      VAR_33.pfsyncr_syncpeer.s_addr == 0 ||
      VAR_33.pfsyncr_syncpeer.s_addr ==
      FUNC_11(VAR_6)))
   VAR_36 = FUNC_16(VAR_12, 0, 0);

  FUNC_4(VAR_31);
  if (VAR_33.pfsyncr_syncpeer.s_addr == 0)
   VAR_31->sc_sync_peer.s_addr = FUNC_11(VAR_6);
  else
   VAR_31->sc_sync_peer.s_addr =
       VAR_33.pfsyncr_syncpeer.s_addr;

  VAR_31->sc_maxupdates = VAR_33.pfsyncr_maxupdates;
  if (VAR_33.pfsyncr_defer) {
   VAR_31->sc_flags |= VAR_13;
   VAR_21 = VAR_26;
  } else {
   VAR_31->sc_flags &= ~VAR_13;
   VAR_21 = ((void*)0);
  }

  if (VAR_37 == ((void*)0)) {
   if (VAR_31->sc_sync_if)
    FUNC_13(VAR_31->sc_sync_if);
   VAR_31->sc_sync_if = ((void*)0);
   FUNC_18(VAR_31);
   FUNC_5(VAR_31);
   break;
  }

  for (VAR_35 = 0; VAR_35 < VAR_24; VAR_35++) {
   FUNC_1(&VAR_31->sc_buckets[VAR_35]);
   if (VAR_31->sc_buckets[VAR_35].b_len > VAR_16 &&
       (VAR_37->if_mtu < VAR_31->sc_ifp->if_mtu ||
       (VAR_31->sc_sync_if != ((void*)0) &&
       VAR_37->if_mtu < VAR_31->sc_sync_if->if_mtu) ||
       VAR_37->if_mtu < VAR_11 - sizeof(struct ip)))
    FUNC_23(1, VAR_35);
   FUNC_2(&VAR_31->sc_buckets[VAR_35]);
  }

  FUNC_18(VAR_31);

  if (VAR_31->sc_sync_peer.s_addr == FUNC_11(VAR_6)) {
   VAR_34 = FUNC_19(VAR_31, VAR_37, VAR_36);
   if (VAR_34) {
    FUNC_13(VAR_37);
    FUNC_17(VAR_36);
    FUNC_5(VAR_31);
    return (VAR_34);
   }
  }
  if (VAR_31->sc_sync_if)
   FUNC_13(VAR_31->sc_sync_if);
  VAR_31->sc_sync_if = VAR_37;

  VAR_38 = &VAR_31->sc_template;
  FUNC_6(VAR_38, sizeof(*VAR_38));
  VAR_38->ip_v = VAR_9;
  VAR_38->ip_hl = sizeof(VAR_31->sc_template) >> 2;
  VAR_38->ip_tos = VAR_8;

  VAR_38->ip_off = FUNC_12(VAR_10);
  VAR_38->ip_ttl = VAR_15;
  VAR_38->ip_p = VAR_7;
  VAR_38->ip_src.s_addr = VAR_5;
  VAR_38->ip_dst.s_addr = VAR_31->sc_sync_peer.s_addr;


  if ((VAR_31->sc_flags & VAR_14) && &FUNC_8)
   FUNC_8)(VAR_20,
       "pfsync bulk start");
  VAR_31->sc_flags &= ~VAR_14;
  if (VAR_19.debug >= VAR_17)
   FUNC_24("pfsync: requesting bulk update\n");
  FUNC_5(VAR_31);
  FUNC_1(&VAR_31->sc_buckets[0]);
  FUNC_22(0, 0);
  FUNC_2(&VAR_31->sc_buckets[0]);
  FUNC_0(VAR_31);
  VAR_31->sc_ureq_sent = VAR_27;
  FUNC_7(&VAR_31->sc_bulkfail_tmo, 5 * VAR_23, VAR_25,
      VAR_31);
  FUNC_3(VAR_31);

  break;
     }
 default:
  return (VAR_1);
 }

 return (0);
}
