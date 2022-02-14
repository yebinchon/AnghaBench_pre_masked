
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 unsigned long FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int) ;
 void* FUNC_6 (struct page*) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct page*) ;
 void* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;

void FUNC_13(struct address_space *VAR_2, struct page *VAR_3)
{





 if (!FUNC_0(VAR_3)) {
  FUNC_1(FUNC_10(VAR_3), FUNC_11(VAR_3));
 } else {
  unsigned long VAR_4;
  if (FUNC_3()) {
   for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_3); VAR_4++) {
    void *VAR_5 = FUNC_6(VAR_3 + VAR_4);
    FUNC_1(VAR_5, VAR_1);
    FUNC_8(VAR_5);
   }
  } else {
   for (VAR_4 = 0; VAR_4 < FUNC_4(VAR_3); VAR_4++) {
    void *VAR_6 = FUNC_7(VAR_3 + VAR_4);
    if (VAR_6) {
     FUNC_1(VAR_6, VAR_1);
     FUNC_9(VAR_3 + VAR_4);
    }
   }
  }
 }






 if (VAR_2 && FUNC_2())
  FUNC_5(FUNC_12(VAR_3),
    VAR_3->index << VAR_0);
}
