
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct omap_drm_private {struct drm_property* zorder_prop; } ;
struct drm_property {int dummy; } ;
struct drm_plane_state {int zpos; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_2__ {struct omap_drm_private* dev_private; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct drm_plane *VAR_1,
       struct drm_plane_state *VAR_2,
       struct drm_property *VAR_3,
       u64 VAR_4)
{
 struct omap_drm_private *VAR_5 = VAR_1->dev->dev_private;

 if (VAR_3 == VAR_5->zorder_prop)
  VAR_2->zpos = VAR_4;
 else
  return -VAR_0;

 return 0;
}
