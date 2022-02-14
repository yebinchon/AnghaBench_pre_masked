
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct page*) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

void FUNC_9(struct page *VAR_2)
{
 if (FUNC_0(VAR_0) || sizeof(phys_addr_t) > sizeof(void *)) {
  void *VAR_3 = FUNC_5(VAR_2);
  FUNC_2(VAR_3);
  FUNC_6(VAR_3);
 } else {
  FUNC_3(FUNC_8(VAR_2) << VAR_1);
 }

}
