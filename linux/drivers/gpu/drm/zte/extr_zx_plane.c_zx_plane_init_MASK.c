
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_plane {int dummy; } ;
struct zx_plane {struct device* dev; struct drm_plane plane; } ;
struct drm_plane_helper_funcs {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_plane*,struct drm_plane_helper_funcs const*) ;
 int FUNC_3 (struct drm_device*,struct drm_plane*,int ,int *,int const*,unsigned int,int *,int,int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 struct drm_plane_helper_funcs VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct zx_plane*) ;
 struct drm_plane_helper_funcs VAR_6 ;

int FUNC_5(struct drm_device *VAR_7, struct zx_plane *VAR_8,
    enum drm_plane_type VAR_9)
{
 const struct drm_plane_helper_funcs *VAR_10;
 struct drm_plane *VAR_11 = &VAR_8->plane;
 struct device *VAR_12 = VAR_8->dev;
 const uint32_t *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 FUNC_4(VAR_8);

 switch (VAR_9) {
 case 128:
  VAR_10 = &VAR_4;
  VAR_13 = VAR_2;
  VAR_14 = FUNC_0(VAR_2);
  break;
 case 129:
  VAR_10 = &VAR_6;
  VAR_13 = VAR_3;
  VAR_14 = FUNC_0(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = FUNC_3(VAR_7, VAR_11, VAR_1,
           &VAR_5, VAR_13, VAR_14,
           ((void*)0), VAR_9, ((void*)0));
 if (VAR_15) {
  FUNC_1(VAR_12, "failed to init universal plane: %d\n", VAR_15);
  return VAR_15;
 }

 FUNC_2(VAR_11, VAR_10);

 return 0;
}
