
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long,int *,int ,int) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int * VAR_4 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct page*,int ) ;
 void* FUNC_8 (struct page*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;

void *FUNC_13(struct page *VAR_5, pgprot_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 FUNC_10();
 FUNC_9();
 if (!FUNC_1(VAR_5))
  return FUNC_8(VAR_5);

 VAR_9 = FUNC_5();
 VAR_8 = VAR_9 + VAR_2*FUNC_12();
 VAR_7 = FUNC_3(VAR_1 + VAR_8);
 FUNC_2(FUNC_0(VAR_0) && !FUNC_11(*(VAR_4 - VAR_8)));
 FUNC_4(&VAR_3, VAR_7, VAR_4-VAR_8, FUNC_7(VAR_5, VAR_6), 1);
 FUNC_6(((void*)0), VAR_7);

 return (void*) VAR_7;
}
