
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_5, bool VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_4);
 if (!!(VAR_7 & VAR_0) == VAR_6)
  return;

 FUNC_5(FUNC_2(FUNC_1(VAR_2)) & VAR_1);
 FUNC_5(FUNC_2(FUNC_1(VAR_3)) & VAR_1);

 VAR_7 &= ~VAR_0;
 if (VAR_6)
  VAR_7 |= VAR_0;

 FUNC_0("%sabling fdi C rx\n", VAR_6 ? "en" : "dis");
 FUNC_3(VAR_4, VAR_7);
 FUNC_4(VAR_4);
}
