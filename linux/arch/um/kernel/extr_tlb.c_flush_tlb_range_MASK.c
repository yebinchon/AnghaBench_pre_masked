
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_mm; } ;


 int FUNC_0 (int *,unsigned long,unsigned long,int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;

void FUNC_2(struct vm_area_struct *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2)
{
 if (VAR_0->vm_mm == ((void*)0))
  FUNC_1(VAR_1, VAR_2);
 else FUNC_0(VAR_0->vm_mm, VAR_1, VAR_2, 0);
}
