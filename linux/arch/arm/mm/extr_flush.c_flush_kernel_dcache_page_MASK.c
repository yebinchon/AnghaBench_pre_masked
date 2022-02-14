
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct address_space*) ;
 void* FUNC_5 (struct page*) ;
 struct address_space* FUNC_6 (struct page*) ;

void FUNC_7(struct page *VAR_2)
{
 if (FUNC_3() || FUNC_2()) {
  struct address_space *VAR_3;

  VAR_3 = FUNC_6(VAR_2);

  if (!VAR_3 || FUNC_4(VAR_3)) {
   void *VAR_4;

   VAR_4 = FUNC_5(VAR_2);






   if (!FUNC_0(VAR_0) || VAR_4)
    FUNC_1(VAR_4, VAR_1);
  }
 }
}
