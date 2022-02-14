
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int pt_frag_refcount; } ;
struct mm_struct {int page_table_lock; int context; } ;
typedef void pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static pte_t *FUNC_10(struct mm_struct *VAR_4, int VAR_5)
{
 void *VAR_6 = ((void*)0);
 struct page *VAR_7;

 if (!VAR_5) {
  VAR_7 = FUNC_1(VAR_0 | VAR_3);
  if (!VAR_7)
   return ((void*)0);
  if (!FUNC_5(VAR_7)) {
   FUNC_0(VAR_7);
   return ((void*)0);
  }
 } else {
  VAR_7 = FUNC_1(VAR_0);
  if (!VAR_7)
   return ((void*)0);
 }

 FUNC_2(&VAR_7->pt_frag_refcount, 1);

 VAR_6 = FUNC_4(VAR_7);




 if (VAR_1 == 1)
  return VAR_6;
 FUNC_8(&VAR_4->page_table_lock);





 if (FUNC_3(!FUNC_6(&VAR_4->context))) {
  FUNC_2(&VAR_7->pt_frag_refcount, VAR_1);
  FUNC_7(&VAR_4->context, VAR_6 + VAR_2);
 }
 FUNC_9(&VAR_4->page_table_lock);

 return (pte_t *)VAR_6;
}
