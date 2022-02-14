
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (void*) ;
 unsigned long FUNC_9 (struct page*) ;
 struct page* FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 unsigned long FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;

void
FUNC_15(struct vm_area_struct * VAR_4, unsigned long VAR_5, pte_t *VAR_6)
{
 unsigned long VAR_7 = FUNC_12(*VAR_6);
 struct page *VAR_8;

 if (!FUNC_11(VAR_7))
  return;

 VAR_8 = FUNC_10(VAR_7);



 FUNC_6(VAR_4, VAR_5);
 if (!FUNC_0(VAR_8) && !FUNC_14(VAR_1, &VAR_8->flags)
     && (VAR_4->vm_flags & VAR_3) != 0) {
  unsigned long VAR_9 = (unsigned long)FUNC_7(VAR_8);
  FUNC_1(VAR_9);
  FUNC_3(VAR_9);
  FUNC_13(VAR_1, &VAR_8->flags);
  FUNC_8((void *)VAR_9);
 }

}
