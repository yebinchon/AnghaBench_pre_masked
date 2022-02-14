
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; int vm_flags; } ;
struct page {int flags; } ;
typedef int pte_t ;
struct TYPE_2__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 struct page* FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 unsigned long FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(struct vm_area_struct *VAR_4, unsigned long VAR_5,
        pte_t * VAR_6)
{
 struct page *VAR_7;
 unsigned long VAR_8 = FUNC_10(*VAR_6);
 unsigned long VAR_9;

 if (!FUNC_9(VAR_8))
  return;

 if (VAR_4->vm_mm == VAR_3->active_mm) {
  FUNC_7(VAR_9);
  FUNC_1(VAR_5, VAR_0);
  FUNC_2(*VAR_6);
  FUNC_0();
  FUNC_6(VAR_9);
 }
 VAR_7 = FUNC_8(VAR_8);

 if ((FUNC_11(VAR_1, &VAR_7->flags)) ||
     (VAR_4->vm_flags & VAR_2)) {
  unsigned long VAR_10;
  FUNC_7(VAR_9);
  VAR_10 = (unsigned long)FUNC_4(VAR_7);
  FUNC_3(VAR_10, VAR_4->vm_flags & VAR_2);
  FUNC_5((void *)VAR_10);
  FUNC_6(VAR_9);
 }
}
