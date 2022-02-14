
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct drm_i915_private*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_i915_private *VAR_3, bool VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2);
 VAR_6 &= ~VAR_1;
 if (VAR_4)
  VAR_6 |= VAR_1;
 FUNC_2(VAR_2, VAR_6);
 FUNC_3(VAR_2);

 VAR_5 = VAR_0;
 VAR_6 = VAR_4 ? VAR_5 : 0;

 VAR_7 = FUNC_4(VAR_3, VAR_5, VAR_6);
 if (VAR_7)
  FUNC_0("timeout disabling GT waking\n");

 return VAR_7;
}
