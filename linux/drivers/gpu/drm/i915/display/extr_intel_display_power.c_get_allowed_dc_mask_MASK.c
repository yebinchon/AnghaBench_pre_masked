
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int disable_power_well; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private const*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private const*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static u32 FUNC_6(const struct drm_i915_private *VAR_4,
          int VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_2(VAR_4) >= 11) {
  VAR_8 = 2;





  VAR_6 = VAR_0;
 } else if (FUNC_3(VAR_4, 10) || FUNC_4(VAR_4)) {
  VAR_8 = 2;
  VAR_6 = 0;
 } else if (FUNC_5(VAR_4)) {
  VAR_8 = 1;
  VAR_6 = VAR_0;
 } else {
  VAR_8 = 0;
  VAR_6 = 0;
 }

 if (!VAR_3.disable_power_well)
  VAR_8 = 0;

 if (VAR_5 >= 0 && VAR_5 <= VAR_8) {
  VAR_7 = VAR_5;
 } else if (VAR_5 == -1) {
  VAR_7 = VAR_8;
 } else if (VAR_5 > VAR_8 && VAR_5 <= 2) {
  FUNC_0("Adjusting requested max DC state (%d->%d)\n",
         VAR_5, VAR_8);
  VAR_7 = VAR_8;
 } else {
  FUNC_1("Unexpected value for enable_dc (%d)\n", VAR_5);
  VAR_7 = VAR_8;
 }

 if (VAR_7 > 1)
  VAR_6 |= VAR_2;
 if (VAR_7 > 0)
  VAR_6 |= VAR_1;

 FUNC_0("Allowed DC state mask %02x\n", VAR_6);

 return VAR_6;
}
