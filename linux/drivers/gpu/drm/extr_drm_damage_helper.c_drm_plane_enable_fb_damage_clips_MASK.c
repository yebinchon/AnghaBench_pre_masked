
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int base; struct drm_device* dev; } ;
struct drm_mode_config {int prop_fb_damage_clips; } ;
struct drm_device {struct drm_mode_config mode_config; } ;


 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct drm_plane *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_mode_config *VAR_2 = &VAR_1->mode_config;

 FUNC_0(&VAR_0->base, VAR_2->prop_fb_damage_clips,
       0);
}
