
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct list_head {int dummy; } ;
struct i915_gem_context {TYPE_2__* i915; int vm; } ;
struct i915_address_space {int total; } ;
struct drm_i915_gem_object {int st_link; } ;
struct drm_file {int dummy; } ;
struct TYPE_4__ {struct i915_address_space vm; } ;
struct TYPE_5__ {TYPE_1__ ggtt; } ;


 unsigned long long VAR_0 ;
 struct drm_i915_gem_object* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_gem_object*) ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_i915_gem_object*,int ) ;
 int FUNC_3 (struct drm_file*,struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_4 (TYPE_2__*,unsigned long long,int ) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,struct list_head*) ;
 int FUNC_8 (int,unsigned long long) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int ,unsigned long long) ;

__attribute__((used)) static struct drm_i915_gem_object *
FUNC_11(struct i915_gem_context *VAR_3,
     struct drm_file *VAR_4,
     struct list_head *VAR_5)
{
 struct drm_i915_gem_object *VAR_6;
 struct i915_address_space *VAR_7 = VAR_3->vm ?: &VAR_3->i915->ggtt.vm;
 u64 VAR_8;
 int VAR_9;


 FUNC_6(VAR_3->i915);

 VAR_8 = FUNC_8(VAR_7->total / 2, 1024ull * VAR_0 * VAR_1);
 VAR_8 = FUNC_10(VAR_8, VAR_0 * VAR_1);

 VAR_6 = FUNC_4(VAR_3->i915, VAR_0 * VAR_1, VAR_8);
 if (FUNC_1(VAR_6))
  return VAR_6;

 VAR_9 = FUNC_3(VAR_4, VAR_6);
 FUNC_5(VAR_6);
 if (VAR_9)
  return FUNC_0(VAR_9);

 VAR_9 = FUNC_2(VAR_6, VAR_2);
 if (VAR_9) {
  FUNC_9("Failed to fill object with cpu, err=%d\n",
         VAR_9);
  return FUNC_0(VAR_9);
 }

 FUNC_7(&VAR_6->st_link, VAR_5);
 return VAR_6;
}
