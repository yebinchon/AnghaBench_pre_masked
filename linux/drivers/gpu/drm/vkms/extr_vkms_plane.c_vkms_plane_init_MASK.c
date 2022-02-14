
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;
struct vkms_device {struct drm_device drm; } ;
struct drm_plane_helper_funcs {int dummy; } ;
struct drm_plane {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_plane* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_plane*,struct drm_plane_helper_funcs const*) ;
 int FUNC_3 (struct drm_device*,struct drm_plane*,int,int *,int const*,int,int *,int,int *) ;
 int FUNC_4 (struct drm_plane*) ;
 struct drm_plane* FUNC_5 (int,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 struct drm_plane_helper_funcs VAR_6 ;

struct drm_plane *FUNC_6(struct vkms_device *VAR_7,
      enum drm_plane_type VAR_8, int VAR_9)
{
 struct drm_device *VAR_10 = &VAR_7->drm;
 const struct drm_plane_helper_funcs *VAR_11;
 struct drm_plane *VAR_12;
 const u32 *VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return FUNC_1(-VAR_1);

 if (VAR_8 == VAR_0) {
  VAR_13 = VAR_3;
  VAR_15 = FUNC_0(VAR_3);
  VAR_11 = &VAR_6;
 } else {
  VAR_13 = VAR_4;
  VAR_15 = FUNC_0(VAR_4);
  VAR_11 = &VAR_6;
 }

 VAR_14 = FUNC_3(VAR_10, VAR_12, 1 << VAR_9,
           &VAR_5,
           VAR_13, VAR_15,
           ((void*)0), VAR_8, ((void*)0));
 if (VAR_14) {
  FUNC_4(VAR_12);
  return FUNC_1(VAR_14);
 }

 FUNC_2(VAR_12, VAR_11);

 return VAR_12;
}
