
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_file {int object_idr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct drm_i915_gem_object* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static inline struct drm_i915_gem_object *
FUNC_3(struct drm_file *VAR_2, u32 VAR_3)
{



 return FUNC_1(&VAR_2->object_idr, VAR_3);
}
