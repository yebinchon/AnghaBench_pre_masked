
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_atom_dig {int * pin; } ;
struct radeon_encoder {int audio; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_2__ {int hdmi_funcs; int dp_funcs; } ;
struct radeon_device {TYPE_1__ audio; } ;
struct radeon_connector {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {scalar_t__ connector_type; struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int *,int) ;
 int * FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_connector*) ;
 scalar_t__ FUNC_5 (struct radeon_connector*) ;
 int FUNC_6 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_7 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

void FUNC_9(struct drm_connector *VAR_3,
    struct drm_encoder *VAR_4,
    enum drm_connector_status VAR_5)
{
 struct drm_device *VAR_6 = VAR_3->dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 struct radeon_encoder *VAR_8 = FUNC_8(VAR_4);
 struct radeon_encoder_atom_dig *VAR_9;

 if (!FUNC_1(VAR_7))
  return;

 if (!FUNC_6(VAR_4))
  return;

 VAR_9 = VAR_8->enc_priv;

 if (VAR_5 == VAR_2) {
  if (VAR_3->connector_type == VAR_1) {
   struct radeon_connector *VAR_10 = FUNC_7(VAR_3);

   if (FUNC_5(VAR_10) ==
       VAR_0)
    VAR_8->audio = VAR_7->audio.dp_funcs;
   else
    VAR_8->audio = VAR_7->audio.hdmi_funcs;
  } else {
   VAR_8->audio = VAR_7->audio.hdmi_funcs;
  }

  if (FUNC_0(FUNC_4(VAR_3))) {
   if (!VAR_9->pin)
    VAR_9->pin = FUNC_3(VAR_4);
   FUNC_2(VAR_7, VAR_9->pin, 0xf);
  } else {
   FUNC_2(VAR_7, VAR_9->pin, 0);
   VAR_9->pin = ((void*)0);
  }
 } else {
  FUNC_2(VAR_7, VAR_9->pin, 0);
  VAR_9->pin = ((void*)0);
 }
}
