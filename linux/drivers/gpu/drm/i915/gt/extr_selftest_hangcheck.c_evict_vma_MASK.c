
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_address_space {struct drm_i915_private* i915; } ;
struct evict_vma {int completion; TYPE_2__* vma; } ;
struct drm_mm_node {int dummy; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct TYPE_4__ {struct drm_mm_node node; struct i915_address_space* vm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct i915_address_space*,struct drm_mm_node*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct evict_vma *VAR_1 = VAR_0;
 struct i915_address_space *VAR_2 = VAR_1->vma->vm;
 struct drm_i915_private *VAR_3 = VAR_2->i915;
 struct drm_mm_node VAR_4 = VAR_1->vma->node;
 int VAR_5;

 FUNC_0(&VAR_1->completion);

 FUNC_2(&VAR_3->drm.struct_mutex);
 VAR_5 = FUNC_1(VAR_2, &VAR_4, 0);
 FUNC_3(&VAR_3->drm.struct_mutex);

 return VAR_5;
}
