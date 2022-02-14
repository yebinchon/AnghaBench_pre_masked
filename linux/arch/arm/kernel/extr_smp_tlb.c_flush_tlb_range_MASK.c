
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
struct tlb_args {unsigned long ta_start; unsigned long ta_end; struct vm_area_struct* ta_vma; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct tlb_args*,int) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(struct vm_area_struct *VAR_1,
                     unsigned long VAR_2, unsigned long VAR_3)
{
 if (FUNC_4()) {
  struct tlb_args VAR_4;
  VAR_4.ta_vma = VAR_1;
  VAR_4.ta_start = VAR_2;
  VAR_4.ta_end = VAR_3;
  FUNC_3(FUNC_2(VAR_1->vm_mm), VAR_0,
     &VAR_4, 1);
 } else
  FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_1->vm_mm);
}
