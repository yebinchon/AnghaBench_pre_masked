
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 size_t VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 size_t VAR_1 ;
 struct page** VAR_2 ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,int) ;

void FUNC_6(void *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(FUNC_2(VAR_3));
 struct page *VAR_5 = FUNC_4(VAR_4);

 if (!FUNC_3(VAR_5)) {
  VAR_2[VAR_1] = VAR_5;
  VAR_1++;
  FUNC_1(VAR_1 >= VAR_0);
  FUNC_5(VAR_4, 1);
 }
}
