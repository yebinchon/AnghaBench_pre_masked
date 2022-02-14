
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct address_space*) ;
 struct address_space* FUNC_2 (struct page*) ;

void FUNC_3(struct page *VAR_0)
{
 struct address_space *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1 || FUNC_1(VAR_1))
  FUNC_0();
}
