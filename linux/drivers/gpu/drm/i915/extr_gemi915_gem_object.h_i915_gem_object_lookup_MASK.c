
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int refcount; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_file {int dummy; } ;


 struct drm_i915_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline struct drm_i915_gem_object *
FUNC_4(struct drm_file *VAR_0, u32 VAR_1)
{
 struct drm_i915_gem_object *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && !FUNC_1(&VAR_2->base.refcount))
  VAR_2 = ((void*)0);
 FUNC_3();

 return VAR_2;
}
