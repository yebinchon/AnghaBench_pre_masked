
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_node_head {int dummy; } ;
struct pfi_kif {struct ifnet* pfik_ifp; } ;
struct pf_addr {int v4; int v6; } ;
struct nhop6_basic {struct ifnet* nh_ifp; } ;
struct nhop4_basic {struct ifnet* nh_ifp; } ;
struct ifnet {scalar_t__ if_type; } ;
typedef int sa_family_t ;




 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,int ,int ,int ,struct nhop4_basic*) ;
 int FUNC_2 (int,int *,int ,int ,int ,struct nhop6_basic*) ;
 int FUNC_3 (struct pf_addr*,int,struct pfi_kif*,int) ;
 scalar_t__ FUNC_4 (struct radix_node_head*) ;
 struct radix_node_head* FUNC_5 (int ,int) ;

int
FUNC_6(struct pf_addr *VAR_1, sa_family_t VAR_2, struct pfi_kif *VAR_3,
    int VAR_4)
{






 struct ifnet *VAR_5;
 if (VAR_2 == 128 && FUNC_0(&VAR_1->v6))
  return (1);

 if (VAR_2 != 129 && VAR_2 != 128)
  return (0);


 if (VAR_3 != ((void*)0) && VAR_3->pfik_ifp->if_type == VAR_0)
  return (1);

 VAR_5 = ((void*)0);

 switch (VAR_2) {
 }


 if (VAR_3 == ((void*)0))
  return (1);

 if (VAR_3->pfik_ifp == ((void*)0))
  return (0);


 if (VAR_3->pfik_ifp == VAR_5)
  return (1);
 return (0);
}
