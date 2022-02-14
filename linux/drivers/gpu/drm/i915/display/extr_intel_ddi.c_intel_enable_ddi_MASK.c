
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_encoder {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_connector_state {scalar_t__ content_protection; scalar_t__ hdcp_content_type; int connector; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state const*,int ) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_2 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_2,
        const struct intel_crtc_state *VAR_3,
        const struct drm_connector_state *VAR_4)
{
 if (FUNC_0(VAR_3, VAR_1))
  FUNC_2(VAR_2, VAR_3, VAR_4);
 else
  FUNC_1(VAR_2, VAR_3, VAR_4);


 if (VAR_4->content_protection ==
     VAR_0)
  FUNC_3(FUNC_4(VAR_4->connector),
      (u8)VAR_4->hdcp_content_type);
}
