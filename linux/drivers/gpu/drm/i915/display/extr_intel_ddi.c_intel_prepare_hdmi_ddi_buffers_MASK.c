
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {int port; TYPE_3__ base; } ;
struct TYPE_5__ {TYPE_1__* ddi_port_info; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct ddi_buf_trans {int trans1; int trans2; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_4__ {scalar_t__ hdmi_boost_level; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (int) ;
 struct ddi_buf_trans* FUNC_5 (struct drm_i915_private*,int*) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_1,
        int VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_1->base.dev);
 u32 VAR_4 = 0;
 int VAR_5;
 enum port VAR_6 = VAR_1->port;
 const struct ddi_buf_trans *VAR_7;

 VAR_7 = FUNC_5(VAR_3, &VAR_5);

 if (FUNC_4(!VAR_7))
  return;
 if (FUNC_4(VAR_2 >= VAR_5))
  VAR_2 = VAR_5 - 1;


 if (FUNC_3(VAR_3) &&
     VAR_3->vbt.ddi_port_info[VAR_6].hdmi_boost_level)
  VAR_4 = VAR_0;


 FUNC_2(FUNC_1(VAR_6, 9),
     VAR_7[VAR_2].trans1 | VAR_4);
 FUNC_2(FUNC_0(VAR_6, 9),
     VAR_7[VAR_2].trans2);
}
