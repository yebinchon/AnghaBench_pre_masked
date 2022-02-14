
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
 int FUNC_2 (struct address_space*,struct page*) ;
 int FUNC_3 (struct vm_area_struct*,struct page*) ;
 struct address_space* FUNC_4 (struct page*) ;
 struct page* FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(struct vm_area_struct *VAR_2,
        unsigned long VAR_3, pte_t *VAR_4)
{
 pte_t VAR_5 = *VAR_4;
 unsigned long VAR_6 = FUNC_7(VAR_5);
 struct page *VAR_7;
 struct address_space *VAR_8;

 FUNC_8(VAR_2, VAR_3, VAR_5);

 if (!FUNC_6(VAR_6))
  return;





 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 == FUNC_0(0))
  return;

 VAR_8 = FUNC_4(VAR_7);
 if (!FUNC_9(VAR_0, &VAR_7->flags))
  FUNC_1(VAR_8, VAR_7);

 if(VAR_8)
 {
  FUNC_2(VAR_8, VAR_7);
  if (VAR_2->vm_flags & VAR_1)
   FUNC_3(VAR_2, VAR_7);
 }
}
