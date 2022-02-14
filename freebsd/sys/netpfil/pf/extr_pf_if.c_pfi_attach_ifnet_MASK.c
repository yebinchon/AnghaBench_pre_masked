
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {struct ifnet* pfik_ifp; } ;
struct ifnet {struct pfi_kif* if_pf_kif; int if_xname; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*) ;
 struct pfi_kif* FUNC_2 (struct pfi_kif*,int ) ;
 int FUNC_3 (struct pfi_kif*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_1, struct pfi_kif *VAR_2)
{

 FUNC_0();

 VAR_0++;
 VAR_2 = FUNC_2(VAR_2, VAR_1->if_xname);
 FUNC_1(VAR_1);
 VAR_2->pfik_ifp = VAR_1;
 VAR_1->if_pf_kif = VAR_2;
 FUNC_3(VAR_2);
}
