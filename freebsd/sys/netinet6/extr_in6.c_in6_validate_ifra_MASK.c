
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int u_char ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; scalar_t__ sin6_scope_id; struct in6_addr sin6_addr; } ;
struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_7__ {scalar_t__ sin6_len; int sin6_addr; } ;
struct in6_ifaddr {TYPE_4__ ia_addr; TYPE_3__ ia_prefixmask; } ;
struct TYPE_6__ {int sin6_len; int sin6_addr; } ;
struct TYPE_5__ {int sin6_len; scalar_t__ sin6_family; int sin6_addr; } ;
struct in6_addrlifetime {scalar_t__ ia6t_pltime; scalar_t__ ia6t_vltime; } ;
struct in6_aliasreq {TYPE_2__ ifra_prefixmask; TYPE_1__ ifra_addr; struct in6_addrlifetime ifra_lifetime; struct sockaddr_in6 ifra_dstaddr; } ;
struct ifnet {int if_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct in6_addr*,struct ifnet*,scalar_t__*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sockaddr_in6*,int ) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_8, struct in6_aliasreq *VAR_9,
    struct in6_ifaddr *VAR_10, int VAR_11)
{
 int VAR_12 = -1;
 struct sockaddr_in6 VAR_13;
 struct in6_addrlifetime *VAR_14;
 char VAR_15[VAR_6];


 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
  return (VAR_3);





 if ((VAR_8->if_flags & VAR_5) != 0 &&
     VAR_9->ifra_dstaddr.sin6_family != VAR_0 &&
     VAR_9->ifra_dstaddr.sin6_family != VAR_1)
  return (VAR_2);




 if (VAR_9->ifra_addr.sin6_len != sizeof(struct sockaddr_in6) ||
     VAR_9->ifra_addr.sin6_family != VAR_0)
  return (VAR_3);





 if (VAR_9->ifra_prefixmask.sin6_len > sizeof(struct sockaddr_in6))
  return (VAR_3);






 if (VAR_10 == ((void*)0) && VAR_9->ifra_prefixmask.sin6_len == 0)
  return (VAR_3);
 if (VAR_9->ifra_prefixmask.sin6_len != 0) {
  VAR_12 = FUNC_0(&VAR_9->ifra_prefixmask.sin6_addr,
      (u_char *)&VAR_9->ifra_prefixmask +
      VAR_9->ifra_prefixmask.sin6_len);
  if (VAR_12 <= 0)
   return (VAR_3);
 } else {




  VAR_12 = FUNC_0(&VAR_10->ia_prefixmask.sin6_addr, ((void*)0));
 }





 VAR_13 = VAR_9->ifra_dstaddr;
 if ((VAR_8->if_flags & (VAR_5|VAR_4)) != 0 &&
     (VAR_13 == VAR_0)) {
  struct in6_addr VAR_16;
  u_int32_t VAR_17;

  VAR_16 = VAR_13;
  if (FUNC_1(&VAR_16, VAR_8, &VAR_17))
   return (VAR_3);

  if (VAR_13 != 0) {
   if (VAR_13 != VAR_17)
    return (VAR_3);
  } else
   VAR_13 = VAR_17;


  if (FUNC_4(&VAR_13, 0))
   return (VAR_3);
 }

 VAR_9->ifra_dstaddr = VAR_13;






 if (VAR_9->ifra_dstaddr.sin6_family == VAR_0) {
  if ((VAR_8->if_flags & (VAR_5|VAR_4)) == 0) {

   FUNC_3((VAR_7, "in6_update_ifa: a destination can "
       "be specified for a p2p or a loopback IF only\n"));
   return (VAR_3);
  }
  if (VAR_12 != 128) {
   FUNC_3((VAR_7, "in6_update_ifa: prefixlen should "
       "be 128 when dstaddr is specified\n"));
   return (VAR_3);
  }
 }

 VAR_14 = &VAR_9->ifra_lifetime;
 if (VAR_14->ia6t_pltime > VAR_14->ia6t_vltime)
  return (VAR_3);
 if (VAR_14->ia6t_vltime == 0) {




  FUNC_3((VAR_7,
      "in6_update_ifa: valid lifetime is 0 for %s\n",
      FUNC_2(VAR_15, &VAR_9->ifra_addr.sin6_addr)));

  if (VAR_10 == ((void*)0))
   return (0);
 }


 if (VAR_10 != ((void*)0) && VAR_9->ifra_prefixmask.sin6_len != 0) {






  if (VAR_10->ia_prefixmask.sin6_len != 0 &&
      FUNC_0(&VAR_10->ia_prefixmask.sin6_addr, ((void*)0)) != VAR_12) {
   FUNC_3((VAR_7, "in6_validate_ifa: the prefix length "
       "of an existing %s address should not be changed\n",
       FUNC_2(VAR_15, &VAR_10->ia_addr.sin6_addr)));

   return (VAR_3);
  }
 }

 return (0);
}
