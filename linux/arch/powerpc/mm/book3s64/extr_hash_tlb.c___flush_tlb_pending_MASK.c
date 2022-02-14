
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc64_tlb_batch {int index; int ssize; int psize; int * pte; int * vpn; int mm; } ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ppc64_tlb_batch *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = VAR_0->index;
 VAR_2 = FUNC_2(VAR_0->mm);
 if (VAR_1 == 1)
  FUNC_0(VAR_0->vpn[0], VAR_0->pte[0],
    VAR_0->psize, VAR_0->ssize, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
 VAR_0->index = 0;
}
