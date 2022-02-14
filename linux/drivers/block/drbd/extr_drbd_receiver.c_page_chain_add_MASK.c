
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 struct page* FUNC_1 (struct page*,int *) ;
 int FUNC_2 (struct page*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct page **VAR_0,
  struct page *VAR_1, struct page *VAR_2)
{

 struct page *VAR_3;
 VAR_3 = FUNC_1(VAR_1, ((void*)0));
 FUNC_0(VAR_3 != VAR_2);



 FUNC_2(VAR_2, (unsigned long)*VAR_0);
 *VAR_0 = VAR_1;
}
