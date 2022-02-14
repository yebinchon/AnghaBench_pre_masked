
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

void FUNC_2(struct vm_area_struct *VAR_1, unsigned long VAR_2,
   unsigned long VAR_3)
{
 FUNC_0(VAR_2, VAR_3);
 if (VAR_1 == ((void*)0) || (VAR_1->vm_flags & VAR_0))
  FUNC_1(VAR_2, VAR_3);
}
