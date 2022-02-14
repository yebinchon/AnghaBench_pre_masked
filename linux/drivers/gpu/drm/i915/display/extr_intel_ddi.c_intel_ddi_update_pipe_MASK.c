
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_hdcp {scalar_t__ content_type; int mutex; int prop_work; scalar_t__ value; } ;
struct intel_encoder {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct intel_connector {struct intel_hdcp hdcp; } ;
struct drm_connector_state {scalar_t__ hdcp_content_type; scalar_t__ content_protection; int connector; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_crtc_state const*,int ) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_2 (struct intel_connector*) ;
 int FUNC_3 (struct intel_connector*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct intel_connector* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_3,
      const struct intel_crtc_state *VAR_4,
      const struct drm_connector_state *VAR_5)
{
 struct intel_connector *VAR_6 =
    FUNC_7(VAR_5->connector);
 struct intel_hdcp *VAR_7 = &VAR_6->hdcp;
 bool VAR_8 =
   (VAR_5->hdcp_content_type != VAR_7->content_type &&
    VAR_5->content_protection !=
    VAR_1);

 if (!FUNC_0(VAR_4, VAR_2))
  FUNC_1(VAR_3, VAR_4, VAR_5);





 if (VAR_5->content_protection ==
     VAR_1 ||
     VAR_8)
  FUNC_2(VAR_6);





 if (VAR_8) {
  FUNC_4(&VAR_7->mutex);
  VAR_7->value = VAR_0;
  FUNC_6(&VAR_7->prop_work);
  FUNC_5(&VAR_7->mutex);
 }

 if (VAR_5->content_protection ==
     VAR_0 ||
     VAR_8)
  FUNC_3(VAR_6, (u8)VAR_5->hdcp_content_type);
}
