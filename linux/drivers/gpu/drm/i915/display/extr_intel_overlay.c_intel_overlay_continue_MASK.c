
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_overlay {int flip_addr; int active; struct drm_i915_private* i915; } ;
struct i915_vma {int dummy; } ;
typedef int i915_request ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int) ;
 int* FUNC_5 (struct intel_overlay*,int *) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (struct intel_overlay*,struct i915_vma*) ;
 int FUNC_8 (int*,int*) ;
 int* FUNC_9 (int*,int) ;

__attribute__((used)) static int FUNC_10(struct intel_overlay *VAR_4,
      struct i915_vma *VAR_5,
      bool VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_4->i915;
 struct i915_request *VAR_8;
 u32 VAR_9 = VAR_4->flip_addr;
 u32 VAR_10, *VAR_11;

 FUNC_4(!VAR_4->active);

 if (VAR_6)
  VAR_9 |= VAR_3;


 VAR_10 = FUNC_1(VAR_0);
 if (VAR_10 & (1 << 17))
  FUNC_0("overlay underrun, DOVSTA: %x\n", VAR_10);

 VAR_8 = FUNC_5(VAR_4, ((void*)0));
 if (FUNC_2(VAR_8))
  return FUNC_3(VAR_8);

 VAR_11 = FUNC_9(VAR_8, 2);
 if (FUNC_2(VAR_11)) {
  FUNC_6(VAR_8);
  return FUNC_3(VAR_11);
 }

 *VAR_11++ = VAR_2 | VAR_1;
 *VAR_11++ = VAR_9;
 FUNC_8(VAR_8, VAR_11);

 FUNC_7(VAR_4, VAR_5);
 FUNC_6(VAR_8);

 return 0;
}
