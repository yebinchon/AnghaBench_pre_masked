
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ddi_port_info; } ;
struct drm_i915_private {TYPE_3__ vbt; } ;
struct ddi_buf_trans {int trans1; int trans2; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_5__ {scalar_t__ dp_boost_level; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state const*,int ) ;
 struct ddi_buf_trans* FUNC_5 (struct drm_i915_private*,int,int*) ;
 struct ddi_buf_trans* FUNC_6 (struct drm_i915_private*,int,int*) ;
 struct ddi_buf_trans* FUNC_7 (struct drm_i915_private*,int*) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct intel_encoder *VAR_3,
      const struct intel_crtc_state *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_8(VAR_3->base.dev);
 u32 VAR_6 = 0;
 int VAR_7, VAR_8;
 enum port VAR_9 = VAR_3->port;
 const struct ddi_buf_trans *VAR_10;

 if (FUNC_4(VAR_4, VAR_1))
  VAR_10 = FUNC_7(VAR_5,
              &VAR_8);
 else if (FUNC_4(VAR_4, VAR_2))
  VAR_10 = FUNC_6(VAR_5, VAR_9,
              &VAR_8);
 else
  VAR_10 = FUNC_5(VAR_5, VAR_9,
             &VAR_8);


 if (FUNC_3(VAR_5) &&
     VAR_5->vbt.ddi_port_info[VAR_9].dp_boost_level)
  VAR_6 = VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_2(FUNC_1(VAR_9, VAR_7),
      VAR_10[VAR_7].trans1 | VAR_6);
  FUNC_2(FUNC_0(VAR_9, VAR_7),
      VAR_10[VAR_7].trans2);
 }
}
