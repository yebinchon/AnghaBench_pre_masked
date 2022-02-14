
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_operation_ctx {int dummy; } ;
struct TYPE_3__ {unsigned int num_pages; struct page** pages; } ;
struct ttm_dma_tt {scalar_t__* dma_address; TYPE_1__ ttm; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct device*,struct page*,int ,size_t,int ) ;
 scalar_t__ FUNC_1 (struct device*,scalar_t__) ;
 int FUNC_2 (struct device*,scalar_t__,size_t,int ) ;
 int FUNC_3 (TYPE_1__*,struct ttm_operation_ctx*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct device *VAR_3, struct ttm_dma_tt *VAR_4,
     struct ttm_operation_ctx *VAR_5)
{
 unsigned VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(&VAR_4->ttm, VAR_5);
 if (VAR_8)
  return VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_4->ttm.num_pages; ++VAR_6) {
  struct page *VAR_9 = VAR_4->ttm.pages[VAR_6];
  size_t VAR_10 = 1;

  for (VAR_7 = VAR_6 + 1; VAR_7 < VAR_4->ttm.num_pages; ++VAR_7) {
   if (++VAR_9 != VAR_4->ttm.pages[VAR_7])
    break;

   ++VAR_10;
  }

  VAR_4->dma_address[VAR_6] = FUNC_0(VAR_3, VAR_4->ttm.pages[VAR_6],
        0, VAR_10 * VAR_2,
        VAR_0);
  if (FUNC_1(VAR_3, VAR_4->dma_address[VAR_6])) {
   while (VAR_6--) {
    FUNC_2(VAR_3, VAR_4->dma_address[VAR_6],
            VAR_2, VAR_0);
    VAR_4->dma_address[VAR_6] = 0;
   }
   FUNC_4(&VAR_4->ttm);
   return -VAR_1;
  }

  for (VAR_7 = 1; VAR_7 < VAR_10; ++VAR_7) {
   VAR_4->dma_address[VAR_6 + 1] = VAR_4->dma_address[VAR_6] + VAR_2;
   ++VAR_6;
  }
 }
 return 0;
}
