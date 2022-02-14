
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (struct page*,int ) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long,scalar_t__,int ) ;
 int FUNC_8 () ;

void *FUNC_9(struct page *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7;

 FUNC_6();
 FUNC_5();
 if (!FUNC_1(VAR_4))
  return FUNC_4(VAR_4);

 VAR_6 = FUNC_2();
 VAR_5 = VAR_6 + VAR_0 * FUNC_8();
 VAR_7 = FUNC_0(VAR_5);

 FUNC_7(&VAR_2, VAR_7, VAR_1 + VAR_5,
     FUNC_3(VAR_4, VAR_3));

 return (void *)VAR_7;
}
