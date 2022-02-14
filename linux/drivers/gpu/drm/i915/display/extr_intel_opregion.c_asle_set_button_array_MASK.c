
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static u32 FUNC_1(struct drm_i915_private *VAR_6, u32 VAR_7)
{
 if (!VAR_7)
  FUNC_0("Button array event is not supported (nothing)\n");
 if (VAR_7 & VAR_2)
  FUNC_0("Button array event is not supported (rotation lock)\n");
 if (VAR_7 & VAR_3)
  FUNC_0("Button array event is not supported (volume down)\n");
 if (VAR_7 & VAR_4)
  FUNC_0("Button array event is not supported (volume up)\n");
 if (VAR_7 & VAR_5)
  FUNC_0("Button array event is not supported (windows)\n");
 if (VAR_7 & VAR_1)
  FUNC_0("Button array event is not supported (power)\n");

 return VAR_0;
}
