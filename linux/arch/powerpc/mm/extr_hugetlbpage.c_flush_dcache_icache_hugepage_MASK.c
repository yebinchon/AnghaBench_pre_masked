
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct page*) ;
 void* FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (struct page*) ;

void FUNC_8(struct page *VAR_0)
{
 int VAR_1;
 void *VAR_2;

 FUNC_0(!FUNC_1(VAR_0));

 for (VAR_1 = 0; VAR_1 < FUNC_4(VAR_0); VAR_1++) {
  if (!FUNC_2(VAR_0)) {
   FUNC_3(FUNC_7(VAR_0+VAR_1));
  } else {
   VAR_2 = FUNC_5(VAR_0+VAR_1);
   FUNC_3(VAR_2);
   FUNC_6(VAR_2);
  }
 }
}
