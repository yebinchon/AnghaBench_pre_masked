
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_vm {int dummy; } ;
struct lima_drm_priv {struct lima_vm* vm; } ;
struct lima_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (struct lima_vm*,struct lima_bo*,int) ;
 struct lima_bo* FUNC_1 (struct drm_gem_object*) ;
 struct lima_drm_priv* FUNC_2 (struct drm_file*) ;

int FUNC_3(struct drm_gem_object *VAR_0, struct drm_file *VAR_1)
{
 struct lima_bo *VAR_2 = FUNC_1(VAR_0);
 struct lima_drm_priv *VAR_3 = FUNC_2(VAR_1);
 struct lima_vm *VAR_4 = VAR_3->vm;

 return FUNC_0(VAR_4, VAR_2, 1);
}
