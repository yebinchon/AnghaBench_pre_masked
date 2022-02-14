
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbox_private {int ddev; } ;
struct drm_plane_helper_funcs {int dummy; } ;
struct drm_plane_funcs {int dummy; } ;
struct drm_plane {int dummy; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_plane* FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct drm_plane*,struct drm_plane_helper_funcs const*) ;
 int FUNC_3 (int *,struct drm_plane*,unsigned int,struct drm_plane_funcs const*,int const*,int,int *,int,int *) ;
 int FUNC_4 (struct drm_plane*) ;
 struct drm_plane* FUNC_5 (int,int ) ;
 struct drm_plane_helper_funcs VAR_5 ;
 int * VAR_6 ;
 struct drm_plane_funcs VAR_7 ;
 struct drm_plane_helper_funcs VAR_8 ;
 int * VAR_9 ;
 struct drm_plane_funcs VAR_10 ;

__attribute__((used)) static struct drm_plane *FUNC_6(struct vbox_private *VAR_11,
        unsigned int VAR_12,
        enum drm_plane_type VAR_13)
{
 const struct drm_plane_helper_funcs *VAR_14 = ((void*)0);
 const struct drm_plane_funcs *VAR_15;
 struct drm_plane *VAR_16;
 const u32 *VAR_17;
 int VAR_18;
 int VAR_19;

 if (VAR_13 == VAR_1) {
  VAR_15 = &VAR_10;
  VAR_17 = VAR_9;
  VAR_14 = &VAR_8;
  VAR_18 = FUNC_0(VAR_9);
 } else if (VAR_13 == VAR_0) {
  VAR_15 = &VAR_7;
  VAR_17 = VAR_6;
  VAR_14 = &VAR_5;
  VAR_18 = FUNC_0(VAR_6);
 } else {
  return FUNC_1(-VAR_2);
 }

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return FUNC_1(-VAR_3);

 VAR_19 = FUNC_3(&VAR_11->ddev, VAR_16, VAR_12,
           VAR_15, VAR_17, VAR_18,
           ((void*)0), VAR_13, ((void*)0));
 if (VAR_19)
  goto free_plane;

 FUNC_2(VAR_16, VAR_14);

 return VAR_16;

free_plane:
 FUNC_4(VAR_16);
 return FUNC_1(-VAR_2);
}
