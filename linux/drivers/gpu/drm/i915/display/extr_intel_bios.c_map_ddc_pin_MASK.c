
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static u8 FUNC_4(struct drm_i915_private *VAR_3, u8 VAR_4)
{
 const u8 *VAR_5;
 int VAR_6;

 if (FUNC_3(VAR_3) >= VAR_0) {
  VAR_5 = VAR_2;
  VAR_6 = FUNC_0(VAR_2);
 } else if (FUNC_2(VAR_3)) {
  VAR_5 = VAR_1;
  VAR_6 = FUNC_0(VAR_1);
 } else {

  return VAR_4;
 }

 if (VAR_4 < VAR_6 && VAR_5[VAR_4] != 0)
  return VAR_5[VAR_4];

 FUNC_1("Ignoring alternate pin: VBT claims DDC pin %d, which is not valid for this platform\n",
        VAR_4);
 return 0;
}
