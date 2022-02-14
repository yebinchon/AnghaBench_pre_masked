
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; int gt; } ;


 int FUNC_0 (char*,unsigned int,char*,long,char*) ;
 unsigned int VAR_0 ;
 long VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (struct drm_i915_private*,unsigned int,long) ;

int FUNC_5(struct drm_i915_private *VAR_2,
      unsigned int VAR_3, long VAR_4)
{

 if (!FUNC_2(&VAR_2->gt))
  return 0;

 FUNC_0("flags=%x (%s), timeout=%ld%s\n",
    VAR_3, VAR_3 & VAR_0 ? "locked" : "unlocked",
    VAR_4, VAR_4 == VAR_1 ? " (forever)" : "");

 VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3 & VAR_0) {
  FUNC_3(&VAR_2->drm.struct_mutex);

  FUNC_1(VAR_2);
 }

 return 0;
}
