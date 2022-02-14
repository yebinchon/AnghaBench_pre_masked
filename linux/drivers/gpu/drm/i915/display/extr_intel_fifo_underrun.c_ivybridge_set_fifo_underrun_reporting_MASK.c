
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int) ;
 struct drm_i915_private* FUNC_8 (struct drm_device*) ;

__attribute__((used)) static void FUNC_9(struct drm_device *VAR_2,
        enum pipe VAR_3,
        bool VAR_4, bool VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_8(VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_1, FUNC_1(VAR_3));

  if (!FUNC_6(VAR_2))
   return;

  FUNC_5(VAR_6, VAR_0);
 } else {
  FUNC_4(VAR_6, VAR_0);

  if (VAR_5 &&
      FUNC_2(VAR_1) & FUNC_1(VAR_3)) {
   FUNC_0("uncleared fifo underrun on pipe %c\n",
      FUNC_7(VAR_3));
  }
 }
}
