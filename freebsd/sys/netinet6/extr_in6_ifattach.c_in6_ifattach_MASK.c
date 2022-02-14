
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_ifaddr {int ia_ifa; } ;
struct ifnet {int if_type; int if_flags; scalar_t__ if_mtu; int ** if_afdata; } ;
struct epoch_tracker {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ifnet*,struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 int VAR_8 ;
 struct in6_ifaddr* FUNC_7 (struct ifnet*,int ) ;
 struct in6_ifaddr* FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;

void
FUNC_10(struct ifnet *VAR_9, struct ifnet *VAR_10)
{
 struct in6_ifaddr *VAR_11;

 if (VAR_9->if_afdata[VAR_0] == ((void*)0))
  return;



 switch (VAR_9->if_type) {
 case 128:






  FUNC_0(VAR_9)->flags &= ~VAR_4;
  FUNC_0(VAR_9)->flags |= VAR_6;
  break;
 default:
  break;
 }




 if ((VAR_9->if_flags & VAR_2) == 0) {
  FUNC_9((VAR_3, "in6_ifattach: "
      "%s is not multicast capable, IPv6 not enabled\n",
      FUNC_3(VAR_9)));
  return;
 }




 if ((VAR_9->if_flags & VAR_1) != 0) {



  VAR_11 = FUNC_8(&VAR_8, 0);
  if (VAR_11 == ((void*)0))
   FUNC_6(VAR_9);
  else
   FUNC_4(&VAR_11->ia_ifa);
 }




 if (!(FUNC_0(VAR_9)->flags & VAR_5) &&
     FUNC_0(VAR_9)->flags & VAR_4) {
  struct epoch_tracker VAR_12;

  FUNC_1(VAR_12);
  VAR_11 = FUNC_7(VAR_9, 0);
  FUNC_2(VAR_12);
  if (VAR_11 == ((void*)0))
   FUNC_5(VAR_9, VAR_10);
  else
   FUNC_4(&VAR_11->ia_ifa);
 }


 if (VAR_7 < VAR_9->if_mtu)
  VAR_7 = VAR_9->if_mtu;
}
