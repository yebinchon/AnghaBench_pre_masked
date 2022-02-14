
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long) ;

void FUNC_2(struct vm_area_struct *VAR_2, unsigned long VAR_3,
       unsigned long VAR_4)

{
 if (VAR_4 - VAR_3 == VAR_1 && !(VAR_3 & ~VAR_0))
  FUNC_1(VAR_2, VAR_3);
 else
  FUNC_0(VAR_2->vm_mm);
}
