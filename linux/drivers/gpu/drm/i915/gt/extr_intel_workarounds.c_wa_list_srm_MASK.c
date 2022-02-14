
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct i915_wa_list {unsigned int count; struct i915_wa* list; } ;
struct i915_wa {int reg; } ;
struct i915_vma {int dummy; } ;
struct i915_request {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void**) ;
 int FUNC_3 (struct i915_vma*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct i915_request*,void**) ;
 void** FUNC_6 (struct i915_request*,int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,void*) ;

__attribute__((used)) static int
FUNC_8(struct i915_request *VAR_2,
     const struct i915_wa_list *VAR_3,
     struct i915_vma *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_2->i915;
 unsigned int VAR_6, VAR_7 = 0;
 const struct i915_wa *VAR_8;
 u32 VAR_9, *VAR_10;

 VAR_9 = VAR_1 | VAR_0;
 if (FUNC_0(VAR_5) >= 8)
  VAR_9++;

 for (VAR_6 = 0, VAR_8 = VAR_3->list; VAR_6 < VAR_3->count; VAR_6++, VAR_8++) {
  if (!FUNC_7(VAR_5, FUNC_4(VAR_8->reg)))
   VAR_7++;
 }

 VAR_10 = FUNC_6(VAR_2, 4 * VAR_7);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 for (VAR_6 = 0, VAR_8 = VAR_3->list; VAR_6 < VAR_3->count; VAR_6++, VAR_8++) {
  u32 VAR_11 = FUNC_4(VAR_8->reg);

  if (FUNC_7(VAR_5, VAR_11))
   continue;

  *VAR_10++ = VAR_9;
  *VAR_10++ = VAR_11;
  *VAR_10++ = FUNC_3(VAR_4) + sizeof(u32) * VAR_6;
  *VAR_10++ = 0;
 }
 FUNC_5(VAR_2, VAR_10);

 return 0;
}
