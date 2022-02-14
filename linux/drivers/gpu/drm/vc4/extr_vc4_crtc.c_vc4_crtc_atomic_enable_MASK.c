
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_dev {int dummy; } ;
struct vc4_crtc_state {scalar_t__ feed_txp; } ;
struct vc4_crtc {int channel; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_device {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct drm_device*) ;
 struct vc4_crtc* FUNC_7 (struct drm_crtc*) ;
 struct vc4_crtc_state* FUNC_8 (TYPE_1__*) ;
 struct vc4_dev* FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_11(struct drm_crtc *VAR_6,
       struct drm_crtc_state *VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct vc4_dev *VAR_9 = FUNC_9(VAR_8);
 struct vc4_crtc *VAR_10 = FUNC_7(VAR_6);
 struct vc4_crtc_state *VAR_11 = FUNC_8(VAR_6->state);
 struct drm_display_mode *VAR_12 = &VAR_6->state->adjusted_mode;

 FUNC_6(VAR_8);




 FUNC_5(VAR_6);
 FUNC_10(VAR_6);






 FUNC_2(FUNC_3(VAR_10->channel),
    FUNC_4(VAR_12->hdisplay, VAR_5) |
    FUNC_4(VAR_12->vdisplay, VAR_3) |
    VAR_2 |
    (VAR_11->feed_txp ? VAR_4 : 0));




 if (!VAR_11->feed_txp)
  FUNC_1(VAR_1,
      FUNC_0(VAR_1) | VAR_0);
}
