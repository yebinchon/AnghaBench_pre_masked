
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

void FUNC_5(struct vm_area_struct *VAR_1, struct page *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 FUNC_4(VAR_3);
 VAR_4 = (unsigned long)FUNC_1(VAR_2);
 FUNC_0(VAR_4, VAR_1->vm_flags & VAR_0);
 FUNC_2((void *)VAR_4);
 FUNC_3(VAR_3);
}
