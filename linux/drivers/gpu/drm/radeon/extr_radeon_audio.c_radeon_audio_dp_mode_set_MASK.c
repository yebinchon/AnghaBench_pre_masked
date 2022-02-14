
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_atom_dig {int afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_2__ {int vco_freq; } ;
struct radeon_device {TYPE_1__ clock; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*) ;
 scalar_t__ FUNC_3 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_encoder*,int) ;
 int FUNC_5 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_connector*) ;
 struct drm_connector* FUNC_9 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_10 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_11(struct drm_encoder *VAR_0,
         struct drm_display_mode *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct radeon_device *VAR_3 = VAR_2->dev_private;
 struct radeon_encoder *VAR_4 = FUNC_10(VAR_0);
 struct radeon_encoder_atom_dig *VAR_5 = VAR_4->enc_priv;
 struct drm_connector *VAR_6 = FUNC_9(VAR_0);

 if (!VAR_5 || !VAR_5->afmt)
  return;

 if (!VAR_6)
  return;

 if (FUNC_0(FUNC_8(VAR_6))) {
  FUNC_7(VAR_0);
  FUNC_6(VAR_0);
  FUNC_5(VAR_0, VAR_1);
  FUNC_4(VAR_0, VAR_3->clock.vco_freq * 10);
  FUNC_2(VAR_0);
  FUNC_1(VAR_0);

  if (FUNC_3(VAR_0, VAR_1) < 0)
   return;
 }
}
