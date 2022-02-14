
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int VAR_2 ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned long,int ) ;
 struct page* FUNC_8 (unsigned long) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 () ;

void *FUNC_13(unsigned long VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;
 struct page *VAR_7 = FUNC_8(VAR_3);

 FUNC_9();
 FUNC_6();
 if (!FUNC_1(VAR_7))
  return FUNC_5(VAR_7);

 VAR_6 = FUNC_4();
 VAR_5 = VAR_0 + VAR_6 + VAR_1 * FUNC_12();
 VAR_4 = FUNC_2(VAR_5);



 FUNC_11(VAR_5, FUNC_7(VAR_3, VAR_2));

 return (void *)VAR_4;
}
