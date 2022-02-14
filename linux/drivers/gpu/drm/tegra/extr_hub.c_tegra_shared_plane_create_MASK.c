
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct drm_plane {int dummy; } ;
struct TYPE_4__ {int offset; unsigned int index; struct drm_plane base; } ;
struct tegra_shared_plane {TYPE_2__ base; TYPE_1__* wgrp; } ;
struct tegra_drm {struct tegra_display_hub* hub; } ;
struct tegra_display_hub {TYPE_1__* wgrps; } ;
struct tegra_dc {int dev; } ;
struct drm_device {struct tegra_drm* dev_private; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_3__ {int parent; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_plane* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_plane*,int ,int ,int) ;
 int FUNC_3 (struct drm_plane*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_plane*,unsigned int,int *,int const*,unsigned int,int const*,int,int *) ;
 int FUNC_5 (struct tegra_shared_plane*) ;
 struct tegra_shared_plane* FUNC_6 (int,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

struct drm_plane *FUNC_7(struct drm_device *VAR_7,
         struct tegra_dc *VAR_8,
         unsigned int VAR_9,
         unsigned int VAR_10)
{
 enum drm_plane_type VAR_11 = VAR_0;
 struct tegra_drm *VAR_12 = VAR_7->dev_private;
 struct tegra_display_hub *VAR_13 = VAR_12->hub;

 unsigned int VAR_14 = 0x7;
 struct tegra_shared_plane *VAR_15;
 unsigned int VAR_16;
 const u64 *VAR_17;
 struct drm_plane *VAR_18;
 const u32 *VAR_19;
 int VAR_20;

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_2);
 if (!VAR_15)
  return FUNC_1(-VAR_1);

 VAR_15->base.offset = 0x0a00 + 0x0300 * VAR_10;
 VAR_15->base.index = VAR_10;

 VAR_15->wgrp = &VAR_13->wgrps[VAR_9];
 VAR_15->wgrp->parent = VAR_8->dev;

 VAR_18 = &VAR_15->base.base;

 VAR_16 = FUNC_0(VAR_4);
 VAR_19 = VAR_4;
 VAR_17 = VAR_6;

 VAR_20 = FUNC_4(VAR_7, VAR_18, VAR_14,
           &VAR_3, VAR_19,
           VAR_16, VAR_17, VAR_11, ((void*)0));
 if (VAR_20 < 0) {
  FUNC_5(VAR_15);
  return FUNC_1(VAR_20);
 }

 FUNC_3(VAR_18, &VAR_5);
 FUNC_2(VAR_18, 0, 0, 255);

 return VAR_18;
}
