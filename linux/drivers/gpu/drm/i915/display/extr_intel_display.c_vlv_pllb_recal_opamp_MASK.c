
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*,int,int ) ;
 int FUNC_2 (struct drm_i915_private*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_1, enum pipe
  VAR_2)
{
 u32 VAR_3;





 VAR_3 = FUNC_1(VAR_1, VAR_2, FUNC_0(1));
 VAR_3 &= 0xffffff00;
 VAR_3 |= 0x00000030;
 FUNC_2(VAR_1, VAR_2, FUNC_0(1), VAR_3);

 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 VAR_3 &= 0x00ffffff;
 VAR_3 |= 0x8c000000;
 FUNC_2(VAR_1, VAR_2, VAR_0, VAR_3);

 VAR_3 = FUNC_1(VAR_1, VAR_2, FUNC_0(1));
 VAR_3 &= 0xffffff00;
 FUNC_2(VAR_1, VAR_2, FUNC_0(1), VAR_3);

 VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);
 VAR_3 &= 0x00ffffff;
 VAR_3 |= 0xb0000000;
 FUNC_2(VAR_1, VAR_2, VAR_0, VAR_3);
}
