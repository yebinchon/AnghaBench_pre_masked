
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct page*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 void* FUNC_7 (struct page*) ;
 unsigned long FUNC_8 (struct page*) ;
 int FUNC_9 () ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 () ;
 int * FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 () ;

void *FUNC_15(struct page *VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7, VAR_8;
 int VAR_9;
 pte_t *VAR_10;

 FUNC_11();
 FUNC_9();
 if (!FUNC_0(VAR_5))
  return FUNC_7(VAR_5);

 VAR_9 = FUNC_6();

 VAR_6 = VAR_9 + VAR_1 * FUNC_14();
 VAR_7 = FUNC_1(VAR_0 + VAR_6);
 VAR_8 = (FUNC_8(VAR_5) << VAR_4) | (VAR_3);
 VAR_10 = FUNC_12(FUNC_10(VAR_7), VAR_7);
 FUNC_13(VAR_10, VAR_8);

 FUNC_4(VAR_7);
 FUNC_3(VAR_7, VAR_2);
 FUNC_5(VAR_8);
 FUNC_2();
 return (void *)VAR_7;
}
