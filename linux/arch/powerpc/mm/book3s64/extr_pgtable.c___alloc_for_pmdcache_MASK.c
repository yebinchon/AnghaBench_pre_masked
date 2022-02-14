
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int pt_frag_refcount; } ;
struct TYPE_2__ {void* pmd_frag; } ;
struct mm_struct {int page_table_lock; TYPE_1__ context; } ;
typedef void pmd_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 struct mm_struct VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static pmd_t *FUNC_8(struct mm_struct *VAR_6)
{
 void *VAR_7 = ((void*)0);
 struct page *VAR_8;
 gfp_t VAR_9 = VAR_0 | VAR_4;

 if (VAR_6 == &VAR_5)
  VAR_9 &= ~VAR_3;
 VAR_8 = FUNC_1(VAR_9);
 if (!VAR_8)
  return ((void*)0);
 if (!FUNC_5(VAR_8)) {
  FUNC_0(VAR_8, 0);
  return ((void*)0);
 }

 FUNC_2(&VAR_8->pt_frag_refcount, 1);

 VAR_7 = FUNC_4(VAR_8);




 if (VAR_1 == 1)
  return VAR_7;

 FUNC_6(&VAR_6->page_table_lock);





 if (FUNC_3(!VAR_6->context.pmd_frag)) {
  FUNC_2(&VAR_8->pt_frag_refcount, VAR_1);
  VAR_6->context.pmd_frag = VAR_7 + VAR_2;
 }
 FUNC_7(&VAR_6->page_table_lock);

 return (pmd_t *)VAR_7;
}
