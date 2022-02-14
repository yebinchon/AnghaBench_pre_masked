
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int * VAR_2 ;
 struct page* FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 struct page* FUNC_2 (void*) ;

struct page *FUNC_3(void *VAR_3)
{
 unsigned long VAR_4, VAR_5 = (unsigned long)VAR_3;
 pte_t *VAR_6;

 if (VAR_5 < VAR_0)
  return FUNC_2(VAR_3);

 VAR_4 = FUNC_1(VAR_5);
 VAR_6 = VAR_2 - (VAR_4 - VAR_1);
 return FUNC_0(*VAR_6);
}
