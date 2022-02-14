
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 VAR_4 |= VAR_0;
 FUNC_2(VAR_2, VAR_4);

 if (FUNC_3(FUNC_1(VAR_2) &
   VAR_1, 100))
  FUNC_0("FDI mPHY reset assert timeout\n");

 VAR_4 = FUNC_1(VAR_2);
 VAR_4 &= ~VAR_0;
 FUNC_2(VAR_2, VAR_4);

 if (FUNC_3((FUNC_1(VAR_2) &
    VAR_1) == 0, 100))
  FUNC_0("FDI mPHY reset de-assert timeout\n");
}
