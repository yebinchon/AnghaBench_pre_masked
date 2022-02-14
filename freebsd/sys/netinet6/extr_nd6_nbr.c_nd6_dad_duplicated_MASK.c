
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_3__ {struct in6_addr sin6_addr; } ;
struct in6_ifaddr {TYPE_1__ ia_addr; int ia6_flags; } ;
struct ifnet {int if_type; } ;
struct ifaddr {struct ifnet* ifa_ifp; } ;
struct dadq {int dad_na_icount; int dad_ns_lcount; int dad_ns_ocount; int dad_ns_icount; } ;
struct TYPE_4__ {int flags; } ;






 int FUNC_0 (struct in6_addr*,struct in6_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,struct in6_addr*) ;
 int FUNC_5 (char*,struct in6_addr*) ;
 int FUNC_6 (int ,char*,int ,...) ;

__attribute__((used)) static void
FUNC_7(struct ifaddr *VAR_5, struct dadq *VAR_6)
{
 struct in6_ifaddr *VAR_7 = (struct in6_ifaddr *)VAR_5;
 struct ifnet *VAR_8;
 char VAR_9[VAR_2];

 FUNC_6(VAR_3, "%s: DAD detected duplicate IPv6 address %s: "
     "NS in/out/loopback=%d/%d/%d, NA in=%d\n",
     FUNC_3(VAR_5->ifa_ifp), FUNC_5(VAR_9, &VAR_7->ia_addr.sin6_addr),
     VAR_6->dad_ns_icount, VAR_6->dad_ns_ocount, VAR_6->dad_ns_lcount,
     VAR_6->dad_na_icount);

 VAR_7->ia6_flags &= ~VAR_1;
 VAR_7->ia6_flags |= VAR_0;

 VAR_8 = VAR_5->ifa_ifp;
 FUNC_6(VAR_3, "%s: DAD complete for %s - duplicate found\n",
     FUNC_3(VAR_8), FUNC_5(VAR_9, &VAR_7->ia_addr.sin6_addr));
 FUNC_6(VAR_3, "%s: manual intervention required\n",
     FUNC_3(VAR_8));
 if (FUNC_1(&VAR_7->ia_addr.sin6_addr)) {
  struct in6_addr VAR_10;





  switch (VAR_8->if_type) {
  case 130:
  case 131:
  case 129:
  case 128:
   VAR_10 = VAR_7->ia_addr.sin6_addr;
   if (FUNC_4(VAR_8, &VAR_10) == 0 &&
       FUNC_0(&VAR_7->ia_addr.sin6_addr, &VAR_10)) {
    FUNC_2(VAR_8)->flags |= VAR_4;
    FUNC_6(VAR_3, "%s: possible hardware address "
        "duplication detected, disable IPv6\n",
        FUNC_3(VAR_8));
   }
   break;
  }
 }
}
