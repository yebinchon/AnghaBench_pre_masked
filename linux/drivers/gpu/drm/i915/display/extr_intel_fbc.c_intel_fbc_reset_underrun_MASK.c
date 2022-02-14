
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int underrun_detected; char* no_fbc_reason; int lock; int underrun_work; } ;
struct drm_i915_private {TYPE_1__ fbc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_i915_private *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->fbc.underrun_work);

 VAR_1 = FUNC_2(&VAR_0->fbc.lock);
 if (VAR_1)
  return VAR_1;

 if (VAR_0->fbc.underrun_detected) {
  FUNC_0("Re-allowing FBC after fifo underrun\n");
  VAR_0->fbc.no_fbc_reason = "FIFO underrun cleared";
 }

 VAR_0->fbc.underrun_detected = 0;
 FUNC_3(&VAR_0->fbc.lock);

 return 0;
}
