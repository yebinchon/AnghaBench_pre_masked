
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;

void FUNC_4(struct drm_i915_private *VAR_0,
      enum pipe VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1,
        0)) {
  FUNC_3(VAR_0, VAR_1);
  FUNC_0("PCH transcoder %c FIFO underrun\n",
     FUNC_2(VAR_1));
 }
}
