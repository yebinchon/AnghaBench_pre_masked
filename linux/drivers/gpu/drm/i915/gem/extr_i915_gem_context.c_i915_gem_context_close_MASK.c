
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_file_private {int vm_idr_lock; int vm_idr; int context_idr_lock; int context_idr; } ;
struct drm_file {struct drm_i915_file_private* driver_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(struct drm_file *VAR_2)
{
 struct drm_i915_file_private *VAR_3 = VAR_2->driver_priv;

 FUNC_1(&VAR_3->context_idr, VAR_0, ((void*)0));
 FUNC_0(&VAR_3->context_idr);
 FUNC_2(&VAR_3->context_idr_lock);

 FUNC_1(&VAR_3->vm_idr, VAR_1, ((void*)0));
 FUNC_0(&VAR_3->vm_idr);
 FUNC_2(&VAR_3->vm_idr_lock);
}
