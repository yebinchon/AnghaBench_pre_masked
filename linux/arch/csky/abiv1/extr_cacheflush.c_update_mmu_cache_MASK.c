
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct vm_area_struct *VAR_2, unsigned long VAR_3,
 pte_t *VAR_4)
{
 unsigned long VAR_5 = FUNC_6(*VAR_4);
 struct page *VAR_6;

 if (!FUNC_5(VAR_5))
  return;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == FUNC_0(0))
  return;

 if (!FUNC_7(VAR_0, &VAR_6->flags))
  FUNC_1();

 if (FUNC_3(VAR_6)) {
  if (VAR_2->vm_flags & VAR_1)
   FUNC_2();
 }
}
