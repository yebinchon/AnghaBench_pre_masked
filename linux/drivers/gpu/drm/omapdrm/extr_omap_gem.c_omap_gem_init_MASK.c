
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tiler_block {int dummy; } ;
struct omap_drm_usergart_entry {int dma_addr; struct tiler_block* block; } ;
struct omap_drm_usergart {int height; int stride_pfn; struct omap_drm_usergart_entry* entry; void* slot_shift; void* height_shift; } ;
struct omap_drm_private {int has_dmm; struct omap_drm_usergart* usergart; } ;
struct drm_device {int dev; struct omap_drm_private* dev_private; } ;
typedef enum tiler_fmt { ____Placeholder_tiler_fmt } tiler_fmt ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*,int,int,int,int,int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct tiler_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct tiler_block*) ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_4 (int ,char*,int,int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 void* FUNC_7 (int) ;
 struct omap_drm_usergart* FUNC_8 (int,int,int ) ;
 int FUNC_9 (int const,int*,int*) ;
 struct tiler_block* FUNC_10 (int const,int,int,int) ;
 int FUNC_11 (struct tiler_block*) ;
 int FUNC_12 (int const,int ) ;

void FUNC_13(struct drm_device *VAR_7)
{
 struct omap_drm_private *VAR_8 = VAR_7->dev_private;
 struct omap_drm_usergart *VAR_9;
 const enum tiler_fmt VAR_10[] = {
   VAR_6, VAR_4, VAR_5
 };
 int VAR_11, VAR_12;

 if (!FUNC_6()) {

  FUNC_5(VAR_7->dev, "DMM not available, disable DMM support\n");
  return;
 }

 VAR_9 = FUNC_8(3, sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return;


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_10); VAR_11++) {
  u16 VAR_13 = 1, VAR_14 = VAR_3 >> VAR_11;

  FUNC_9(VAR_10[VAR_11], &VAR_14, &VAR_13);




  VAR_9[VAR_11].height = VAR_13;
  VAR_9[VAR_11].height_shift = FUNC_7(VAR_13);
  VAR_9[VAR_11].stride_pfn = FUNC_12(VAR_10[VAR_11], 0) >> VAR_2;
  VAR_9[VAR_11].slot_shift = FUNC_7((VAR_3 / VAR_13) >> VAR_11);
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   struct omap_drm_usergart_entry *VAR_15;
   struct tiler_block *VAR_16;

   VAR_15 = &VAR_9[VAR_11].entry[VAR_12];
   VAR_16 = FUNC_10(VAR_10[VAR_11], VAR_14, VAR_13, VAR_3);
   if (FUNC_2(VAR_16)) {
    FUNC_4(VAR_7->dev,
      "reserve failed: %d, %d, %ld\n",
      VAR_11, VAR_12, FUNC_3(VAR_16));
    return;
   }
   VAR_15->dma_addr = FUNC_11(VAR_16);
   VAR_15->block = VAR_16;

   FUNC_1("%d:%d: %dx%d: dma_addr=%pad stride=%d", VAR_11, VAR_12, VAR_14, VAR_13,
     &VAR_15->dma_addr,
     VAR_9[VAR_11].stride_pfn << VAR_2);
  }
 }

 VAR_8->usergart = VAR_9;
 VAR_8->has_dmm = 1;
}
