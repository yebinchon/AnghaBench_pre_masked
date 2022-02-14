
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum fixed_addresses { ____Placeholder_fixed_addresses } fixed_addresses ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int * VAR_2 ;
 int FUNC_6 (struct page*,int ) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;

void *FUNC_13(struct page *VAR_3)
{
 enum fixed_addresses VAR_4;
 unsigned long VAR_5;

 FUNC_10();
 FUNC_9();
 if (!FUNC_2(VAR_3))
  return FUNC_7(VAR_3);

 VAR_4 = FUNC_5(FUNC_4(),
         FUNC_1(FUNC_8(VAR_3)));
 VAR_5 = FUNC_3(VAR_0 + VAR_4);



 FUNC_12(VAR_2 + VAR_4, FUNC_6(VAR_3, VAR_1));

 return (void *)VAR_5;
}
