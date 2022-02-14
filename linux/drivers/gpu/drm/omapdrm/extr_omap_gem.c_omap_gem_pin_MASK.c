
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tiler_block {int dummy; } ;
struct omap_gem_object {scalar_t__ dma_addr_cnt; int flags; int lock; int dma_addr; struct tiler_block* block; int roll; int pages; int height; int width; } ;
struct omap_drm_private {scalar_t__ has_dmm; } ;
struct drm_gem_object {int size; TYPE_1__* dev; } ;
typedef enum tiler_fmt { ____Placeholder_tiler_fmt } tiler_fmt ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; struct omap_drm_private* dev_private; } ;


 int FUNC_0 (struct tiler_block*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tiler_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct tiler_block*) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_gem_object*) ;
 scalar_t__ FUNC_9 (struct omap_gem_object*) ;
 int FUNC_10 (struct tiler_block*,int ,int,int ,int) ;
 int FUNC_11 (struct tiler_block*) ;
 struct tiler_block* FUNC_12 (int) ;
 struct tiler_block* FUNC_13 (int,int ,int ,int ) ;
 int FUNC_14 (struct tiler_block*) ;
 struct omap_gem_object* FUNC_15 (struct drm_gem_object*) ;

int FUNC_16(struct drm_gem_object *VAR_3, dma_addr_t *VAR_4)
{
 struct omap_drm_private *VAR_5 = VAR_3->dev->dev_private;
 struct omap_gem_object *VAR_6 = FUNC_15(VAR_3);
 int VAR_7 = 0;

 FUNC_6(&VAR_6->lock);

 if (!FUNC_9(VAR_6) && VAR_5->has_dmm) {
  if (VAR_6->dma_addr_cnt == 0) {
   u32 VAR_8 = VAR_3->size >> VAR_2;
   enum tiler_fmt VAR_9 = FUNC_5(VAR_6->flags);
   struct tiler_block *VAR_10;

   FUNC_0(VAR_6->block);

   VAR_7 = FUNC_8(VAR_3);
   if (VAR_7)
    goto fail;

   if (VAR_6->flags & VAR_1) {
    VAR_10 = FUNC_13(VAR_9,
      VAR_6->width,
      VAR_6->height, 0);
   } else {
    VAR_10 = FUNC_12(VAR_3->size);
   }

   if (FUNC_2(VAR_10)) {
    VAR_7 = FUNC_3(VAR_10);
    FUNC_4(VAR_3->dev->dev,
     "could not remap: %d (%d)\n", VAR_7, VAR_9);
    goto fail;
   }


   VAR_7 = FUNC_10(VAR_10, VAR_6->pages, VAR_8,
     VAR_6->roll, 1);
   if (VAR_7) {
    FUNC_11(VAR_10);
    FUNC_4(VAR_3->dev->dev,
      "could not pin: %d\n", VAR_7);
    goto fail;
   }

   VAR_6->dma_addr = FUNC_14(VAR_10);
   VAR_6->block = VAR_10;

   FUNC_1("got dma address: %pad", &VAR_6->dma_addr);
  }

  VAR_6->dma_addr_cnt++;

  *VAR_4 = VAR_6->dma_addr;
 } else if (FUNC_9(VAR_6)) {
  *VAR_4 = VAR_6->dma_addr;
 } else {
  VAR_7 = -VAR_0;
  goto fail;
 }

fail:
 FUNC_7(&VAR_6->lock);

 return VAR_7;
}
