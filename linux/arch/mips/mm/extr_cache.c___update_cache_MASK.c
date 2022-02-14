
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (struct page*) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 int VAR_1 ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 struct page* FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (int ) ;
 unsigned long FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

void FUNC_13(unsigned long VAR_2, pte_t VAR_3)
{
 struct page *VAR_4;
 unsigned long VAR_5, VAR_6;
 int VAR_7 = !FUNC_10(VAR_3) && !VAR_1;

 VAR_5 = FUNC_11(VAR_3);
 if (FUNC_12(!FUNC_9(VAR_5)))
  return;
 VAR_4 = FUNC_8(VAR_5);
 if (FUNC_2(VAR_4)) {
  if (FUNC_1(VAR_4))
   VAR_6 = (unsigned long)FUNC_5(VAR_4);
  else
   VAR_6 = (unsigned long)FUNC_6(VAR_4);

  if (VAR_7 || FUNC_7(VAR_6, VAR_2 & VAR_0))
   FUNC_4(VAR_6);

  if (FUNC_1(VAR_4))
   FUNC_3((void *)VAR_6);

  FUNC_0(VAR_4);
 }
}
