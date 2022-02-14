
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct virtio_gpu_device {struct drm_device* ddev; } ;
struct drm_plane_helper_funcs {int dummy; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
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
 struct drm_plane_helper_funcs VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 struct drm_plane_helper_funcs VAR_7 ;

struct drm_plane *FUNC_6(struct virtio_gpu_device *VAR_8,
     enum drm_plane_type VAR_9,
     int VAR_10)
{
 struct drm_device *VAR_11 = VAR_8->ddev;
 const struct drm_plane_helper_funcs *VAR_12;
 struct drm_plane *VAR_13;
 const uint32_t *VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return FUNC_1(-VAR_1);

 if (VAR_9 == VAR_0) {
  VAR_14 = VAR_3;
  VAR_16 = FUNC_0(VAR_3);
  VAR_12 = &VAR_4;
 } else {
  VAR_14 = VAR_5;
  VAR_16 = FUNC_0(VAR_5);
  VAR_12 = &VAR_7;
 }
 VAR_15 = FUNC_3(VAR_11, VAR_13, 1 << VAR_10,
           &VAR_6,
           VAR_14, VAR_16,
           ((void*)0), VAR_9, ((void*)0));
 if (VAR_15)
  goto err_plane_init;

 FUNC_2(VAR_13, VAR_12);
 return VAR_13;

err_plane_init:
 FUNC_4(VAR_13);
 return FUNC_1(VAR_15);
}
