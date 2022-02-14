
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_11)
{
 u32 VAR_12;






 VAR_12 = FUNC_1(VAR_0);
 VAR_12 &= ~(VAR_4 |
       VAR_7 |
       VAR_10);
 VAR_12 |= VAR_2 | VAR_3;
 VAR_12 |= VAR_5 | VAR_6;
 VAR_12 |= VAR_8 | VAR_9;




 if (FUNC_0(VAR_11))
  VAR_12 |= VAR_1;
 FUNC_2(VAR_0, VAR_12);
}
