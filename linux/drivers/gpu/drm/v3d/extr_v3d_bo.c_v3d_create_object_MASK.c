
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int * funcs; } ;
struct TYPE_2__ {struct drm_gem_object base; } ;
struct v3d_bo {TYPE_1__ base; int unref_head; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct v3d_bo* FUNC_1 (int,int ) ;
 int VAR_1 ;

struct drm_gem_object *FUNC_2(struct drm_device *VAR_2, size_t VAR_3)
{
 struct v3d_bo *VAR_4;
 struct drm_gem_object *VAR_5;

 if (VAR_3 == 0)
  return ((void*)0);

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = &VAR_4->base.base;

 VAR_5->funcs = &VAR_1;

 FUNC_0(&VAR_4->unref_head);

 return &VAR_4->base.base;
}
