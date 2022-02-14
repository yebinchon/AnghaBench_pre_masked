
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct exynos_drm_gem {unsigned long dma_attrs; int flags; unsigned int size; int pages; scalar_t__ dma_addr; int cookie; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,unsigned int,scalar_t__*,int,unsigned long) ;
 int FUNC_3 (int ,unsigned int,int ,scalar_t__,unsigned long) ;
 int FUNC_4 (int ,struct sg_table*,int ,scalar_t__,unsigned int,unsigned long) ;
 scalar_t__ FUNC_5 (struct sg_table*,int ,int *,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int,int,int) ;
 int FUNC_8 (struct sg_table*) ;
 int FUNC_9 (struct drm_device*) ;

__attribute__((used)) static int FUNC_10(struct exynos_drm_gem *VAR_12)
{
 struct drm_device *VAR_13 = VAR_12->base.dev;
 unsigned long VAR_14;
 unsigned int VAR_15;
 struct sg_table VAR_16;
 int VAR_17 = -VAR_5;

 if (VAR_12->dma_addr) {
  FUNC_0(FUNC_9(VAR_13), "already allocated.\n");
  return 0;
 }

 VAR_12->dma_attrs = 0;






 if (!(VAR_12->flags & VAR_7))
  VAR_12->dma_attrs |= VAR_0;





 if (VAR_12->flags & VAR_8 ||
   !(VAR_12->flags & VAR_6))
  VAR_14 = VAR_3;
 else
  VAR_14 = VAR_1;

 VAR_12->dma_attrs |= VAR_14;
 VAR_12->dma_attrs |= VAR_2;

 VAR_15 = VAR_12->size >> VAR_10;

 VAR_12->pages = FUNC_7(VAR_15, sizeof(struct page *),
   VAR_9 | VAR_11);
 if (!VAR_12->pages) {
  FUNC_1(FUNC_9(VAR_13), "failed to allocate pages.\n");
  return -VAR_5;
 }

 VAR_12->cookie = FUNC_2(FUNC_9(VAR_13), VAR_12->size,
          &VAR_12->dma_addr, VAR_9,
          VAR_12->dma_attrs);
 if (!VAR_12->cookie) {
  FUNC_1(FUNC_9(VAR_13), "failed to allocate buffer.\n");
  goto err_free;
 }

 VAR_17 = FUNC_4(FUNC_9(VAR_13), &VAR_16, VAR_12->cookie,
        VAR_12->dma_addr, VAR_12->size,
        VAR_12->dma_attrs);
 if (VAR_17 < 0) {
  FUNC_1(FUNC_9(VAR_13), "failed to get sgtable.\n");
  goto err_dma_free;
 }

 if (FUNC_5(&VAR_16, VAR_12->pages, ((void*)0),
          VAR_15)) {
  FUNC_1(FUNC_9(VAR_13), "invalid sgtable.\n");
  VAR_17 = -VAR_4;
  goto err_sgt_free;
 }

 FUNC_8(&VAR_16);

 FUNC_0(FUNC_9(VAR_13), "dma_addr(0x%lx), size(0x%lx)\n",
   (unsigned long)VAR_12->dma_addr, VAR_12->size);

 return 0;

err_sgt_free:
 FUNC_8(&VAR_16);
err_dma_free:
 FUNC_3(FUNC_9(VAR_13), VAR_12->size, VAR_12->cookie,
         VAR_12->dma_addr, VAR_12->dma_attrs);
err_free:
 FUNC_6(VAR_12->pages);

 return VAR_17;
}
