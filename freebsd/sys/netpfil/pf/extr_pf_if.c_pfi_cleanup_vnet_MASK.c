
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfi_kif {TYPE_2__* pfik_ifp; TYPE_1__* pfik_group; } ;
struct TYPE_4__ {int * if_pf_kif; } ;
struct TYPE_3__ {int * ifg_pf_kif; } ;


 struct pfi_kif* FUNC_0 (int *) ;
 int FUNC_1 (struct pfi_kif*,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 struct pfi_kif* FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,struct pfi_kif*) ;
 int * VAR_1 ;
 struct pfi_kif* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct pfi_kif*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_9(void)
{
 struct pfi_kif *VAR_8;

 FUNC_2();

 VAR_1 = ((void*)0);
 while ((VAR_8 = FUNC_3(VAR_5, &VAR_3))) {
  FUNC_4(VAR_5, &VAR_3, VAR_8);
  if (VAR_8->pfik_group)
   VAR_8->pfik_group->ifg_pf_kif = ((void*)0);
  if (VAR_8->pfik_ifp) {
   FUNC_6(VAR_8->pfik_ifp);
   VAR_8->pfik_ifp->if_pf_kif = ((void*)0);
  }
  FUNC_5(VAR_8, VAR_0);
 }

 FUNC_7(&VAR_6);
 while ((VAR_8 = FUNC_0(&VAR_4))) {
  FUNC_1(VAR_8, VAR_7);
  FUNC_5(VAR_8, VAR_0);
 }
 FUNC_8(&VAR_6);

 FUNC_5(VAR_2, VAR_0);
}
