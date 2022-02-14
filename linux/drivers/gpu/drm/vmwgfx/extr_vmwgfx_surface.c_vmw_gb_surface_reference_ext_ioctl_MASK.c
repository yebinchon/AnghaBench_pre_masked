
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vmw_gb_surface_ref_ext_rep {int dummy; } ;
struct drm_vmw_surface_arg {int dummy; } ;
union drm_vmw_gb_surface_reference_ext_arg {struct drm_vmw_gb_surface_ref_ext_rep rep; struct drm_vmw_surface_arg req; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_vmw_surface_arg*,struct drm_vmw_gb_surface_ref_ext_rep*,struct drm_file*) ;

int FUNC_1(struct drm_device *VAR_0, void *VAR_1,
       struct drm_file *VAR_2)
{
 union drm_vmw_gb_surface_reference_ext_arg *VAR_3 =
     (union drm_vmw_gb_surface_reference_ext_arg *)VAR_1;
 struct drm_vmw_surface_arg *VAR_4 = &VAR_3->req;
 struct drm_vmw_gb_surface_ref_ext_rep *VAR_5 = &VAR_3->rep;

 return FUNC_0(VAR_0, VAR_4, VAR_5, VAR_2);
}
