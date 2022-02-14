
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psb_gtt {int mmu_gatt_start; int stolen_size; int gtt_pages; int gatt_start; } ;
struct drm_psb_private {int gatt_free_offset; int lock_2d; int irqmask_lock; struct psb_gtt gtt; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct drm_psb_private*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_8)
{
 struct drm_psb_private *VAR_9 = VAR_8->dev_private;
 struct psb_gtt *VAR_10 = &VAR_9->gtt;

 uint32_t VAR_11;

 if (VAR_10->mmu_gatt_start & 0x0FFFFFFF) {
  FUNC_2(VAR_8->dev, "Gatt must be 256M aligned. This is a bug.\n");
  return -VAR_0;
 }

 VAR_11 = (VAR_10->stolen_size >> VAR_1) * 4;
 VAR_11 = (VAR_11 + VAR_2 - 1) >> VAR_1;
 VAR_11 = (VAR_11 < VAR_10->gtt_pages) ? VAR_11 : VAR_10->gtt_pages;

 VAR_9->gatt_free_offset = VAR_10->mmu_gatt_start +
     (VAR_11 << VAR_1) * 1024;

 FUNC_4(&VAR_9->irqmask_lock);
 FUNC_4(&VAR_9->lock_2d);

 FUNC_1(0x00000000, VAR_3);
 FUNC_1(0x00000000, VAR_4);
 FUNC_0(VAR_4);


 FUNC_1((FUNC_0(VAR_5) & ~VAR_7),
     VAR_5);
 FUNC_0(VAR_5);

 FUNC_3(VAR_9);


 FUNC_1(VAR_10->gatt_start, VAR_6);
 FUNC_0(VAR_6);

 return 0;
}
