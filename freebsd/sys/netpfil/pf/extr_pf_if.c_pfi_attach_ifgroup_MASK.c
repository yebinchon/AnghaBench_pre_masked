
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {struct ifg_group* pfik_group; } ;
struct ifg_group {struct pfi_kif* ifg_pf_kif; int ifg_group; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct pfi_kif* FUNC_1 (struct pfi_kif*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ifg_group *VAR_1, struct pfi_kif *VAR_2)
{

 FUNC_0();

 VAR_0++;
 VAR_2 = FUNC_1(VAR_2, VAR_1->ifg_group);
 VAR_2->pfik_group = VAR_1;
 VAR_1->ifg_pf_kif = VAR_2;
}
