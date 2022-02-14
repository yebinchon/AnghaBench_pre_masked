
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;




 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct intel_vgpu*,int ) ;

__attribute__((used)) static u32 FUNC_4(struct intel_vgpu *VAR_0, int VAR_1,
 u32 VAR_2, int VAR_3, int VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_0->gvt->dev_priv;

 u32 VAR_6 = FUNC_3(VAR_0, FUNC_0(VAR_1)) & VAR_3;
 u32 VAR_7 = VAR_6;

 if (FUNC_1(VAR_5) >= 9) {
  switch (VAR_2) {
  case 131:
   VAR_7 = VAR_6 * 64;
   break;
  case 130:
   VAR_7 = VAR_6 * 512;
   break;
  case 129:
   VAR_7 = VAR_6 * 128;
   break;
  case 128:
   if (VAR_4 == 8)
    VAR_7 = VAR_6 * 64;
   else if (VAR_4 == 16 || VAR_4 == 32 || VAR_4 == 64)
    VAR_7 = VAR_6 * 128;
   else
    FUNC_2("skl: unsupported bpp:%d\n", VAR_4);
   break;
  default:
   FUNC_2("skl: unsupported tile format:%x\n",
    VAR_2);
  }
 }

 return VAR_7;
}
