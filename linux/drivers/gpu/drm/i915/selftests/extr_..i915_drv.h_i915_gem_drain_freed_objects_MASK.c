
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free_work; int free_count; } ;
struct drm_i915_private {TYPE_1__ mm; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct drm_i915_private *VAR_0)
{







 while (FUNC_0(&VAR_0->mm.free_count)) {
  FUNC_1(&VAR_0->mm.free_work);
  FUNC_2();
 }
}
