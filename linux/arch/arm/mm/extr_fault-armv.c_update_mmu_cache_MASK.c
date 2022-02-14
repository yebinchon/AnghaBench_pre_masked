
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
struct address_space {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct address_space*,struct page*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct address_space*,struct vm_area_struct*,unsigned long,int *,unsigned long) ;
 struct address_space* FUNC_5 (struct page*) ;
 struct page* FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(struct vm_area_struct *VAR_2, unsigned long VAR_3,
 pte_t *VAR_4)
{
 unsigned long VAR_5 = FUNC_8(*VAR_4);
 struct address_space *VAR_6;
 struct page *VAR_7;

 if (!FUNC_7(VAR_5))
  return;





 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7 == FUNC_0(0))
  return;

 VAR_6 = FUNC_5(VAR_7);
 if (!FUNC_9(VAR_0, &VAR_7->flags))
  FUNC_1(VAR_6, VAR_7);
 if (VAR_6) {
  if (FUNC_3())
   FUNC_4(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
  else if (VAR_2->vm_flags & VAR_1)
   FUNC_2();
 }
}
