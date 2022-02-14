
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(pte_t VAR_1)
{
 struct page *VAR_2 = FUNC_1(VAR_1);

 if (!FUNC_2(VAR_0, &VAR_2->flags))
  FUNC_0();
}
