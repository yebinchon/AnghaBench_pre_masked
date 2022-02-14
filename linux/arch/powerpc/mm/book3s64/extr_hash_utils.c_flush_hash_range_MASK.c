
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppc64_tlb_batch {int ssize; int psize; int * pte; int * vpn; } ;
struct TYPE_2__ {int (* flush_hash_range ) (unsigned long,int) ;} ;


 int FUNC_0 (int ,int ,int ,int ,int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,int) ;
 struct ppc64_tlb_batch* FUNC_2 (int *) ;

void FUNC_3(unsigned long VAR_2, int VAR_3)
{
 if (VAR_0.flush_hash_range)
  VAR_0.flush_hash_range(VAR_2, VAR_3);
 else {
  int VAR_4;
  struct ppc64_tlb_batch *VAR_5 =
   FUNC_2(&VAR_1);

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   FUNC_0(VAR_5->vpn[VAR_4], VAR_5->pte[VAR_4],
     VAR_5->psize, VAR_5->ssize, VAR_3);
 }
}
