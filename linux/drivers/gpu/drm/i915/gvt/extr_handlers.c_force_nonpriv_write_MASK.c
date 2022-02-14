
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu {int id; TYPE_2__* gvt; } ;
struct drm_i915_private {TYPE_1__** engine; } ;
struct TYPE_4__ {struct drm_i915_private* dev_priv; } ;
struct TYPE_3__ {int mmio_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int,unsigned int,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,unsigned int) ;
 int FUNC_5 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct intel_vgpu *VAR_1,
 unsigned int VAR_2, void *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5 = *(u32 *)VAR_3;
 int VAR_6 = FUNC_4(VAR_1->gvt, VAR_2);
 u32 VAR_7;
 struct drm_i915_private *VAR_8 = VAR_1->gvt->dev_priv;
 int VAR_9 = -VAR_0;

 if ((VAR_4 != 4) || ((VAR_2 & (VAR_4 - 1)) != 0) || VAR_6 < 0) {
  FUNC_1("vgpu(%d) ring %d Invalid FORCE_NONPRIV offset %x(%dB)\n",
   VAR_1->id, VAR_6, VAR_2, VAR_4);
  return VAR_9;
 }

 VAR_7 = VAR_8->engine[VAR_6]->mmio_base;

 if (FUNC_3(VAR_5) ||
  VAR_5 == FUNC_2(FUNC_0(VAR_7))) {
  VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3,
   VAR_4);
 } else
  FUNC_1("vgpu(%d) Invalid FORCE_NONPRIV write %x at offset %x\n",
   VAR_1->id, VAR_5, VAR_2);

 return 0;
}
