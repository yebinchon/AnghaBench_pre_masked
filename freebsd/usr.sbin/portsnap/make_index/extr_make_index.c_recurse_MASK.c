
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int recursed; int n_rdep; void* rdep; int n_bdep; void* bdep; int n_fdep; void* fdep; int n_pdep; void* pdep; int n_edep; void* edep; int pkgname; } ;
typedef TYPE_1__ PORT ;


 int FUNC_0 (int,char*,int ) ;
 void* FUNC_1 (void*,int *) ;

__attribute__((used)) static void
FUNC_2(PORT * VAR_0)
{
 switch (VAR_0->recursed) {
 case 0:

  VAR_0->recursed = 1;
  break;
 case 1:

  FUNC_0(1, "Circular dependency loop found: %s"
      " depends upon itself.\n", VAR_0->pkgname);
 case 2:

  return;
 }

 VAR_0->edep = FUNC_1(VAR_0->edep, &VAR_0->n_edep);
 VAR_0->pdep = FUNC_1(VAR_0->pdep, &VAR_0->n_pdep);
 VAR_0->fdep = FUNC_1(VAR_0->fdep, &VAR_0->n_fdep);
 VAR_0->bdep = FUNC_1(VAR_0->bdep, &VAR_0->n_bdep);
 VAR_0->rdep = FUNC_1(VAR_0->rdep, &VAR_0->n_rdep);


 VAR_0->recursed = 2;
}
