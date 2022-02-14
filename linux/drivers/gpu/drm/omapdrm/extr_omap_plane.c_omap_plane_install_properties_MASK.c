
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_drm_private {scalar_t__ zorder_prop; scalar_t__ has_dmm; } ;
struct drm_mode_object {int dummy; } ;
struct drm_plane {scalar_t__ rotation_property; struct drm_mode_object base; struct drm_device* dev; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct drm_mode_object*,scalar_t__,int) ;
 int FUNC_1 (struct drm_plane*,int,int) ;

void FUNC_2(struct drm_plane *VAR_6,
  struct drm_mode_object *VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct omap_drm_private *VAR_9 = VAR_8->dev_private;

 if (VAR_9->has_dmm) {
  if (!VAR_6->rotation_property)
   FUNC_1(VAR_6,
          VAR_2,
          VAR_2 | VAR_5 |
          VAR_3 | VAR_4 |
          VAR_0 | VAR_1);


  if (VAR_6->rotation_property && VAR_7 != &VAR_6->base)
   FUNC_0(VAR_7, VAR_6->rotation_property,
         VAR_2);
 }

 FUNC_0(VAR_7, VAR_9->zorder_prop, 0);
}
