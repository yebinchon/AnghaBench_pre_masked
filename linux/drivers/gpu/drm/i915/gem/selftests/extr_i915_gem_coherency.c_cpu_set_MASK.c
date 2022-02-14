
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 struct page* FUNC_2 (struct drm_i915_gem_object*,unsigned long) ;
 int FUNC_3 (struct drm_i915_gem_object*,unsigned int*) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(struct drm_i915_gem_object *VAR_3,
     unsigned long VAR_4,
     u32 VAR_5)
{
 unsigned int VAR_6;
 struct page *VAR_7;
 void *VAR_8;
 u32 *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_3, &VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_7 = FUNC_2(VAR_3, VAR_4 >> VAR_2);
 VAR_8 = FUNC_4(VAR_7);
 VAR_9 = VAR_8 + FUNC_6(VAR_4);

 if (VAR_6 & VAR_1)
  FUNC_0(VAR_9, sizeof(*VAR_9));

 *VAR_9 = VAR_5;

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_9, sizeof(*VAR_9));

 FUNC_5(VAR_8);
 FUNC_1(VAR_3);

 return 0;
}
