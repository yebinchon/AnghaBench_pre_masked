
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 struct page* FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct page *FUNC_5(pte_t VAR_0)
{
 unsigned long VAR_1 = FUNC_3(VAR_0);
 struct page *VAR_2;

 if (FUNC_4(!FUNC_2(VAR_1)))
  return ((void*)0);
 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_2))
  return ((void*)0);
 return VAR_2;
}
