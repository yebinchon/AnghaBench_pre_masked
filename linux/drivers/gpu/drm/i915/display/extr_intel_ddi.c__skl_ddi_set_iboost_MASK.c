
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_1,
    enum port VAR_2, u8 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_0);
 VAR_4 &= ~(FUNC_1(VAR_2) | FUNC_0(VAR_2));
 if (VAR_3)
  VAR_4 |= VAR_3 << FUNC_2(VAR_2);
 else
  VAR_4 |= FUNC_0(VAR_2);
 FUNC_4(VAR_0, VAR_4);
}
