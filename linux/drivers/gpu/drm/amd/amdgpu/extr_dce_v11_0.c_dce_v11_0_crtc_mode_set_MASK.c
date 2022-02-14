
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_encoder {int encoder_id; } ;
struct amdgpu_device {scalar_t__ asic_type; } ;
struct amdgpu_crtc {struct drm_display_mode hw_mode; int ss; int ss_enabled; int bpc; int pll_id; int crtc_id; int encoder; int adjusted_clock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_crtc*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_1 (struct drm_crtc*,int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_crtc*,struct drm_framebuffer*,int,int,int ) ;
 int FUNC_7 (struct drm_crtc*) ;
 struct amdgpu_crtc* FUNC_8 (struct drm_crtc*) ;
 struct amdgpu_encoder* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct drm_crtc *VAR_5,
      struct drm_display_mode *VAR_6,
      struct drm_display_mode *VAR_7,
      int VAR_8, int VAR_9, struct drm_framebuffer *VAR_10)
{
 struct amdgpu_crtc *VAR_11 = FUNC_8(VAR_5);
 struct drm_device *VAR_12 = VAR_5->dev;
 struct amdgpu_device *VAR_13 = VAR_12->dev_private;

 if (!VAR_11->adjusted_clock)
  return -VAR_4;

 if ((VAR_13->asic_type == VAR_0) ||
     (VAR_13->asic_type == VAR_1) ||
     (VAR_13->asic_type == VAR_2) ||
     (VAR_13->asic_type == VAR_3)) {
  struct amdgpu_encoder *VAR_14 =
   FUNC_9(VAR_11->encoder);
  int VAR_15 =
   FUNC_5(VAR_11->encoder);


  FUNC_1(VAR_5, VAR_11->crtc_id,
       VAR_11->pll_id,
       VAR_15, VAR_14->encoder_id,
       VAR_7->clock, 0, 0, 0, 0,
       VAR_11->bpc, VAR_11->ss_enabled, &VAR_11->ss);
 } else {
  FUNC_4(VAR_5, VAR_7);
 }
 FUNC_3(VAR_5, VAR_7);
 FUNC_6(VAR_5, VAR_10, VAR_8, VAR_9, 0);
 FUNC_0(VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_5);
 FUNC_7(VAR_5);

 VAR_11->hw_mode = *VAR_7;

 return 0;
}
