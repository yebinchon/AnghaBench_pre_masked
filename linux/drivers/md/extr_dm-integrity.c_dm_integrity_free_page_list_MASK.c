
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {scalar_t__ page; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct page_list*) ;

__attribute__((used)) static void FUNC_2(struct page_list *VAR_0)
{
 unsigned VAR_1;

 if (!VAR_0)
  return;
 for (VAR_1 = 0; VAR_0[VAR_1].page; VAR_1++)
  FUNC_0(VAR_0[VAR_1].page);
 FUNC_1(VAR_0);
}
