
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_plane {int dummy; } ;
struct tegra_plane {int offset; unsigned int index; struct drm_plane base; struct tegra_dc* dc; } ;
struct tegra_dc {int dev; TYPE_1__* soc; } ;
struct drm_device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_2__ {unsigned int num_overlay_formats; int * overlay_formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_plane* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct drm_plane*,int,int) ;
 int FUNC_3 (struct drm_plane*,unsigned int,int ,int) ;
 int FUNC_4 (struct drm_plane*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_plane*,unsigned long,int *,int const*,unsigned int,int *,int,int *) ;
 int FUNC_6 (struct tegra_plane*) ;
 struct tegra_plane* FUNC_7 (int,int ) ;
 int VAR_6 ;
 unsigned long FUNC_8 (struct drm_device*) ;
 int VAR_7 ;

__attribute__((used)) static struct drm_plane *FUNC_9(struct drm_device *VAR_8,
             struct tegra_dc *VAR_9,
             unsigned int VAR_10,
             bool VAR_11)
{
 unsigned long VAR_12 = FUNC_8(VAR_8);
 struct tegra_plane *VAR_13;
 unsigned int VAR_14;
 enum drm_plane_type VAR_15;
 const u32 *VAR_16;
 int VAR_17;

 VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return FUNC_0(-VAR_4);

 VAR_13->offset = 0xa00 + 0x200 * VAR_10;
 VAR_13->index = VAR_10;
 VAR_13->dc = VAR_9;

 VAR_14 = VAR_9->soc->num_overlay_formats;
 VAR_16 = VAR_9->soc->overlay_formats;

 if (!VAR_11)
  VAR_15 = VAR_3;
 else
  VAR_15 = VAR_2;

 VAR_17 = FUNC_5(VAR_8, &VAR_13->base, VAR_12,
           &VAR_6, VAR_16,
           VAR_14, ((void*)0), VAR_15, ((void*)0));
 if (VAR_17 < 0) {
  FUNC_6(VAR_13);
  return FUNC_0(VAR_17);
 }

 FUNC_4(&VAR_13->base, &VAR_7);
 FUNC_3(&VAR_13->base, VAR_13->index, 0, 255);

 VAR_17 = FUNC_2(&VAR_13->base,
       VAR_1,
       VAR_1 |
       VAR_0);
 if (VAR_17 < 0)
  FUNC_1(VAR_9->dev, "failed to create rotation property: %d\n",
   VAR_17);

 return &VAR_13->base;
}
