
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 unsigned int FUNC_2 (int *,int) ;
 int FUNC_3 (unsigned long,int) ;
 struct page* FUNC_4 (int) ;
 int FUNC_5 (struct page*) ;

void FUNC_6(void *VAR_1)
{
 unsigned int VAR_2 = (unsigned long) VAR_1 & 3;
 void *VAR_3 = (void *)((unsigned long) VAR_1 ^ VAR_2);
 struct page *VAR_4 = FUNC_4(FUNC_1(VAR_3) >> VAR_0);

 switch (VAR_2) {
 case 0:
  FUNC_3((unsigned long) VAR_3, 2);
  break;
 case 1:
 case 2:
  VAR_2 = FUNC_2(&VAR_4->_refcount, VAR_2 << (4 + 24));
  VAR_2 >>= 24;
  if (VAR_2 != 0)
   break;

 case 3:
  if (VAR_2 & 3)
   FUNC_2(&VAR_4->_refcount, 3 << 24);
  FUNC_5(VAR_4);
  FUNC_0(VAR_4);
  break;
 }
}
