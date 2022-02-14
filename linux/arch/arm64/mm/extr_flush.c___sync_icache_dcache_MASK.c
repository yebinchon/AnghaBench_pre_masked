
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(pte_t VAR_1)
{
 struct page *VAR_2 = FUNC_2(VAR_1);

 if (!FUNC_4(VAR_0, &VAR_2->flags))
  FUNC_3(FUNC_0(VAR_2), FUNC_1(VAR_2));
}
