
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int irq_lock; } ;
struct drm_device {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 struct drm_i915_private* FUNC_8 (struct drm_device*) ;

__attribute__((used)) static void FUNC_9(struct drm_device *VAR_1,
          enum pipe VAR_2,
          bool VAR_3, bool VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_8(VAR_1);
 i915_reg_t VAR_6 = FUNC_3(VAR_2);

 FUNC_6(&VAR_5->irq_lock);

 if (VAR_3) {
  u32 VAR_7 = FUNC_5(VAR_5, VAR_2);

  FUNC_2(VAR_6, VAR_7 | VAR_0);
  FUNC_4(VAR_6);
 } else {
  if (VAR_4 && FUNC_1(VAR_6) & VAR_0)
   FUNC_0("pipe %c underrun\n", FUNC_7(VAR_2));
 }
}
