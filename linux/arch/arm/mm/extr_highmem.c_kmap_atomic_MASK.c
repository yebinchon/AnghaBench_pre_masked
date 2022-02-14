
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 void* FUNC_6 (struct page*) ;
 int VAR_2 ;
 int FUNC_7 (struct page*,int ) ;
 void* FUNC_8 (struct page*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (unsigned int,int ) ;
 int FUNC_13 () ;

void *FUNC_14(struct page *VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5;
 void *VAR_6;
 int VAR_7;

 FUNC_10();
 FUNC_9();
 if (!FUNC_1(VAR_3))
  return FUNC_8(VAR_3);
  VAR_6 = FUNC_6(VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_5();

 VAR_4 = VAR_0 + VAR_7 + VAR_1 * FUNC_13();
 VAR_5 = FUNC_2(VAR_4);
 FUNC_12(VAR_4, FUNC_7(VAR_3, VAR_2));

 return (void *)VAR_5;
}
