
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct drm_i915_private *VAR_4)
{
 u32 VAR_5;
 int VAR_6, VAR_7;

 if (FUNC_3(VAR_2) & VAR_3) {

  VAR_6 = 24000;
  VAR_7 = 0;
 } else {

  VAR_6 = 19000;
  VAR_7 = 200;
 }

 VAR_5 = FUNC_1(VAR_6 / 1000);
 if (VAR_7) {
  int VAR_8 = 1;

  VAR_5 |= FUNC_0(FUNC_2(VAR_8 * 1000,
          VAR_7) - 1);
  if (FUNC_6(VAR_4) >= VAR_0)
   VAR_5 |= FUNC_5(VAR_8);
 }

 FUNC_4(VAR_1, VAR_5);
 return VAR_6 + VAR_7;
}
