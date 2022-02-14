
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct address_space {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct address_space*,struct page*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct address_space*,struct page*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (struct address_space*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 struct address_space* FUNC_7 (struct page*) ;
 int FUNC_8 (int ,int *) ;

void FUNC_9(struct page *VAR_2)
{
 struct address_space *VAR_3;





 if (VAR_2 == FUNC_0(0))
  return;

 VAR_3 = FUNC_7(VAR_2);


 if (VAR_3 && !FUNC_5(VAR_3)) {
  FUNC_2(VAR_1, &VAR_2->flags);
 } else {
  FUNC_1(VAR_3, VAR_2);
  if (VAR_3) {
   unsigned long VAR_4 = (unsigned long)FUNC_6(VAR_2);
   FUNC_3(VAR_3, VAR_2);
   FUNC_4(VAR_4, VAR_4 + VAR_0);
  }
  FUNC_8(VAR_1, &VAR_2->flags);
 }
}
