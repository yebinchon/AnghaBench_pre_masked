
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct vm_area_struct *VAR_3, unsigned long VAR_4,
 pte_t *VAR_5)
{
 unsigned long VAR_6 = FUNC_1(*VAR_5) >> VAR_0;
 struct page *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = !FUNC_3(VAR_1, &VAR_7->flags);






 if ((VAR_3->vm_flags & VAR_2) && VAR_8)
  FUNC_2(VAR_7);
}
