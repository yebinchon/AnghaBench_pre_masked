
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_request {struct i915_gem_context* gem_context; } ;
struct i915_gem_context {int remap_slice; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct i915_request*,int) ;

__attribute__((used)) static int FUNC_2(struct i915_request *VAR_1)
{
 struct i915_gem_context *VAR_2 = VAR_1->gem_context;
 int VAR_3, VAR_4;

 if (!VAR_2->remap_slice)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!(VAR_2->remap_slice & FUNC_0(VAR_3)))
   continue;

  VAR_4 = FUNC_1(VAR_1, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_2->remap_slice = 0;
 return 0;
}
