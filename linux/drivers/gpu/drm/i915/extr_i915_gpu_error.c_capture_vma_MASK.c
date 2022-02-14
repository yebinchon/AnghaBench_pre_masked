
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int active; } ;
struct drm_i915_error_object {int dummy; } ;
struct capture_vma {void** slot; struct capture_vma* next; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct capture_vma*) ;
 struct capture_vma* FUNC_3 (int,int ) ;

__attribute__((used)) static struct capture_vma *
FUNC_4(struct capture_vma *VAR_1,
     struct i915_vma *VAR_2,
     struct drm_i915_error_object **VAR_3)
{
 struct capture_vma *VAR_4;

 *VAR_3 = ((void*)0);
 if (!VAR_2)
  return VAR_1;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return VAR_1;

 if (!FUNC_0(&VAR_2->active)) {
  FUNC_2(VAR_4);
  return VAR_1;
 }

 VAR_4->slot = (void **)VAR_3;
 *VAR_4->slot = FUNC_1(VAR_2);

 VAR_4->next = VAR_1;
 return VAR_4;
}
