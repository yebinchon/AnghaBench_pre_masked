
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 int FUNC_0 (int) ;
 struct scatterlist* FUNC_1 (struct drm_i915_gem_object*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 struct page* FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct scatterlist*) ;

struct page *
FUNC_5(struct drm_i915_gem_object *VAR_0, unsigned int VAR_1)
{
 struct scatterlist *VAR_2;
 unsigned int VAR_3;

 FUNC_0(!FUNC_2(VAR_0));

 VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 return FUNC_3(FUNC_4(VAR_2), VAR_3);
}
