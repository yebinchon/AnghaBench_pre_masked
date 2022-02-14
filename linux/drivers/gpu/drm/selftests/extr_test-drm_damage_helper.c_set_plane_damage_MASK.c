
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property_blob {int dummy; } ;
struct drm_plane_state {struct drm_property_blob* fb_damage_clips; } ;



__attribute__((used)) static void FUNC_0(struct drm_plane_state *VAR_0,
        struct drm_property_blob *VAR_1)
{
 VAR_0->fb_damage_clips = VAR_1;
}
