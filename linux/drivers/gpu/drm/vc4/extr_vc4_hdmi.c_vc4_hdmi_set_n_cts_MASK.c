
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int samplerate; } ;
struct vc4_hdmi {TYPE_2__ audio; struct drm_encoder* encoder; } ;
struct vc4_dev {int dummy; } ;
struct drm_encoder {struct drm_device* dev; struct drm_crtc* crtc; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct vc4_hdmi *VAR_5)
{
 struct drm_encoder *VAR_6 = VAR_5->encoder;
 struct drm_crtc *VAR_7 = VAR_6->crtc;
 struct drm_device *VAR_8 = VAR_6->dev;
 struct vc4_dev *VAR_9 = FUNC_3(VAR_8);
 const struct drm_display_mode *VAR_10 = &VAR_7->state->adjusted_mode;
 u32 VAR_11 = VAR_5->audio.samplerate;
 u32 VAR_12, VAR_13;
 u64 VAR_14;

 VAR_12 = 128 * VAR_11 / 1000;
 VAR_14 = (u64)(VAR_10->clock * 1000) * VAR_12;
 FUNC_2(VAR_14, 128 * VAR_11);
 VAR_13 = VAR_14;

 FUNC_0(VAR_0,
     VAR_1 |
     FUNC_1(VAR_12, VAR_2));






 FUNC_0(VAR_3, VAR_13);
 FUNC_0(VAR_4, VAR_13);
}
