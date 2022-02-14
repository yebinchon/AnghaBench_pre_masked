
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 scalar_t__ VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct vm_area_struct *VAR_1, unsigned long VAR_2,
        pte_t *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct page *VAR_6;

 VAR_5 = FUNC_6(*VAR_3);
 if (FUNC_7(!FUNC_5(VAR_5)))
  return;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 == FUNC_0(0))
  return;

 VAR_4 = (unsigned long) FUNC_2(VAR_6);

 FUNC_1(VAR_4, VAR_4 + VAR_0);

 FUNC_3((void *) VAR_4);
}
