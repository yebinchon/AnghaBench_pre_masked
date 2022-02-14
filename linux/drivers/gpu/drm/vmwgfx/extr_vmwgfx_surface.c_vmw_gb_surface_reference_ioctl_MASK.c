
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_vmw_gb_surface_ref_rep {int crep; int creq; } ;
struct drm_vmw_surface_arg {int dummy; } ;
union drm_vmw_gb_surface_reference_arg {struct drm_vmw_gb_surface_ref_rep rep; struct drm_vmw_surface_arg req; } ;
struct TYPE_2__ {int base; } ;
struct drm_vmw_gb_surface_ref_ext_rep {int crep; TYPE_1__ creq; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_device*,struct drm_vmw_surface_arg*,struct drm_vmw_gb_surface_ref_ext_rep*,struct drm_file*) ;

int FUNC_2(struct drm_device *VAR_0, void *VAR_1,
       struct drm_file *VAR_2)
{
 union drm_vmw_gb_surface_reference_arg *VAR_3 =
     (union drm_vmw_gb_surface_reference_arg *)VAR_1;
 struct drm_vmw_surface_arg *VAR_4 = &VAR_3->req;
 struct drm_vmw_gb_surface_ref_rep *VAR_5 = &VAR_3->rep;
 struct drm_vmw_gb_surface_ref_ext_rep VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_4, &VAR_6, VAR_2);

 if (FUNC_0(VAR_7 != 0))
  return VAR_7;

 VAR_5->creq = VAR_6.creq.base;
 VAR_5->crep = VAR_6.crep;

 return VAR_7;
}
