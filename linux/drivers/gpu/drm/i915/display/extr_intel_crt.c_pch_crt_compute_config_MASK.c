
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int has_pch_encoder; int output_format; TYPE_1__ base; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct intel_encoder *VAR_3,
      struct intel_crtc_state *VAR_4,
      struct drm_connector_state *VAR_5)
{
 struct drm_display_mode *VAR_6 =
  &VAR_4->base.adjusted_mode;

 if (VAR_6->flags & VAR_0)
  return -VAR_1;

 VAR_4->has_pch_encoder = 1;
 VAR_4->output_format = VAR_2;

 return 0;
}
