
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; int vm_flags; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct vm_area_struct *VAR_2)
{
 pgprot_t VAR_3 = FUNC_1(VAR_2->vm_flags);

 VAR_2->vm_flags |= VAR_0;
 VAR_2->vm_flags &= ~VAR_1;
 VAR_2->vm_page_prot = FUNC_0(VAR_3);
}
