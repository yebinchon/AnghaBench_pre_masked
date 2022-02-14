
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cxsr; } ;
struct TYPE_4__ {int cxsr; } ;
struct TYPE_6__ {int wm_mutex; TYPE_2__ g4x; TYPE_1__ vlv; } ;
struct drm_i915_private {TYPE_3__ wm; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

bool FUNC_6(struct drm_i915_private *VAR_0, bool VAR_1)
{
 bool VAR_2;

 FUNC_4(&VAR_0->wm.wm_mutex);
 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_2(VAR_0) || FUNC_0(VAR_0))
  VAR_0->wm.vlv.cxsr = VAR_1;
 else if (FUNC_1(VAR_0))
  VAR_0->wm.g4x.cxsr = VAR_1;
 FUNC_5(&VAR_0->wm.wm_mutex);

 return VAR_2;
}
