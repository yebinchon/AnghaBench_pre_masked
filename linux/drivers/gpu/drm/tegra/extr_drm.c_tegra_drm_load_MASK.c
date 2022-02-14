
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int shift; int limit; int domain; } ;
struct tegra_drm {TYPE_4__* domain; TYPE_3__ carveout; int mm; int mm_lock; scalar_t__ hub; struct drm_device* drm; int clients; int clients_lock; } ;
struct host1x_device {int dev; } ;
struct TYPE_7__ {int max_width; int max_height; int allow_fb_modifiers; int normalize_zpos; int num_crtc; int * helper_private; int * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {int irq_enabled; int max_vblank_count; TYPE_2__ mode_config; struct tegra_drm* dev_private; int dev; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int aperture_start; int aperture_end; } ;
struct TYPE_9__ {int pgsize_bitmap; TYPE_1__ geometry; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*,int ) ;
 int FUNC_12 (struct host1x_device*) ;
 int FUNC_13 (struct host1x_device*) ;
 int FUNC_14 (int *,unsigned long,int) ;
 TYPE_4__* FUNC_15 (int *) ;
 int FUNC_16 (TYPE_4__*) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct tegra_drm*) ;
 struct tegra_drm* FUNC_22 (int,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int VAR_3 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (scalar_t__) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (struct drm_device*) ;
 int FUNC_29 (struct drm_device*) ;
 int FUNC_30 (struct drm_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct host1x_device* FUNC_31 (int ) ;

__attribute__((used)) static int FUNC_32(struct drm_device *VAR_6, unsigned long VAR_7)
{
 struct host1x_device *VAR_8 = FUNC_31(VAR_6->dev);
 struct tegra_drm *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_22(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 if (FUNC_17(&VAR_3)) {
  VAR_9->domain = FUNC_15(&VAR_3);
  if (!VAR_9->domain) {
   VAR_10 = -VAR_1;
   goto free;
  }

  VAR_10 = FUNC_18();
  if (VAR_10 < 0)
   goto domain;
 }

 FUNC_24(&VAR_9->clients_lock);
 FUNC_1(&VAR_9->clients);

 VAR_6->dev_private = VAR_9;
 VAR_9->drm = VAR_6;

 FUNC_9(VAR_6);

 VAR_6->mode_config.min_width = 0;
 VAR_6->mode_config.min_height = 0;

 VAR_6->mode_config.max_width = 4096;
 VAR_6->mode_config.max_height = 4096;

 VAR_6->mode_config.allow_fb_modifiers = 1;

 VAR_6->mode_config.normalize_zpos = 1;

 VAR_6->mode_config.funcs = &VAR_4;
 VAR_6->mode_config.helper_private = &VAR_5;

 VAR_10 = FUNC_30(VAR_6);
 if (VAR_10 < 0)
  goto config;

 FUNC_5(VAR_6);

 VAR_10 = FUNC_13(VAR_8);
 if (VAR_10 < 0)
  goto fbdev;

 if (VAR_9->domain) {
  u64 VAR_11, VAR_12, VAR_13, VAR_14;
  u64 VAR_15 = FUNC_3(&VAR_8->dev);
  dma_addr_t VAR_16, VAR_17;
  unsigned long VAR_18;

  VAR_16 = VAR_9->domain->geometry.aperture_start & VAR_15;
  VAR_17 = VAR_9->domain->geometry.aperture_end & VAR_15;

  VAR_13 = VAR_16;
  VAR_14 = VAR_17 - VAR_0;
  VAR_11 = VAR_14 + 1;
  VAR_12 = VAR_17;

  VAR_18 = FUNC_2(VAR_9->domain->pgsize_bitmap);
  FUNC_14(&VAR_9->carveout.domain, 1UL << VAR_18,
     VAR_11 >> VAR_18);

  VAR_9->carveout.shift = FUNC_20(&VAR_9->carveout.domain);
  VAR_9->carveout.limit = VAR_12 >> VAR_9->carveout.shift;

  FUNC_6(&VAR_9->mm, VAR_13, VAR_14 - VAR_13 + 1);
  FUNC_24(&VAR_9->mm_lock);

  FUNC_0("IOMMU apertures:\n");
  FUNC_0("  GEM: %#llx-%#llx\n", VAR_13, VAR_14);
  FUNC_0("  Carveout: %#llx-%#llx\n", VAR_11,
     VAR_12);
 }

 if (VAR_9->hub) {
  VAR_10 = FUNC_27(VAR_9->hub);
  if (VAR_10 < 0)
   goto device;
 }






 VAR_6->irq_enabled = 1;


 VAR_6->max_vblank_count = 0xffffffff;

 VAR_10 = FUNC_11(VAR_6, VAR_6->mode_config.num_crtc);
 if (VAR_10 < 0)
  goto hub;

 FUNC_10(VAR_6);

 VAR_10 = FUNC_29(VAR_6);
 if (VAR_10 < 0)
  goto hub;

 return 0;

hub:
 if (VAR_9->hub)
  FUNC_26(VAR_9->hub);
device:
 FUNC_12(VAR_8);
fbdev:
 FUNC_4(VAR_6);
 FUNC_28(VAR_6);
config:
 FUNC_8(VAR_6);

 if (VAR_9->domain) {
  FUNC_23(&VAR_9->mm_lock);
  FUNC_7(&VAR_9->mm);
  FUNC_25(&VAR_9->carveout.domain);
  FUNC_19();
 }
domain:
 if (VAR_9->domain)
  FUNC_16(VAR_9->domain);
free:
 FUNC_21(VAR_9);
 return VAR_10;
}
