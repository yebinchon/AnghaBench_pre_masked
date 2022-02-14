
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct in6_addr {scalar_t__* s6_addr32; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; struct in6_addr sin6_addr; scalar_t__ sin6_scope_id; } ;
struct sockaddr_dl {scalar_t__ sdl_index; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rtentry {int rt_flags; TYPE_1__* rt_gateway; struct ifnet* rt_ifp; } ;
struct route_in6 {struct rtentry* ro_rt; struct sockaddr_in6 ro_dst; } ;
struct route {int dummy; } ;
struct ip6_pktopts {struct in6_pktinfo* ip6po_pktinfo; struct sockaddr_in6* ip6po_nexthop; struct route_in6 ip6po_nextroute; } ;
struct ip6_moptions {struct ifnet* im6o_multicast_ifp; } ;
struct in6_pktinfo {scalar_t__ ipi6_ifindex; } ;
struct ifnet {int if_flags; scalar_t__ if_index; } ;
struct TYPE_2__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;
 scalar_t__ FUNC_4 (struct in6_addr*) ;
 scalar_t__ FUNC_5 (struct in6_addr*) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct route_in6*) ;
 int FUNC_8 (struct rtentry*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (struct sockaddr_in6*,int) ;
 struct ifnet* FUNC_11 (scalar_t__) ;
 struct ifnet* FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct in6_addr*) ;
 int FUNC_14 (struct route_in6*,int ) ;
 struct rtentry* FUNC_15 (struct sockaddr*,int ,unsigned long,int ) ;
 char* FUNC_16 (char*,struct in6_addr*) ;
 int VAR_7 ;
 int FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (char*,char*,...) ;
 int FUNC_20 (struct route*,int ,int ) ;
 struct sockaddr_in6* FUNC_21 (struct sockaddr_in6*) ;

__attribute__((used)) static int
FUNC_22(struct sockaddr_in6 *VAR_8, struct ip6_pktopts *VAR_9,
    struct ip6_moptions *VAR_10, struct route_in6 *VAR_11,
    struct ifnet **VAR_12, struct rtentry **VAR_13, int VAR_14, u_int VAR_15)
{
 int VAR_16 = 0;
 struct ifnet *VAR_17 = ((void*)0);
 struct rtentry *VAR_18 = ((void*)0);
 struct sockaddr_in6 *VAR_19;
 struct in6_pktinfo *VAR_20 = ((void*)0);
 struct in6_addr *VAR_21 = &VAR_8->sin6_addr;
 uint32_t VAR_22;
 if (VAR_9 && (VAR_20 = VAR_9->ip6po_pktinfo) != ((void*)0) && VAR_20->ipi6_ifindex) {

  VAR_17 = FUNC_11(VAR_20->ipi6_ifindex);
  if (VAR_17 != ((void*)0) &&
      (VAR_14 || VAR_13 == ((void*)0) ||
      FUNC_5(VAR_21))) {




   goto done;
  } else
   goto getroute;
 }




 if (FUNC_5(VAR_21) &&
     VAR_10 != ((void*)0) && (VAR_17 = VAR_10->im6o_multicast_ifp) != ((void*)0)) {
  goto done;
 }




 if (FUNC_3(VAR_21) ||
     FUNC_4(VAR_21)) {
  VAR_22 = FUNC_18(FUNC_13(VAR_21));
  if (VAR_22 > 0) {
   VAR_17 = FUNC_12(VAR_22);
   goto done;
  }
 }

  getroute:




 if (VAR_9 && VAR_9->ip6po_nexthop) {
  struct route_in6 *VAR_23;

  VAR_19 = FUNC_21(VAR_9->ip6po_nexthop);
  if (FUNC_1(&VAR_19->sin6_addr)) {




   VAR_22 = FUNC_18(FUNC_13(&VAR_19->sin6_addr));
   if (VAR_22 > 0) {
    VAR_17 = FUNC_12(VAR_22);
    goto done;
   }
  }
  VAR_23 = &VAR_9->ip6po_nextroute;

  if (VAR_23->ro_rt != ((void*)0) && (
      (VAR_23->ro_rt->rt_flags & VAR_6) == 0 ||
      VAR_23->ro_dst.sin6_family != VAR_0 ||
      !FUNC_0(&VAR_23->ro_dst.sin6_addr,
   &VAR_19->sin6_addr)))
   FUNC_7(VAR_23);
  if (VAR_23->ro_rt == ((void*)0)) {
   VAR_23->ro_dst = *VAR_19;
   FUNC_14(VAR_23, VAR_15);
  }




  if (VAR_23->ro_rt == ((void*)0) ||
      (VAR_23->ro_rt->rt_flags & VAR_5) != 0)
   VAR_16 = VAR_2;
  else {
   VAR_18 = VAR_23->ro_rt;
   VAR_17 = VAR_18->rt_ifp;
  }
  goto done;
 }






 if (VAR_11) {
  if (VAR_11->ro_rt &&
      (!(VAR_11->ro_rt->rt_flags & VAR_6) ||
       ((struct sockaddr *)(&VAR_11->ro_dst))->sa_family != VAR_0 ||
       !FUNC_0(&FUNC_21(&VAR_11->ro_dst)->sin6_addr,
       VAR_21))) {
   FUNC_8(VAR_11->ro_rt);
   VAR_11->ro_rt = (struct rtentry *)((void*)0);
  }
  if (VAR_11->ro_rt == (struct rtentry *)((void*)0)) {
   struct sockaddr_in6 *VAR_24;


   FUNC_10(&VAR_11->ro_dst, sizeof(struct sockaddr_in6));
   VAR_24 = (struct sockaddr_in6 *)&VAR_11->ro_dst;
   *VAR_24 = *VAR_8;
   VAR_24->sin6_scope_id = 0;





    VAR_11->ro_rt = FUNC_15((struct sockaddr *)
        &VAR_11->ro_dst, 0, 0UL, VAR_15);
    if (VAR_11->ro_rt)
     FUNC_9(VAR_11->ro_rt);

  }





  if (VAR_9 && VAR_9->ip6po_nexthop)
   goto done;

  if (VAR_11->ro_rt) {
   VAR_17 = VAR_11->ro_rt->rt_ifp;

   if (VAR_17 == ((void*)0)) {
    FUNC_8(VAR_11->ro_rt);
    VAR_11->ro_rt = ((void*)0);
   }
  }
  if (VAR_11->ro_rt == ((void*)0))
   VAR_16 = VAR_2;
  VAR_18 = VAR_11->ro_rt;
  if (VAR_17 && VAR_9 && VAR_9->ip6po_pktinfo &&
      VAR_9->ip6po_pktinfo->ipi6_ifindex) {
   if (!(VAR_17->if_flags & VAR_3) &&
       VAR_17->if_index !=
       VAR_9->ip6po_pktinfo->ipi6_ifindex) {
    VAR_16 = VAR_2;
    goto done;
   }
  }
 }

  done:
 if (VAR_17 == ((void*)0) && VAR_18 == ((void*)0)) {




  VAR_16 = VAR_2;
 }
 if (VAR_16 == VAR_2)
  FUNC_6(VAR_7);

 if (VAR_12 != ((void*)0)) {
  *VAR_12 = VAR_17;
  if (VAR_18) {
   if ((VAR_18->rt_ifp->if_flags & VAR_3) &&
       (VAR_18->rt_gateway->sa_family == VAR_1))
    *VAR_12 =
     FUNC_11(((struct sockaddr_dl *)
             VAR_18->rt_gateway)->sdl_index);
  }
 }

 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_18;

 return (VAR_16);
}
