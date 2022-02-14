
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb_batch {unsigned long tlb_nr; int * vaddrs; } ;


 int FUNC_0 (unsigned long,int ,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct tlb_batch *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->tlb_nr; VAR_4++)
  FUNC_0(VAR_2, VAR_0->vaddrs[VAR_4], VAR_1, VAR_3);
}
