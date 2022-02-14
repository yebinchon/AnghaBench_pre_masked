
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*,unsigned long,void*,unsigned long) ;
 void* FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,void*,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct page *VAR_1, unsigned long VAR_2,
      void *VAR_3, unsigned long VAR_4)
{
 void *VAR_5 = FUNC_1(VAR_1);
 void *VAR_6 = VAR_5 + (VAR_2 & ~VAR_0);

 FUNC_4();


 FUNC_3(VAR_6, VAR_3, VAR_4);


 FUNC_0(VAR_1, VAR_2, VAR_6, VAR_4);

 FUNC_5();

 FUNC_2(VAR_5);
}
