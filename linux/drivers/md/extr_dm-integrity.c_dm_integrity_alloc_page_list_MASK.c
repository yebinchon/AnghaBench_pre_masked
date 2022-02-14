
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; int * page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (struct page_list*) ;
 struct page_list* FUNC_2 (unsigned int,int,int) ;

__attribute__((used)) static struct page_list *FUNC_3(unsigned VAR_2)
{
 struct page_list *VAR_3;
 unsigned VAR_4;

 VAR_3 = FUNC_2(VAR_2 + 1, sizeof(struct page_list), VAR_0 | VAR_1);
 if (!VAR_3)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4].page = FUNC_0(VAR_0);
  if (!VAR_3[VAR_4].page) {
   FUNC_1(VAR_3);
   return ((void*)0);
  }
  if (VAR_4)
   VAR_3[VAR_4 - 1].next = &VAR_3[VAR_4];
 }
 VAR_3[VAR_4].page = ((void*)0);
 VAR_3[VAR_4].next = ((void*)0);

 return VAR_3;
}
