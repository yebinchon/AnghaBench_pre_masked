
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int pt_frag_refcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (unsigned long*) ;

void FUNC_6(unsigned long *VAR_0)
{
 struct page *VAR_1 = FUNC_5(VAR_0);

 FUNC_0(FUNC_3(&VAR_1->pt_frag_refcount) <= 0);
 if (FUNC_2(&VAR_1->pt_frag_refcount)) {
  FUNC_4(VAR_1);
  FUNC_1(VAR_1);
 }
}
