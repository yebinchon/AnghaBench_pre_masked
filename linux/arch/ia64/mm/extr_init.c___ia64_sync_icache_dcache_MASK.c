
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void
FUNC_6 (pte_t VAR_1)
{
 unsigned long VAR_2;
 struct page *VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 VAR_2 = (unsigned long) FUNC_1(VAR_3);

 if (FUNC_5(VAR_0, &VAR_3->flags))
  return;

 FUNC_0(VAR_2, VAR_2 + FUNC_2(VAR_3));
 FUNC_4(VAR_0, &VAR_3->flags);
}
