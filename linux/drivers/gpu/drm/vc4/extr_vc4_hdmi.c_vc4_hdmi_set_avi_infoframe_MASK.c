
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int bottom_bar; int top_bar; int left_bar; int right_bar; } ;
union hdmi_infoframe {TYPE_5__ avi; } ;
struct vc4_hdmi_encoder {scalar_t__ limited_rgb_range; } ;
struct vc4_hdmi {TYPE_6__* connector; } ;
struct vc4_dev {struct vc4_hdmi* hdmi; } ;
struct drm_encoder {struct drm_crtc* crtc; TYPE_1__* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_2__* state; } ;
struct TYPE_11__ {int bottom; int top; int left; int right; } ;
struct TYPE_12__ {TYPE_3__ margins; } ;
struct drm_connector_state {TYPE_4__ tv; } ;
struct TYPE_14__ {struct drm_connector_state* state; } ;
struct TYPE_10__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_9__ {struct vc4_dev* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,struct drm_display_mode const*) ;
 int FUNC_2 (TYPE_5__*,TYPE_6__*,struct drm_display_mode const*,int ) ;
 struct vc4_hdmi_encoder* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*,union hdmi_infoframe*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_2)
{
 struct vc4_hdmi_encoder *VAR_3 = FUNC_3(VAR_2);
 struct vc4_dev *VAR_4 = VAR_2->dev->dev_private;
 struct vc4_hdmi *VAR_5 = VAR_4->hdmi;
 struct drm_connector_state *VAR_6 = VAR_5->connector->state;
 struct drm_crtc *VAR_7 = VAR_2->crtc;
 const struct drm_display_mode *VAR_8 = &VAR_7->state->adjusted_mode;
 union hdmi_infoframe VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(&VAR_9.avi,
             VAR_5->connector, VAR_8);
 if (VAR_10 < 0) {
  FUNC_0("couldn't fill AVI infoframe\n");
  return;
 }

 FUNC_2(&VAR_9.avi,
        VAR_5->connector, VAR_8,
        VAR_3->limited_rgb_range ?
        VAR_1 :
        VAR_0);

 VAR_9.avi.right_bar = VAR_6->tv.margins.right;
 VAR_9.avi.left_bar = VAR_6->tv.margins.left;
 VAR_9.avi.top_bar = VAR_6->tv.margins.top;
 VAR_9.avi.bottom_bar = VAR_6->tv.margins.bottom;

 FUNC_4(VAR_2, &VAR_9);
}
