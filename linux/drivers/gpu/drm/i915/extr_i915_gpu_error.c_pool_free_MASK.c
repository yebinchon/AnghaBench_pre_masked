
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct pagevec*,struct page*) ;
 scalar_t__ FUNC_2 (struct pagevec*) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(struct pagevec *VAR_0, void *VAR_1)
{
 struct page *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_0))
  FUNC_1(VAR_0, VAR_2);
 else
  FUNC_0(VAR_2);
}
