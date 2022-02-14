
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_crtc_state {int mode_changed; } ;
struct drm_connector_state {scalar_t__ content_protection; scalar_t__ hdcp_content_type; int crtc; int state; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct drm_crtc_state* FUNC_0 (int ,int ) ;

void FUNC_1(struct drm_connector *VAR_2,
        struct drm_connector_state *VAR_3,
        struct drm_connector_state *VAR_4)
{
 u64 VAR_5 = VAR_3->content_protection;
 u64 VAR_6 = VAR_4->content_protection;
 struct drm_crtc_state *VAR_7;

 if (!VAR_4->crtc) {




  if (VAR_5 == VAR_1)
   VAR_4->content_protection =
    VAR_0;
  return;
 }





 if (VAR_5 == VAR_6 ||
     (VAR_5 == VAR_0 &&
      VAR_6 == VAR_1)) {
  if (VAR_3->hdcp_content_type ==
    VAR_4->hdcp_content_type)
   return;
 }

 VAR_7 = FUNC_0(VAR_4->state,
         VAR_4->crtc);
 VAR_7->mode_changed = 1;
}
