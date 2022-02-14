
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_addr; } ;
struct in6_ifaddr {int ia6_flags; TYPE_1__ ia_addr; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_xname; } ;
struct ifaddr {struct ifnet* ifa_ifp; } ;
struct epoch_tracker {int dummy; } ;
struct dadq {scalar_t__ dad_ns_tcount; scalar_t__ dad_ns_ocount; scalar_t__ dad_count; scalar_t__ dad_ns_icount; scalar_t__ dad_na_icount; scalar_t__ dad_ns_lcount; scalar_t__ dad_loopbackprobe; struct ifaddr* dad_ifa; int dad_vnet; } ;
struct TYPE_4__ {int flags; scalar_t__ retrans; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct ifaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct epoch_tracker) ;
 int FUNC_6 (struct epoch_tracker) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 long VAR_12 ;
 char* FUNC_7 (struct ifnet*) ;
 char* FUNC_8 (char*,int *) ;
 int FUNC_9 (int ,char*,char*,...) ;
 int FUNC_10 (struct dadq*) ;
 int FUNC_11 (struct ifaddr*,struct dadq*) ;
 int FUNC_12 (struct dadq*,long,int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(struct dadq *VAR_13)
{
 FUNC_1(VAR_13->dad_vnet);
 struct ifaddr *VAR_14 = VAR_13->dad_ifa;
 struct ifnet *VAR_15 = VAR_13->dad_ifa->ifa_ifp;
 struct in6_ifaddr *VAR_16 = (struct in6_ifaddr *)VAR_14;
 char VAR_17[VAR_4];
 struct epoch_tracker VAR_18;

 FUNC_3(VAR_16 != ((void*)0), ("DAD entry %p with no address", VAR_13));

 FUNC_5(VAR_18);
 if (FUNC_4(VAR_15)->flags & VAR_8) {

  FUNC_9(VAR_6, "nd6_dad_timer: cancel DAD on %s because of "
      "ND6_IFF_IFDISABLED.\n", VAR_15->if_xname);
  goto err;
 }
 if (VAR_16->ia6_flags & VAR_2) {
  FUNC_9(VAR_6, "nd6_dad_timer: called with duplicated address "
   "%s(%s)\n",
   FUNC_8(VAR_17, &VAR_16->ia_addr.sin6_addr),
   VAR_14->ifa_ifp ? FUNC_7(VAR_14->ifa_ifp) : "???");
  goto err;
 }
 if ((VAR_16->ia6_flags & VAR_3) == 0) {
  FUNC_9(VAR_6, "nd6_dad_timer: called with non-tentative address "
   "%s(%s)\n",
   FUNC_8(VAR_17, &VAR_16->ia_addr.sin6_addr),
   VAR_14->ifa_ifp ? FUNC_7(VAR_14->ifa_ifp) : "???");
  goto err;
 }


 if ((VAR_13->dad_ns_tcount > VAR_10) &&
     (((VAR_15->if_flags & VAR_1) == 0) ||
      ((VAR_15->if_drv_flags & VAR_0) == 0))) {
  FUNC_13((VAR_7, "%s: could not run DAD "
      "because the interface was down or not running.\n",
      FUNC_7(VAR_14->ifa_ifp)));
  goto err;
 }


 if (VAR_13->dad_ns_ocount < VAR_13->dad_count) {



  FUNC_12(VAR_13,
      (long)FUNC_4(VAR_14->ifa_ifp)->retrans * VAR_12 / 1000, 1);
  goto done;
 } else {




  if (VAR_13->dad_ns_icount > 0 || VAR_13->dad_na_icount > 0)

   FUNC_11(VAR_14, VAR_13);
  else if (VAR_9 != 0 &&
      VAR_13->dad_ns_lcount > 0 &&
      VAR_13->dad_ns_lcount > VAR_13->dad_loopbackprobe) {





   FUNC_9(VAR_6, "%s: a looped back NS message is "
       "detected during DAD for %s.  "
       "Another DAD probes are being sent.\n",
       FUNC_7(VAR_14->ifa_ifp),
       FUNC_8(VAR_17, FUNC_2(VAR_14)));
   VAR_13->dad_loopbackprobe = VAR_13->dad_ns_lcount;




   VAR_13->dad_count =
       VAR_13->dad_ns_ocount + VAR_11 - 1;
   FUNC_12(VAR_13,
       (long)FUNC_4(VAR_14->ifa_ifp)->retrans * VAR_12 / 1000,
       1);
   goto done;
  } else {






   if ((FUNC_4(VAR_15)->flags & VAR_8) == 0)
    VAR_16->ia6_flags &= ~VAR_3;

   FUNC_13((VAR_5,
       "%s: DAD complete for %s - no duplicates found\n",
       FUNC_7(VAR_14->ifa_ifp),
       FUNC_8(VAR_17, &VAR_16->ia_addr.sin6_addr)));
   if (VAR_13->dad_ns_lcount > 0)
    FUNC_9(VAR_6, "%s: DAD completed while "
        "a looped back NS message is detected "
        "during DAD for %s.\n",
        FUNC_7(VAR_14->ifa_ifp),
        FUNC_8(VAR_17, FUNC_2(VAR_14)));
  }
 }
err:
 FUNC_10(VAR_13);
done:
 FUNC_6(VAR_18);
 FUNC_0();
}
