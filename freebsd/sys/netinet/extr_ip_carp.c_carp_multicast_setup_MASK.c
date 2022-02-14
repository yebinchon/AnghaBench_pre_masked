
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_moptions {int imo_multicast_vif; int imo_multicast_loop; void* imo_multicast_ttl; struct ifnet* imo_multicast_ifp; int imo_head; } ;
struct ip6_moptions {int im6o_head; struct ifnet* im6o_multicast_ifp; void* im6o_multicast_hlim; } ;
struct in_mfilter {int imf_inm; } ;
struct in_addr {void* s_addr; } ;
struct in6_mfilter {int im6f_in6m; } ;
struct in6_addr {int* s6_addr8; void** s6_addr32; void** s6_addr16; } ;
struct ifnet {int dummy; } ;
struct carp_if {struct ip6_moptions cif_im6o; struct ip_moptions cif_imo; struct ifnet* cif_ifp; } ;
typedef int sa_family_t ;
typedef int in6 ;




 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct in6_addr*,int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ifnet*,struct in6_addr*,int *,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct in6_addr*,struct ifnet*,int *) ;
 int FUNC_6 (struct ifnet*,struct in_addr*,int *,int *) ;
 struct in6_mfilter* FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct in6_mfilter*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct in6_mfilter*) ;
 struct in_mfilter* FUNC_12 (int ,int ,int ) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (struct in_mfilter*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,struct in_mfilter*) ;

__attribute__((used)) static int
FUNC_17(struct carp_if *VAR_3, sa_family_t VAR_4)
{
 struct ifnet *VAR_5 = VAR_3->cif_ifp;
 int VAR_6 = 0;

 switch (VAR_4) {
 }

 return (VAR_6);
}
