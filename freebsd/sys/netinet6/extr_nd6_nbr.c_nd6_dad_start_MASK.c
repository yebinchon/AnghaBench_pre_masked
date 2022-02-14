
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sin6_addr; } ;
struct in6_ifaddr {int ia6_flags; TYPE_1__ ia_addr; } ;
struct ifaddr {TYPE_2__* ifa_ifp; } ;
struct epoch_tracker {int dummy; } ;
struct dadq {int dad_refcnt; scalar_t__ dad_loopbackprobe; scalar_t__ dad_ns_lcount; scalar_t__ dad_ns_tcount; scalar_t__ dad_ns_ocount; scalar_t__ dad_na_icount; scalar_t__ dad_ns_icount; scalar_t__ dad_count; struct ifaddr* dad_ifa; int dad_vnet; int dad_timer_ch; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int if_flags; int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct epoch_tracker) ;
 int FUNC_3 (struct epoch_tracker) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int *,int ) ;
 int VAR_13 ;
 char* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct ifaddr*) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (int ,char*,int ,char*) ;
 struct dadq* FUNC_9 (int,int ,int) ;
 int FUNC_10 (struct dadq*) ;
 struct dadq* FUNC_11 (struct ifaddr*,int *) ;
 int FUNC_12 (struct dadq*) ;
 int FUNC_13 (struct dadq*,int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int) ;

void
FUNC_16(struct ifaddr *VAR_14, int VAR_15)
{
 struct in6_ifaddr *VAR_16 = (struct in6_ifaddr *)VAR_14;
 struct dadq *VAR_17;
 char VAR_18[VAR_4];
 struct epoch_tracker VAR_19;

 FUNC_0((VAR_16->ia6_flags & VAR_3) != 0,
     ("starting DAD on non-tentative address %p", VAR_14));







 if ((VAR_16->ia6_flags & VAR_2) != 0 ||
     VAR_12 == 0 ||
     (FUNC_1(VAR_14->ifa_ifp)->flags & VAR_11) != 0) {
  VAR_16->ia6_flags &= ~VAR_3;
  return;
 }
 if ((VAR_14->ifa_ifp->if_flags & VAR_1) == 0 ||
     (VAR_14->ifa_ifp->if_drv_flags & VAR_0) == 0 ||
     (FUNC_1(VAR_14->ifa_ifp)->flags & VAR_10) != 0)
  return;

 if ((VAR_17 = FUNC_11(VAR_14, ((void*)0))) != ((void*)0)) {




  FUNC_12(VAR_17);
  return;
 }

 VAR_17 = FUNC_9(sizeof(*VAR_17), VAR_7, VAR_8 | VAR_9);
 if (VAR_17 == ((void*)0)) {
  FUNC_8(VAR_6, "nd6_dad_start: memory allocation failed for "
   "%s(%s)\n",
   FUNC_7(VAR_18, &VAR_16->ia_addr.sin6_addr),
   VAR_14->ifa_ifp ? FUNC_5(VAR_14->ifa_ifp) : "???");
  return;
 }
 FUNC_4(&VAR_17->dad_timer_ch, 0);



 FUNC_14((VAR_5, "%s: starting DAD for %s\n", FUNC_5(VAR_14->ifa_ifp),
     FUNC_7(VAR_18, &VAR_16->ia_addr.sin6_addr)));







 VAR_17->dad_ifa = VAR_14;
 FUNC_6(VAR_17->dad_ifa);
 VAR_17->dad_count = VAR_12;
 VAR_17->dad_ns_icount = VAR_17->dad_na_icount = 0;
 VAR_17->dad_ns_ocount = VAR_17->dad_ns_tcount = 0;
 VAR_17->dad_ns_lcount = VAR_17->dad_loopbackprobe = 0;


 FUNC_15(&VAR_17->dad_refcnt, 1);
 FUNC_10(VAR_17);
 FUNC_2(VAR_19);
 FUNC_13(VAR_17, VAR_15, 0);
 FUNC_3(VAR_19);
}
