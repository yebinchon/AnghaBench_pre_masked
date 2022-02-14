
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct drm_plane {int dummy; } ;
struct tegra_plane {int offset; struct drm_plane base; scalar_t__ index; struct tegra_dc* dc; } ;
struct tegra_dc {int dev; TYPE_1__* soc; } ;
struct drm_device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;
struct TYPE_2__ {unsigned int num_primary_formats; int * modifiers; int * primary_formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_plane* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct drm_plane*,int,int) ;
 int FUNC_3 (struct drm_plane*,scalar_t__,int ,int) ;
 int FUNC_4 (struct drm_plane*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_plane*,unsigned long,int *,int const*,unsigned int,int const*,int,int *) ;
 int FUNC_6 (struct tegra_plane*) ;
 struct tegra_plane* FUNC_7 (int,int ) ;
 int VAR_5 ;
 unsigned long FUNC_8 (struct drm_device*) ;
 int VAR_6 ;

__attribute__((used)) static struct drm_plane *FUNC_9(struct drm_device *VAR_7,
          struct tegra_dc *VAR_8)
{
 unsigned long VAR_9 = FUNC_8(VAR_7);
 enum drm_plane_type VAR_10 = VAR_2;
 struct tegra_plane *VAR_11;
 unsigned int VAR_12;
 const u64 *VAR_13;
 const u32 *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return FUNC_0(-VAR_3);


 VAR_11->offset = 0xa00;
 VAR_11->index = 0;
 VAR_11->dc = VAR_8;

 VAR_12 = VAR_8->soc->num_primary_formats;
 VAR_14 = VAR_8->soc->primary_formats;
 VAR_13 = VAR_8->soc->modifiers;

 VAR_15 = FUNC_5(VAR_7, &VAR_11->base, VAR_9,
           &VAR_5, VAR_14,
           VAR_12, VAR_13, VAR_10, ((void*)0));
 if (VAR_15 < 0) {
  FUNC_6(VAR_11);
  return FUNC_0(VAR_15);
 }

 FUNC_4(&VAR_11->base, &VAR_6);
 FUNC_3(&VAR_11->base, VAR_11->index, 0, 255);

 VAR_15 = FUNC_2(&VAR_11->base,
       VAR_1,
       VAR_1 |
       VAR_0);
 if (VAR_15 < 0)
  FUNC_1(VAR_8->dev, "failed to create rotation property: %d\n",
   VAR_15);

 return &VAR_11->base;
}
