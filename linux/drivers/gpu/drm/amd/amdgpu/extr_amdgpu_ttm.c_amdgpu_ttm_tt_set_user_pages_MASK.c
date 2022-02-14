
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {unsigned long num_pages; struct page** pages; } ;
struct page {int dummy; } ;



void FUNC_0(struct ttm_tt *VAR_0, struct page **VAR_1)
{
 unsigned long VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_pages; ++VAR_2)
  VAR_0->pages[VAR_2] = VAR_1 ? VAR_1[VAR_2] : ((void*)0);
}
