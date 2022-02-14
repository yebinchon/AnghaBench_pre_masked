
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct intel_dvo {TYPE_2__* attached_connector; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int output_format; TYPE_3__ base; } ;
struct drm_connector_state {int dummy; } ;
struct TYPE_4__ {struct drm_display_mode* fixed_mode; } ;
struct TYPE_5__ {TYPE_1__ panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_dvo* FUNC_0 (struct intel_encoder*) ;
 int FUNC_1 (struct drm_display_mode const*,struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_2(struct intel_encoder *VAR_3,
        struct intel_crtc_state *VAR_4,
        struct drm_connector_state *VAR_5)
{
 struct intel_dvo *VAR_6 = FUNC_0(VAR_3);
 const struct drm_display_mode *VAR_7 =
  VAR_6->attached_connector->panel.fixed_mode;
 struct drm_display_mode *VAR_8 = &VAR_4->base.adjusted_mode;







 if (VAR_7)
  FUNC_1(VAR_7, VAR_8);

 if (VAR_8->flags & VAR_0)
  return -VAR_1;

 VAR_4->output_format = VAR_2;

 return 0;
}
