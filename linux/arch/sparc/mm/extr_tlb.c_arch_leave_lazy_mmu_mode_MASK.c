
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb_batch {scalar_t__ active; scalar_t__ tlb_nr; } ;


 int FUNC_0 () ;
 struct tlb_batch* FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(void)
{
 struct tlb_batch *VAR_1 = FUNC_1(&VAR_0);

 if (VAR_1->tlb_nr)
  FUNC_0();
 VAR_1->active = 0;
}
