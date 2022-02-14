
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int hints; } ;
struct TYPE_4__ {int tlb_remove_table; int flush_tlb_others; } ;
struct TYPE_5__ {TYPE_1__ mmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;

void FUNC_1(void)
{
 if (!(VAR_2.hints & VAR_0))
  return;

 FUNC_0("Using hypercall for remote TLB flush\n");
 VAR_3.mmu.flush_tlb_others = VAR_1;
 VAR_3.mmu.tlb_remove_table = VAR_4;
}
