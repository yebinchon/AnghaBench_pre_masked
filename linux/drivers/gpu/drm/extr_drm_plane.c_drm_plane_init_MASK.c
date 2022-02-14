
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_plane_funcs {int dummy; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,struct drm_plane*,int ,struct drm_plane_funcs const*,int const*,unsigned int,int *,int,int *) ;

int FUNC_1(struct drm_device *VAR_2, struct drm_plane *VAR_3,
     uint32_t VAR_4,
     const struct drm_plane_funcs *VAR_5,
     const uint32_t *VAR_6, unsigned int VAR_7,
     bool VAR_8)
{
 enum drm_plane_type VAR_9;

 VAR_9 = VAR_8 ? VAR_1 : VAR_0;
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7,
     ((void*)0), VAR_9, ((void*)0));
}
