
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
struct vmw_sg_table {int mode; size_t num_pages; TYPE_4__* sgt; scalar_t__ num_regions; int pages; int addrs; } ;
struct TYPE_9__ {size_t nents; } ;
struct TYPE_6__ {size_t num_pages; int pages; } ;
struct TYPE_7__ {int dma_address; TYPE_1__ ttm; } ;
struct vmw_ttm_tt {int mapped; size_t sg_alloc_size; struct vmw_sg_table vsgt; TYPE_4__ sgt; TYPE_2__ dma_ttm; struct vmw_private* dev_priv; } ;
struct vmw_private {int map_mode; TYPE_3__* dev; } ;
struct vmw_piter {int dummy; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct ttm_mem_global {int dummy; } ;
struct sg_table {int dummy; } ;
struct scatterlist {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,size_t,int ,unsigned long,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct ttm_mem_global*,size_t,struct ttm_operation_ctx*) ;
 int FUNC_4 (struct ttm_mem_global*,size_t) ;
 size_t FUNC_5 (int) ;
 int FUNC_6 (int) ;


 struct ttm_mem_global* FUNC_7 (struct vmw_private*) ;
 scalar_t__ FUNC_8 (struct vmw_piter*) ;
 scalar_t__ FUNC_9 (struct vmw_piter*) ;
 int FUNC_10 (struct vmw_piter*,struct vmw_sg_table*,int ) ;
 int FUNC_11 (struct vmw_ttm_tt*) ;

__attribute__((used)) static int FUNC_12(struct vmw_ttm_tt *VAR_3)
{
 struct vmw_private *VAR_4 = VAR_3->dev_priv;
 struct ttm_mem_global *VAR_5 = FUNC_7(VAR_4);
 struct vmw_sg_table *VAR_6 = &VAR_3->vsgt;
 struct ttm_operation_ctx VAR_7 = {
  .interruptible = 1,
  .no_wait_gpu = 0
 };
 struct vmw_piter VAR_8;
 dma_addr_t VAR_9;
 int VAR_10 = 0;
 static size_t VAR_11;
 static size_t VAR_12;

 if (VAR_3->mapped)
  return 0;

 VAR_6->mode = VAR_4->map_mode;
 VAR_6->pages = VAR_3->dma_ttm.ttm.pages;
 VAR_6->num_pages = VAR_3->dma_ttm.ttm.num_pages;
 VAR_6->addrs = VAR_3->dma_ttm.dma_address;
 VAR_6->sgt = &VAR_3->sgt;

 switch (VAR_4->map_mode) {
 case 129:
 case 128:
  if (FUNC_6(!VAR_11)) {
   VAR_11 = FUNC_5(sizeof(struct scatterlist));
   VAR_12 = FUNC_5(sizeof(struct sg_table));
  }
  VAR_3->sg_alloc_size = VAR_12 + VAR_11 * VAR_6->num_pages;
  VAR_10 = FUNC_3(VAR_5, VAR_3->sg_alloc_size, &VAR_7);
  if (FUNC_6(VAR_10 != 0))
   return VAR_10;

  VAR_10 = FUNC_0
   (&VAR_3->sgt, VAR_6->pages, VAR_6->num_pages, 0,
    (unsigned long) VAR_6->num_pages << VAR_1,
    FUNC_1(VAR_4->dev->dev),
    VAR_0);
  if (FUNC_6(VAR_10 != 0))
   goto out_sg_alloc_fail;

  if (VAR_6->num_pages > VAR_3->sgt.nents) {
   uint64_t VAR_13 =
    VAR_11 * (VAR_6->num_pages -
         VAR_3->sgt.nents);

   FUNC_4(VAR_5, VAR_13);
   VAR_3->sg_alloc_size -= VAR_13;
  }

  VAR_10 = FUNC_11(VAR_3);
  if (FUNC_6(VAR_10 != 0))
   goto out_map_fail;

  break;
 default:
  break;
 }

 VAR_9 = ~((dma_addr_t) 0);
 VAR_3->vsgt.num_regions = 0;
 for (FUNC_10(&VAR_8, VAR_6, 0); FUNC_9(&VAR_8);) {
  dma_addr_t VAR_14 = FUNC_8(&VAR_8);

  if (VAR_14 != VAR_9 + VAR_2)
   VAR_3->vsgt.num_regions++;
  VAR_9 = VAR_14;
 }

 VAR_3->mapped = 1;
 return 0;

out_map_fail:
 FUNC_2(VAR_3->vsgt.sgt);
 VAR_3->vsgt.sgt = ((void*)0);
out_sg_alloc_fail:
 FUNC_4(VAR_5, VAR_3->sg_alloc_size);
 return VAR_10;
}
