
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct drm_i915_private*,int*,int*,int,int,int const*,int ) ;
 int FUNC_5 (struct drm_i915_private*,int,int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_8, u32 VAR_9,
       const u32 *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0, VAR_14 = 0;

 if (FUNC_0(VAR_8)) {
  VAR_11 = VAR_9 & VAR_1;
  VAR_12 = 0;
 } else {
  VAR_11 = VAR_9 & VAR_0;
  VAR_12 = VAR_9 & VAR_3;
 }

 if (VAR_11) {
  u32 VAR_15;

  VAR_15 = FUNC_1(VAR_4);
  FUNC_2(VAR_4, VAR_15);

  FUNC_4(VAR_8, &VAR_13, &VAR_14,
       VAR_11,
       VAR_15, VAR_10,
       VAR_6);
 }

 if (VAR_12) {
  u32 VAR_16;

  VAR_16 = FUNC_1(VAR_5);
  FUNC_2(VAR_5, VAR_16);

  FUNC_4(VAR_8, &VAR_13, &VAR_14,
       VAR_12,
       VAR_16, VAR_10,
       VAR_7);
 }

 if (VAR_13)
  FUNC_5(VAR_8, VAR_13, VAR_14);

 if (VAR_9 & VAR_2)
  FUNC_3(VAR_8);
}
