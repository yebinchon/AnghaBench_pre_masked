
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;

__attribute__((used)) static unsigned int FUNC_9(struct drm_i915_private *VAR_2)
{
 static const unsigned int VAR_3[8] = {
  [0] = 3200000,
  [1] = 4000000,
  [2] = 5333333,
  [3] = 4800000,
  [4] = 6400000,
 };
 static const unsigned int VAR_4[8] = {
  [0] = 3200000,
  [1] = 4000000,
  [2] = 5333333,
  [3] = 4800000,
  [4] = 2666667,
 };
 static const unsigned int VAR_5[8] = {
  [0] = 3200000,
  [1] = 4000000,
  [2] = 5333333,
  [3] = 6400000,
  [4] = 3333333,
  [5] = 3566667,
  [6] = 4266667,
 };
 static const unsigned int VAR_6[8] = {
  [0] = 3200000,
  [1] = 4000000,
  [2] = 5333333,
  [3] = 4800000,
 };
 static const unsigned int VAR_7[8] = {
  [0] = 3200000,
  [1] = 4000000,
  [2] = 5333333,
  [3] = 6400000,
  [4] = 2666667,
  [5] = 4266667,
 };
 const unsigned int *VAR_8;
 unsigned int VAR_9;
 u8 VAR_10 = 0;


 if (FUNC_5(VAR_2))
  VAR_8 = VAR_7;
 else if (FUNC_4(VAR_2))
  VAR_8 = VAR_6;
 else if (FUNC_6(VAR_2))
  VAR_8 = VAR_5;
 else if (FUNC_8(VAR_2))
  VAR_8 = VAR_4;
 else if (FUNC_3(VAR_2))
  VAR_8 = VAR_3;
 else
  return 0;

 VAR_10 = FUNC_2(FUNC_8(VAR_2) || FUNC_7(VAR_2) ?
   VAR_1 : VAR_0);

 VAR_9 = VAR_8[VAR_10 & 0x7];
 if (VAR_9 == 0)
  FUNC_1("Bad HPLL VCO (HPLLVCO=0x%02x)\n", VAR_10);
 else
  FUNC_0("HPLL VCO %u kHz\n", VAR_9);

 return VAR_9;
}
