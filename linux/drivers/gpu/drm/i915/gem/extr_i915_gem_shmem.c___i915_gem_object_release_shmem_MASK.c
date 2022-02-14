
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_2__ {scalar_t__ madv; int dirty; } ;
struct drm_i915_gem_object {int read_domains; int cache_coherent; TYPE_1__ mm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct sg_table*) ;

void
FUNC_3(struct drm_i915_gem_object *VAR_4,
    struct sg_table *VAR_5,
    bool VAR_6)
{
 FUNC_0(VAR_4->mm.madv == VAR_3);

 if (VAR_4->mm.madv == VAR_2)
  VAR_4->mm.dirty = 0;

 if (VAR_6 &&
     (VAR_4->read_domains & VAR_1) == 0 &&
     !(VAR_4->cache_coherent & VAR_0))
  FUNC_2(VAR_5);

 FUNC_1(VAR_4);
}
