
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vmw_gb_surface_create_rep {int dummy; } ;
union drm_vmw_gb_surface_create_arg {int req; struct drm_vmw_gb_surface_create_rep rep; } ;
struct drm_vmw_gb_surface_create_ext_req {scalar_t__ must_be_zero; int quality_level; int multisample_pattern; scalar_t__ svga3d_flags_upper_32_bits; int version; int base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,struct drm_vmw_gb_surface_create_ext_req*,struct drm_vmw_gb_surface_create_rep*,struct drm_file*) ;

int FUNC_1(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 union drm_vmw_gb_surface_create_arg *VAR_6 =
     (union drm_vmw_gb_surface_create_arg *)VAR_4;
 struct drm_vmw_gb_surface_create_rep *VAR_7 = &VAR_6->rep;
 struct drm_vmw_gb_surface_create_ext_req VAR_8;

 VAR_8.base = VAR_6->req;
 VAR_8.version = VAR_2;
 VAR_8.svga3d_flags_upper_32_bits = 0;
 VAR_8.multisample_pattern = VAR_0;
 VAR_8.quality_level = VAR_1;
 VAR_8.must_be_zero = 0;

 return FUNC_0(VAR_3, &VAR_8, VAR_7, VAR_5);
}
