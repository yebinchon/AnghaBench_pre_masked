
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct page*) ;
 struct address_space* FUNC_5 (struct page*) ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct page *VAR_1)
{
 struct address_space *VAR_2;

 if (VAR_1 == FUNC_0(0))
  return;

 VAR_2 = FUNC_5(VAR_1);

 if (VAR_2 && !FUNC_4(VAR_1))
  FUNC_1(VAR_0, &VAR_1->flags);
 else {
  FUNC_2();
  if (VAR_2)
   FUNC_3();
  FUNC_6(VAR_0, &VAR_1->flags);
 }
}
