
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int sin6_addr; } ;
struct in6_ifaddr {TYPE_2__ ia_addr; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
struct dadq {int * dad_nonce; int dad_ns_ocount; int dad_ns_tcount; TYPE_1__* dad_ifa; } ;
struct TYPE_3__ {struct ifnet* ifa_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ifnet*,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct dadq *VAR_4)
{
 struct in6_ifaddr *VAR_5 = (struct in6_ifaddr *)VAR_4->dad_ifa;
 struct ifnet *VAR_6 = VAR_4->dad_ifa->ifa_ifp;
 int VAR_7;

 VAR_4->dad_ns_tcount++;
 if ((VAR_6->if_flags & VAR_1) == 0) {
  return;
 }
 if ((VAR_6->if_drv_flags & VAR_0) == 0) {
  return;
 }

 VAR_4->dad_ns_ocount++;
 if (VAR_3 != 0) {
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
   VAR_4->dad_nonce[VAR_7] = FUNC_0();
 }
 FUNC_1(VAR_6, ((void*)0), ((void*)0), &VAR_5->ia_addr.sin6_addr,
     (uint8_t *)&VAR_4->dad_nonce[0]);
}
