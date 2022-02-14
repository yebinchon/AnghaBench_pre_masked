
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

void FUNC_2(struct vm_area_struct *VAR_2, unsigned long VAR_3,
   unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_3;
 unsigned long VAR_6 = VAR_5 + VAR_0;

 FUNC_0(VAR_5, VAR_6);
 if (VAR_2->vm_flags & VAR_1)
  FUNC_1(VAR_5, VAR_6);
}
