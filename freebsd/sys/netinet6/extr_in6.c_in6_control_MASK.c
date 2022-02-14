
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int uint64_t ;
typedef int u_long ;
typedef int time_t ;
struct thread {int td_ucred; } ;
struct socket {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; scalar_t__ sin6_scope_id; int sin6_len; int sin6_addr; } ;
struct nd_prefixctl {int ndpr_plen; int ndpr_raf_onlink; int ndpr_raf_auto; int ndpr_pltime; int ndpr_vltime; struct sockaddr_in6 ndpr_prefix; struct ifnet* ndpr_ifp; } ;
struct nd_prefix {int ndpr_addrcnt; } ;
struct TYPE_18__ {int flags; } ;
struct in6_ndireq {TYPE_4__ ndi; } ;
struct in6_ndifreq32 {int ifindex; } ;
struct in6_ndifreq {int ifindex; } ;
struct in6_ifstat {int dummy; } ;
struct in6_addrlifetime {int ia6t_vltime; int ia6t_expire; int ia6t_pltime; int ia6t_preferred; } ;
struct TYPE_15__ {int ifru_flags6; struct in6_addrlifetime ifru_lifetime; int ifru_icmp6stat; int ifru_stat; } ;
struct in6_ifreq {TYPE_1__ ifr_ifru; struct sockaddr_in6 ifr_addr; struct sockaddr_in6 ifr_dstaddr; } ;
struct in6_ifextra {int icmp6_ifstat; int in6_ifstat; } ;
struct TYPE_19__ {int ifa_carp; } ;
struct in6_ifaddr {int ia6_flags; int ia6_updatetime; TYPE_5__ ia_ifa; struct nd_prefix* ia6_ndpr; struct in6_addrlifetime ia6_lifetime; struct sockaddr_in6 ia_prefixmask; struct sockaddr_in6 ia_dstaddr; struct sockaddr_in6 ia_addr; } ;
struct TYPE_17__ {int ia6t_pltime; int ia6t_vltime; } ;
struct TYPE_16__ {int sin6_addr; } ;
struct in6_aliasreq {int ifra_flags; TYPE_3__ ifra_lifetime; TYPE_2__ ifra_prefixmask; struct sockaddr_in6 ifra_addr; int ifra_vhid; } ;
struct ifnet {int if_flags; int (* if_ioctl ) (struct ifnet*,int,scalar_t__) ;int ** if_afdata; } ;
struct icmp6_ifstat {int dummy; } ;
typedef int pr0 ;
typedef int nd ;
typedef int maxexpire ;
typedef scalar_t__ caddr_t ;
struct TYPE_14__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,struct ifnet*,TYPE_5__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_12__* FUNC_5 (struct ifnet*) ;
 int VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct nd_prefixctl*,int) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_20 ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (int *,struct ifnet*,int *) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (struct in6_ifaddr*,int,int ) ;
 int FUNC_15 (struct ifnet*,struct in6_aliasreq*,struct in6_ifaddr*,int ) ;
 struct in6_ifaddr* FUNC_16 (struct ifnet*,int *) ;
 int FUNC_17 (int ,char*,...) ;
 int FUNC_18 (struct in6_ndireq*,int ,int) ;
 int FUNC_19 (int,scalar_t__) ;
 int FUNC_20 (int const,scalar_t__,struct ifnet*) ;
 int FUNC_21 (struct nd_prefix*) ;
 struct nd_prefix* FUNC_22 (struct nd_prefixctl*) ;
 int FUNC_23 (struct nd_prefix*) ;
 int FUNC_24 (struct nd_prefix*,int *) ;
 int FUNC_25 (struct nd_prefixctl*,int *,struct nd_prefix**) ;
 int FUNC_26 () ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (struct thread*,int ) ;
 int FUNC_29 (struct sockaddr_in6*,int ) ;
 int FUNC_30 (struct sockaddr_in6*) ;
 int FUNC_31 (int,scalar_t__,struct ifnet*) ;
 int FUNC_32 (TYPE_5__*,int) ;
 int FUNC_33 (TYPE_5__*,int ) ;
 int FUNC_34 (TYPE_5__*,int) ;
 int FUNC_35 (struct ifnet*,int,scalar_t__) ;

int
FUNC_36(struct socket *VAR_21, u_long VAR_22, caddr_t VAR_23,
    struct ifnet *VAR_24, struct thread *VAR_25)
{
 struct in6_ifreq *VAR_26 = (struct in6_ifreq *)VAR_23;
 struct in6_ifaddr *VAR_27 = ((void*)0);
 struct in6_aliasreq *VAR_28 = (struct in6_aliasreq *)VAR_23;
 struct sockaddr_in6 *VAR_29;
 int VAR_30 = 0;
 int VAR_31;
 u_long VAR_32 = VAR_22;




 if (VAR_22 == VAR_13)
  VAR_22 = 168;

 switch (VAR_22) {
 case 159:
 case 160:





  return (&FUNC_19 ? FUNC_19(VAR_22, VAR_23) : VAR_4);
 }

 switch (VAR_22) {
 case 169:
 case 165:
  if (VAR_25 != ((void*)0)) {
   VAR_31 = FUNC_28(VAR_25, VAR_14);
   if (VAR_31)
    return (VAR_31);
  }
  return (FUNC_13(VAR_22, VAR_23));
 }

 if (VAR_24 == ((void*)0))
  return (VAR_4);

 switch (VAR_22) {
 case 131:
 case 130:
 case 129:
 case 144:
 case 137:
 case 136:
  if (VAR_25 != ((void*)0)) {
   VAR_31 = FUNC_28(VAR_25, VAR_15);
   if (VAR_31)
    return (VAR_31);
  }

 case 170:
 case 154:
 case 147:
 case 161:
  return (FUNC_20(VAR_22, VAR_23, VAR_24));
 }

 switch (VAR_22) {
 case 132:
 case 163:
 case 167:
 case 166:
 case 143:
 case 151:
  FUNC_17(VAR_10,
      "prefix ioctls are now invalidated. "
      "please use ifconfig.\n");
  return (VAR_4);
 }

 switch (VAR_22) {
 case 128:
  if (VAR_25 != ((void*)0)) {
   VAR_31 = FUNC_28(VAR_25, VAR_16);
   if (VAR_31)
    return (VAR_31);
  }

 case 146:
 case 145:
  return (FUNC_31(VAR_22, VAR_23, VAR_24));
 }
 switch (VAR_22) {
 case 168:
 case 133:
  VAR_29 = &VAR_28->ifra_addr;
  break;
 case 141:
 case 158:
 case 138:
 case 134:
 case 155:
 case 153:
 case 164:
 case 150:
 case 152:
 case 157:
 case 131:
 case 130:
 case 129:
 case 156:
 case 148:
 case 149:
  VAR_29 = &VAR_26->ifr_addr;
  break;
 case 142:
 case 140:
 case 139:
 case 135:







  return (VAR_3);
 default:
  VAR_29 = ((void*)0);
  break;
 }
 if (VAR_29 && VAR_29->sin6_family == VAR_0) {
  if (VAR_29->sin6_scope_id != 0)
   VAR_31 = FUNC_29(VAR_29, 0);
  else
   VAR_31 = FUNC_12(&VAR_29->sin6_addr, VAR_24, ((void*)0));
  if (VAR_31 != 0)
   return (VAR_31);
  if (VAR_25 != ((void*)0) && (VAR_31 = FUNC_27(VAR_25->td_ucred,
      &VAR_29->sin6_addr)) != 0)
   return (VAR_31);
  VAR_27 = FUNC_16(VAR_24, &VAR_29->sin6_addr);
 } else
  VAR_27 = ((void*)0);

 switch (VAR_22) {
 case 141:
 case 138:
 case 134:





  VAR_31 = VAR_3;
  goto out;

 case 164:







  if (VAR_27 == ((void*)0)) {
   VAR_31 = VAR_1;
   goto out;
  }

 case 168:




  if (VAR_28->ifra_addr.sin6_family != VAR_0 ||
      VAR_28->ifra_addr.sin6_len != sizeof(struct sockaddr_in6)) {
   VAR_31 = VAR_2;
   goto out;
  }

  if (VAR_25 != ((void*)0)) {
   VAR_31 = FUNC_28(VAR_25, (VAR_22 == 164) ?
       VAR_18 : VAR_17);
   if (VAR_31)
    goto out;
  }

 case 148:
 case 149:
  if (VAR_24->if_afdata[VAR_0] == ((void*)0)) {
   VAR_31 = VAR_5;
   goto out;
  }
  break;

 case 158:


 case 157:
 case 153:
 case 155:
 case 156:

  if (VAR_27 == ((void*)0)) {
   VAR_31 = VAR_1;
   goto out;
  }
  break;
 }

 switch (VAR_22) {
 case 158:
  VAR_26->ifr_addr = VAR_27->ia_addr;
  if ((VAR_31 = FUNC_30(&VAR_26->ifr_addr)) != 0)
   goto out;
  break;

 case 155:
  if ((VAR_24->if_flags & VAR_8) == 0) {
   VAR_31 = VAR_3;
   goto out;
  }
  VAR_26->ifr_dstaddr = VAR_27->ia_dstaddr;
  if ((VAR_31 = FUNC_30(&VAR_26->ifr_dstaddr)) != 0)
   goto out;
  break;

 case 153:
  VAR_26->ifr_addr = VAR_27->ia_prefixmask;
  break;

 case 157:
  VAR_26->ifr_ifru.ifru_flags6 = VAR_27->ia6_flags;
  break;

 case 148:
  FUNC_0(((struct in6_ifextra *)
      VAR_24->if_afdata[VAR_0])->in6_ifstat,
      &VAR_26->ifr_ifru.ifru_stat,
      sizeof(struct in6_ifstat) / sizeof(uint64_t));
  break;

 case 149:
  FUNC_0(((struct in6_ifextra *)
      VAR_24->if_afdata[VAR_0])->icmp6_ifstat,
      &VAR_26->ifr_ifru.ifru_icmp6stat,
      sizeof(struct icmp6_ifstat) / sizeof(uint64_t));
  break;

 case 156:
  VAR_26->ifr_ifru.ifru_lifetime = VAR_27->ia6_lifetime;
  if (VAR_27->ia6_lifetime.ia6t_vltime != VAR_12) {
   time_t VAR_33;
   struct in6_addrlifetime *VAR_34 =
       &VAR_26->ifr_ifru.ifru_lifetime;





   VAR_33 = (-1) &
       ~((time_t)1 << ((sizeof(VAR_33) * 8) - 1));
   if (VAR_27->ia6_lifetime.ia6t_vltime <
       VAR_33 - VAR_27->ia6_updatetime) {
    VAR_34->ia6t_expire = VAR_27->ia6_updatetime +
        VAR_27->ia6_lifetime.ia6t_vltime;
   } else
    VAR_34->ia6t_expire = VAR_33;
  }
  if (VAR_27->ia6_lifetime.ia6t_pltime != VAR_12) {
   time_t VAR_35;
   struct in6_addrlifetime *VAR_36 =
       &VAR_26->ifr_ifru.ifru_lifetime;





   VAR_35 = (-1) &
       ~((time_t)1 << ((sizeof(VAR_35) * 8) - 1));
   if (VAR_27->ia6_lifetime.ia6t_pltime <
       VAR_35 - VAR_27->ia6_updatetime) {
    VAR_36->ia6t_preferred = VAR_27->ia6_updatetime +
        VAR_27->ia6_lifetime.ia6t_pltime;
   } else
    VAR_36->ia6t_preferred = VAR_35;
  }
  break;

 case 168:
 {
  struct nd_prefixctl VAR_37;
  struct nd_prefix *VAR_38;





  if ((VAR_31 = FUNC_15(VAR_24, VAR_28, VAR_27, 0)) != 0)
   goto out;
  if (VAR_27 != ((void*)0)) {
   if (VAR_27->ia_ifa.ifa_carp)
    FUNC_8)(&VAR_27->ia_ifa, 1);
   FUNC_9(&VAR_27->ia_ifa);
  }
  if ((VAR_27 = FUNC_16(VAR_24, &VAR_28->ifra_addr.sin6_addr))
      == ((void*)0)) {




   break;
  }

  if (VAR_22 == VAR_32 && VAR_28->ifra_vhid > 0) {
   if (&FUNC_7 != ((void*)0))
    VAR_31 = FUNC_7)(&VAR_27->ia_ifa,
        VAR_28->ifra_vhid);
   else
    VAR_31 = VAR_6;
   if (VAR_31)
    goto out;
   else
    VAR_30 = 1;
  }
  FUNC_6(&VAR_37, sizeof(VAR_37));
  VAR_37 = VAR_24;
  VAR_37 = FUNC_10(&VAR_28->ifra_prefixmask.sin6_addr,
      ((void*)0));
  if (VAR_37 == 128) {

   goto aifaddr_out;
  }
  VAR_37 = VAR_28->ifra_addr;

  FUNC_2(&VAR_37,
      &VAR_28->ifra_prefixmask.sin6_addr);
  VAR_37 = 1;
  VAR_37 =
      ((VAR_28->ifra_flags & VAR_9) != 0);
  VAR_37 = VAR_28->ifra_lifetime.ia6t_vltime;
  VAR_37 = VAR_28->ifra_lifetime.ia6t_pltime;


  if ((VAR_38 = FUNC_22(&VAR_37)) == ((void*)0)) {




   if ((VAR_31 = FUNC_25(&VAR_37, ((void*)0), &VAR_38)) != 0) {
    if (VAR_30)
     FUNC_8)(&VAR_27->ia_ifa, 0);
    goto out;
   }
  }


  if (VAR_27->ia6_ndpr == ((void*)0)) {
   VAR_27->ia6_ndpr = VAR_38;
   VAR_38->ndpr_addrcnt++;






   if ((VAR_27->ia6_flags & VAR_9) &&
       VAR_19 && VAR_38->ndpr_addrcnt == 1) {
    int VAR_39;
    if ((VAR_39 = FUNC_14(VAR_27, 1, 0)) != 0) {
     FUNC_17(VAR_10, "in6_control: failed "
         "to create a temporary address, "
         "errno=%d\n", VAR_39);
    }
   }
  }
  FUNC_23(VAR_38);





  FUNC_26();

aifaddr_out:




  if (FUNC_5(VAR_24)->flags & VAR_11) {
   struct in6_ndireq VAR_40;

   FUNC_18(&VAR_40, 0, sizeof(VAR_40));
   VAR_40.ndi.flags = FUNC_5(VAR_24)->flags;
   VAR_40.ndi.flags &= ~VAR_11;
   if (FUNC_20(137, (caddr_t)&VAR_40, VAR_24) < 0)
    FUNC_17(VAR_10, "SIOCAIFADDR_IN6: "
        "SIOCSIFINFO_FLAGS for -ifdisabled "
        "failed.");




  }
  break;
 }

 case 164:
 {
  struct nd_prefix *VAR_41;
  VAR_41 = VAR_27->ia6_ndpr;
  FUNC_11(&VAR_27->ia_ifa);
  if (VAR_41 != ((void*)0) && VAR_41->ndpr_addrcnt == 0) {
   FUNC_3();
   FUNC_24(VAR_41, ((void*)0));
   FUNC_4();
   FUNC_21(VAR_41);
  }
  FUNC_1(VAR_20, VAR_24, &VAR_27->ia_ifa,
      VAR_7);
  break;
 }

 default:
  if (VAR_24->if_ioctl == ((void*)0)) {
   VAR_31 = VAR_4;
   goto out;
  }
  VAR_31 = (*VAR_24->if_ioctl)(VAR_24, VAR_22, VAR_23);
  goto out;
 }

 VAR_31 = 0;
out:
 if (VAR_27 != ((void*)0))
  FUNC_9(&VAR_27->ia_ifa);
 return (VAR_31);
}
