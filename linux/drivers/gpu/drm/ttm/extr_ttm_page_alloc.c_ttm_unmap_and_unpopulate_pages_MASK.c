
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num_pages; struct page** pages; } ;
struct ttm_dma_tt {TYPE_1__ ttm; int * dma_address; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*,int ,size_t,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct device *VAR_2, struct ttm_dma_tt *VAR_3)
{
 unsigned VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->ttm.num_pages;) {
  struct page *VAR_6 = VAR_3->ttm.pages[VAR_4];
  size_t VAR_7 = 1;

  if (!VAR_3->dma_address[VAR_4] || !VAR_3->ttm.pages[VAR_4]) {
   ++VAR_4;
   continue;
  }

  for (VAR_5 = VAR_4 + 1; VAR_5 < VAR_3->ttm.num_pages; ++VAR_5) {
   if (++VAR_6 != VAR_3->ttm.pages[VAR_5])
    break;

   ++VAR_7;
  }

  FUNC_0(VAR_2, VAR_3->dma_address[VAR_4], VAR_7 * VAR_1,
          VAR_0);

  VAR_4 += VAR_7;
 }
 FUNC_1(&VAR_3->ttm);
}
