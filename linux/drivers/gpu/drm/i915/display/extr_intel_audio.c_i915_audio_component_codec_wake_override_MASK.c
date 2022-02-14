
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 int VAR_1 ;
 unsigned long FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,unsigned long) ;
 struct drm_i915_private* FUNC_5 (struct device*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_2,
           bool VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 if (!FUNC_2(VAR_4, 9))
  return;

 VAR_5 = FUNC_3(VAR_2);





 VAR_6 = FUNC_0(VAR_0);
 VAR_6 &= ~VAR_1;
 FUNC_1(VAR_0, VAR_6);
 FUNC_6(1000, 1500);

 if (VAR_3) {
  VAR_6 = FUNC_0(VAR_0);
  VAR_6 |= VAR_1;
  FUNC_1(VAR_0, VAR_6);
  FUNC_6(1000, 1500);
 }

 FUNC_4(VAR_2, VAR_5);
}
