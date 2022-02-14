
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 struct page* FUNC_2 (struct drm_i915_gem_object*,unsigned long) ;
 int FUNC_3 (struct drm_i915_gem_object*,unsigned int*) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(struct drm_i915_gem_object *VAR_2,
     unsigned long VAR_3,
     u32 *VAR_4)
{
 unsigned int VAR_5;
 struct page *VAR_6;
 void *VAR_7;
 u32 *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_2, &VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_6 = FUNC_2(VAR_2, VAR_3 >> VAR_1);
 VAR_7 = FUNC_4(VAR_6);
 VAR_8 = VAR_7 + FUNC_6(VAR_3);

 if (VAR_5 & VAR_0)
  FUNC_0(VAR_8, sizeof(*VAR_8));

 *VAR_4 = *VAR_8;

 FUNC_5(VAR_7);
 FUNC_1(VAR_2);

 return 0;
}
