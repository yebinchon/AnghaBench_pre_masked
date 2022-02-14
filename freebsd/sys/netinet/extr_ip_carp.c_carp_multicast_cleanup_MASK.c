
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_moptions {int imo_head; } ;
struct ip6_moptions {int im6o_head; } ;
struct in_mfilter {int imf_inm; } ;
struct in6_mfilter {int im6f_in6m; } ;
struct carp_if {int cif_naddrs6; int cif_naddrs; struct ip6_moptions cif_im6o; struct ip_moptions cif_imo; } ;
typedef int sa_family_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct in6_mfilter* FUNC_2 (int *) ;
 int FUNC_3 (struct in6_mfilter*) ;
 int FUNC_4 (int *,struct in6_mfilter*) ;
 struct in_mfilter* FUNC_5 (int *) ;
 int FUNC_6 (struct in_mfilter*) ;
 int FUNC_7 (int *,struct in_mfilter*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void
FUNC_9(struct carp_if *VAR_2, sa_family_t VAR_3)
{
 FUNC_8(&VAR_1, VAR_0);

 switch (VAR_3) {
 }
}
