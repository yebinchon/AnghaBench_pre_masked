
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 void* FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,unsigned long) ;
 int FUNC_3 (void*,unsigned long) ;

void FUNC_4(struct page *VAR_1, unsigned long VAR_2,
  void *VAR_3, unsigned long VAR_4)
{
 void *VAR_5 = FUNC_0(VAR_1);
 void *VAR_6 = VAR_5 + (VAR_2 & ~VAR_0);


 FUNC_2(VAR_6, VAR_3, VAR_4);


 FUNC_3(VAR_6, VAR_4);

 FUNC_1(VAR_5);
}
