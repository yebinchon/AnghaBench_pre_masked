
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int sin6_addr; } ;
struct nd_prefixctl {int ndpr_plen; int ndpr_pltime; int ndpr_vltime; TYPE_2__ ndpr_prefix; struct ifnet* ndpr_ifp; } ;
struct TYPE_12__ {int* s6_addr32; } ;
struct TYPE_13__ {TYPE_3__ sin6_addr; } ;
struct TYPE_10__ {int sin6_addr; } ;
struct in6_ifaddr {TYPE_4__ ia_addr; TYPE_1__ ia_prefixmask; } ;
struct TYPE_16__ {int* s6_addr32; } ;
struct TYPE_15__ {TYPE_7__ sin6_addr; } ;
struct TYPE_14__ {int ia6t_pltime; int ia6t_vltime; } ;
struct in6_aliasreq {TYPE_6__ ifra_addr; int ifra_flags; TYPE_5__ ifra_lifetime; } ;
struct in6_addr {int* s6_addr32; } ;
struct ifnet {int dummy; } ;
struct ifaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*,struct in6_addr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct in6_addr*,int) ;
 int FUNC_5 (struct in6_aliasreq*,int *,struct in6_addr*) ;
 int FUNC_6 (struct ifnet*,struct in6_aliasreq*,int *,int) ;
 scalar_t__ FUNC_7 (struct ifnet*,int ) ;
 struct in6_ifaddr* FUNC_8 (struct ifnet*,TYPE_7__*) ;
 int FUNC_9 (char*,TYPE_7__*) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static struct in6_ifaddr *
FUNC_12(struct nd_prefixctl *VAR_5, int VAR_6)
{
 struct ifnet *VAR_7 = VAR_5->ndpr_ifp;
 struct ifaddr *VAR_8;
 struct in6_aliasreq VAR_9;
 struct in6_ifaddr *VAR_10, *VAR_11;
 int VAR_12, VAR_13;
 struct in6_addr VAR_14;
 int VAR_15 = VAR_5->ndpr_plen;
 int VAR_16;
 char VAR_17[VAR_2];

 FUNC_4(&VAR_14, VAR_15);
 VAR_8 = (struct ifaddr *)FUNC_7(VAR_7, 0);
 if (VAR_8)
  VAR_11 = (struct in6_ifaddr *)VAR_8;
 else
  return ((void*)0);


 VAR_13 = FUNC_3(&VAR_11->ia_prefixmask.sin6_addr, ((void*)0));
 if (VAR_15 != VAR_13) {
  FUNC_2(VAR_8);
  FUNC_11((VAR_4, "in6_ifadd: wrong prefixlen for %s "
      "(prefix=%d ifid=%d)\n",
      FUNC_1(VAR_7), VAR_15, 128 - VAR_13));
  return ((void*)0);
 }


 FUNC_5(&VAR_9, &VAR_5->ndpr_prefix.sin6_addr, &VAR_14);

 FUNC_0(&VAR_9.ifra_addr.sin6_addr, &VAR_14);

 VAR_9.ifra_addr.sin6_addr.s6_addr32[0] |=
     (VAR_11->ia_addr.sin6_addr.s6_addr32[0] & ~VAR_14.s6_addr32[0]);
 VAR_9.ifra_addr.sin6_addr.s6_addr32[1] |=
     (VAR_11->ia_addr.sin6_addr.s6_addr32[1] & ~VAR_14.s6_addr32[1]);
 VAR_9.ifra_addr.sin6_addr.s6_addr32[2] |=
     (VAR_11->ia_addr.sin6_addr.s6_addr32[2] & ~VAR_14.s6_addr32[2]);
 VAR_9.ifra_addr.sin6_addr.s6_addr32[3] |=
     (VAR_11->ia_addr.sin6_addr.s6_addr32[3] & ~VAR_14.s6_addr32[3]);
 FUNC_2(VAR_8);


 VAR_9.ifra_lifetime.ia6t_vltime = VAR_5->ndpr_vltime;
 VAR_9.ifra_lifetime.ia6t_pltime = VAR_5->ndpr_pltime;



 VAR_9.ifra_flags |= VAR_1;






 VAR_8 = (struct ifaddr *)FUNC_8(VAR_7,
     &VAR_9.ifra_addr.sin6_addr);
 if (VAR_8 != ((void*)0)) {
  FUNC_2(VAR_8);

  FUNC_10(VAR_4, "in6_ifadd: %s is already configured\n",
      FUNC_9(VAR_17, &VAR_9.ifra_addr.sin6_addr));
  return (((void*)0));
 }







 VAR_16 = 0;
 if (VAR_6)
  VAR_16 |= VAR_0;
 if ((VAR_12 = FUNC_6(VAR_7, &VAR_9, ((void*)0), VAR_16)) != 0) {
  FUNC_11((VAR_3,
      "in6_ifadd: failed to make ifaddr %s on %s (errno=%d)\n",
      FUNC_9(VAR_17, &VAR_9.ifra_addr.sin6_addr),
      FUNC_1(VAR_7), VAR_12));
  return (((void*)0));
 }

 VAR_10 = FUNC_8(VAR_7, &VAR_9.ifra_addr.sin6_addr);





 return (VAR_10);
}
