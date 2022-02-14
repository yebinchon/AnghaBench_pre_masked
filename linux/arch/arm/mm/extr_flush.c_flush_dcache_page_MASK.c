
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct address_space*,struct page*) ;
 int FUNC_2 (struct address_space*,struct page*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct page*) ;
 struct address_space* FUNC_9 (struct page*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(struct page *VAR_1)
{
 struct address_space *VAR_2;





 if (VAR_1 == FUNC_0(0))
  return;

 if (!FUNC_6() && FUNC_4()) {
  if (FUNC_11(VAR_0, &VAR_1->flags))
   FUNC_7(VAR_0, &VAR_1->flags);
  return;
 }

 VAR_2 = FUNC_9(VAR_1);

 if (!FUNC_6() &&
     VAR_2 && !FUNC_8(VAR_1))
  FUNC_7(VAR_0, &VAR_1->flags);
 else {
  FUNC_2(VAR_2, VAR_1);
  if (VAR_2 && FUNC_5())
   FUNC_1(VAR_2, VAR_1);
  else if (VAR_2)
   FUNC_3();
  FUNC_10(VAR_0, &VAR_1->flags);
 }
}
