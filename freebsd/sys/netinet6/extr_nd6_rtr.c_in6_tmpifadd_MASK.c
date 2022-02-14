
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef scalar_t__ time_t ;
struct TYPE_13__ {struct ifnet* ifa_ifp; } ;
struct TYPE_17__ {scalar_t__ ia6t_vltime; scalar_t__ ia6t_pltime; } ;
struct TYPE_21__ {int* s6_addr32; int * s6_addr; } ;
struct TYPE_19__ {TYPE_7__ sin6_addr; } ;
struct TYPE_15__ {int sin6_addr; } ;
struct in6_ifaddr {scalar_t__ ia6_updatetime; TYPE_10__ ia_ifa; TYPE_6__* ia6_ndpr; TYPE_3__ ia6_lifetime; TYPE_5__ ia_addr; TYPE_1__ ia_prefixmask; } ;
struct TYPE_18__ {scalar_t__ ia6t_pltime; scalar_t__ ia6t_vltime; } ;
struct TYPE_14__ {int* s6_addr32; } ;
struct TYPE_16__ {TYPE_12__ sin6_addr; } ;
struct in6_aliasreq {int ifra_flags; TYPE_5__ ifra_addr; TYPE_4__ ifra_lifetime; TYPE_2__ ifra_prefixmask; } ;
struct ifnet {int dummy; } ;
struct TYPE_20__ {int ndpr_addrcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct in6_ifaddr const*) ;
 scalar_t__ FUNC_1 (struct in6_ifaddr const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_7__*,TYPE_12__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (struct ifnet*,int *,int const*,int) ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (struct in6_aliasreq*,TYPE_7__*,int *) ;
 int FUNC_7 (struct ifnet*,struct in6_aliasreq*,int *,int) ;
 struct in6_ifaddr* FUNC_8 (struct ifnet*,TYPE_7__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 scalar_t__ VAR_12 ;

int
FUNC_11(const struct in6_ifaddr *VAR_13, int VAR_14, int VAR_15)
{
 struct ifnet *VAR_16 = VAR_13->ia_ifa.ifa_ifp;
 struct in6_ifaddr *VAR_17;
 struct in6_aliasreq VAR_18;
 int VAR_19;
 int VAR_20 = 3;
 int VAR_21;
 u_int32_t VAR_22[2];
 time_t VAR_23, VAR_24;

 FUNC_6(&VAR_18, &VAR_13->ia_addr.sin6_addr,
     &VAR_13->ia_prefixmask.sin6_addr);

 VAR_18.ifra_addr = VAR_13->ia_addr;

 FUNC_2(&VAR_18.ifra_addr.sin6_addr,
     &VAR_18.ifra_prefixmask.sin6_addr);

  again:
 if (FUNC_4(VAR_16, (u_int8_t *)VAR_22,
     (const u_int8_t *)&VAR_13->ia_addr.sin6_addr.s6_addr[8], VAR_14)) {
  FUNC_9((VAR_6, "in6_tmpifadd: failed to find a good "
      "random IFID\n"));
  return (VAR_1);
 }
 VAR_18.ifra_addr.sin6_addr.s6_addr32[2] |=
     (VAR_22[0] & ~(VAR_18.ifra_prefixmask.sin6_addr.s6_addr32[2]));
 VAR_18.ifra_addr.sin6_addr.s6_addr32[3] |=
     (VAR_22[1] & ~(VAR_18.ifra_prefixmask.sin6_addr.s6_addr32[3]));
 if (FUNC_5(&VAR_18.ifra_addr.sin6_addr) != 0) {
  if (VAR_20-- > 0) {
   VAR_14 = 1;
   goto again;
  }


  FUNC_9((VAR_6, "in6_tmpifadd: failed to "
      "find a unique random IFID\n"));
  return (VAR_0);
 }
 if (VAR_13->ia6_lifetime.ia6t_vltime != VAR_7) {
  VAR_23 = FUNC_1(VAR_13) ? 0 :
      (VAR_13->ia6_lifetime.ia6t_vltime -
      (VAR_12 - VAR_13->ia6_updatetime));
  if (VAR_23 > VAR_11)
   VAR_23 = VAR_11;
 } else
  VAR_23 = VAR_11;
 if (VAR_13->ia6_lifetime.ia6t_pltime != VAR_7) {
  VAR_24 = FUNC_0(VAR_13) ? 0 :
      (VAR_13->ia6_lifetime.ia6t_pltime -
      (VAR_12 - VAR_13->ia6_updatetime));
  if (VAR_24 > VAR_9 - VAR_8){
   VAR_24 = VAR_9 -
       VAR_8;
  }
 } else
  VAR_24 = VAR_9 - VAR_8;
 VAR_18.ifra_lifetime.ia6t_vltime = VAR_23;
 VAR_18.ifra_lifetime.ia6t_pltime = VAR_24;





 if (VAR_18.ifra_lifetime.ia6t_pltime <= VAR_10)
  return (0);



 VAR_18.ifra_flags |= (VAR_3|VAR_4);


 VAR_21 = 0;
 if (VAR_15)
  VAR_21 |= VAR_2;
 if ((VAR_19 = FUNC_7(VAR_16, &VAR_18, ((void*)0), VAR_21)) != 0)
  return (VAR_19);

 VAR_17 = FUNC_8(VAR_16, &VAR_18.ifra_addr.sin6_addr);
 if (VAR_17 == ((void*)0)) {
  FUNC_9((VAR_5,
      "in6_tmpifadd: ifa update succeeded, but we got "
      "no ifaddr\n"));
  return (VAR_1);
 }
 VAR_17->ia6_ndpr = VAR_13->ia6_ndpr;
 VAR_17->ia6_ndpr->ndpr_addrcnt++;
 FUNC_3(&VAR_17->ia_ifa);
 FUNC_10();

 return (0);
}
