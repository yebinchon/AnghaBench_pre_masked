
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_object_file {int dummy; } ;
struct drm_vmw_surface_arg {int sid; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct ttm_object_file* tfile; } ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_object_file*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct drm_file*) ;

int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 struct drm_vmw_surface_arg *VAR_4 = (struct drm_vmw_surface_arg *)VAR_2;
 struct ttm_object_file *VAR_5 = FUNC_1(VAR_3)->tfile;

 return FUNC_0(VAR_5, VAR_4->sid, VAR_0);
}
