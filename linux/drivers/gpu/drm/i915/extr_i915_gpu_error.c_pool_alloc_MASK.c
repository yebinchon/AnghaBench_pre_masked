
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {size_t nr; struct page** pages; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 struct page* FUNC_0 (int ) ;
 void* FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct pagevec*) ;

__attribute__((used)) static void *FUNC_3(struct pagevec *VAR_0, gfp_t VAR_1)
{
 struct page *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2 && FUNC_2(VAR_0))
  VAR_2 = VAR_0->pages[--VAR_0->nr];

 return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}
