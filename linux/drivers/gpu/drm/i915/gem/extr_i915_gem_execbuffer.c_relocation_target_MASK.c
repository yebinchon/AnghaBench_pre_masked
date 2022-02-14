
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ start; } ;
struct i915_vma {TYPE_1__ node; } ;
struct drm_i915_gem_relocation_entry {scalar_t__ delta; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u64
FUNC_1(const struct drm_i915_gem_relocation_entry *VAR_0,
    const struct i915_vma *VAR_1)
{
 return FUNC_0((int)VAR_0->delta + VAR_1->node.start);
}
