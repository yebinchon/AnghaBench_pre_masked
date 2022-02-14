
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder_atom_dig {int lcd_ss_id; } ;
struct amdgpu_encoder {int active_device; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {int bpc; int ss_enabled; int adjusted_clock; int ss; int encoder; } ;
struct amdgpu_connector_atom_dig {int dp_clock; } ;
struct amdgpu_connector {int pixelclock_for_modeset; struct amdgpu_connector_atom_dig* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 scalar_t__ VAR_5 ;
 int FUNC_0 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct amdgpu_device*,int *,int ,int) ;
 int FUNC_3 (struct drm_connector*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct drm_connector* FUNC_5 (int ) ;
 struct amdgpu_connector* FUNC_6 (struct drm_connector*) ;
 struct amdgpu_crtc* FUNC_7 (struct drm_crtc*) ;
 struct amdgpu_encoder* FUNC_8 (int ) ;

int FUNC_9(struct drm_crtc *VAR_6,
         struct drm_display_mode *VAR_7)
{
 struct amdgpu_crtc *VAR_8 = FUNC_7(VAR_6);
 struct drm_device *VAR_9 = VAR_6->dev;
 struct amdgpu_device *VAR_10 = VAR_9->dev_private;
 struct amdgpu_encoder *VAR_11 =
  FUNC_8(VAR_8->encoder);
 int VAR_12 = FUNC_1(VAR_8->encoder);

 VAR_8->bpc = 8;
 VAR_8->ss_enabled = 0;

 if ((VAR_11->active_device & (VAR_4 | VAR_3)) ||
     (FUNC_4(VAR_8->encoder) != VAR_5)) {
  struct amdgpu_encoder_atom_dig *VAR_13 = VAR_11->enc_priv;
  struct drm_connector *VAR_14 =
   FUNC_5(VAR_8->encoder);
  struct amdgpu_connector *VAR_15 =
   FUNC_6(VAR_14);
  struct amdgpu_connector_atom_dig *VAR_16 =
   VAR_15->con_priv;
  int VAR_17;


  VAR_15->pixelclock_for_modeset = VAR_7->clock;
  VAR_8->bpc = FUNC_3(VAR_14);

  switch (VAR_12) {
  case 131:
  case 132:

   VAR_17 = VAR_16->dp_clock / 10;
   VAR_8->ss_enabled =
    FUNC_2(VAR_10, &VAR_8->ss,
         VAR_0,
         VAR_17);
   break;
  case 128:
   VAR_8->ss_enabled =
    FUNC_2(VAR_10,
         &VAR_8->ss,
         VAR_13->lcd_ss_id,
         VAR_7->clock / 10);
   break;
  case 130:
   VAR_8->ss_enabled =
    FUNC_2(VAR_10,
         &VAR_8->ss,
         VAR_2,
         VAR_7->clock / 10);
   break;
  case 129:
   VAR_8->ss_enabled =
    FUNC_2(VAR_10,
         &VAR_8->ss,
         VAR_1,
         VAR_7->clock / 10);
   break;
  default:
   break;
  }
 }


 VAR_8->adjusted_clock = FUNC_0(VAR_6, VAR_7);

 return 0;
}
