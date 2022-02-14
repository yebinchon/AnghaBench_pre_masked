
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct lima_vm {int dummy; } ;
struct lima_drm_priv {struct lima_vm* vm; } ;
struct lima_bo {int dummy; } ;
struct drm_gem_object {int vma_node; } ;
struct drm_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lima_vm*,struct lima_bo*) ;
 struct lima_bo* FUNC_5 (struct drm_gem_object*) ;
 struct lima_drm_priv* FUNC_6 (struct drm_file*) ;

int FUNC_7(struct drm_file *VAR_1, u32 VAR_2, u32 *VAR_3, u64 *VAR_4)
{
 struct drm_gem_object *VAR_5;
 struct lima_bo *VAR_6;
 struct lima_drm_priv *VAR_7 = FUNC_6(VAR_1);
 struct lima_vm *VAR_8 = VAR_7->vm;
 int VAR_9;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_5);

 *VAR_3 = FUNC_4(VAR_8, VAR_6);

 VAR_9 = FUNC_0(VAR_5);
 if (!VAR_9)
  *VAR_4 = FUNC_3(&VAR_5->vma_node);

 FUNC_2(VAR_5);
 return VAR_9;
}
