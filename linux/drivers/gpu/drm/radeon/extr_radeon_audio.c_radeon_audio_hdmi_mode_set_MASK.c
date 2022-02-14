
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_encoder_atom_dig {int afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_encoder*) ;
 scalar_t__ FUNC_3 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct drm_encoder*,int) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,int ) ;
 int FUNC_8 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (struct drm_encoder*) ;
 int FUNC_11 (struct drm_connector*) ;
 struct drm_connector* FUNC_12 (struct drm_encoder*) ;
 int FUNC_13 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_14 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_15(struct drm_encoder *VAR_0,
           struct drm_display_mode *VAR_1)
{
 struct radeon_encoder *VAR_2 = FUNC_14(VAR_0);
 struct radeon_encoder_atom_dig *VAR_3 = VAR_2->enc_priv;
 struct drm_connector *VAR_4 = FUNC_12(VAR_0);

 if (!VAR_3 || !VAR_3->afmt)
  return;

 if (!VAR_4)
  return;

 if (FUNC_0(FUNC_11(VAR_4))) {
  FUNC_5(VAR_0, 1);

  FUNC_10(VAR_0);
  FUNC_9(VAR_0);
  FUNC_8(VAR_0, VAR_1);
  FUNC_4(VAR_0, VAR_1->clock);
  FUNC_6(VAR_0);
  FUNC_13(VAR_0);
  FUNC_7(VAR_0, VAR_1->clock);
  FUNC_2(VAR_0);
  FUNC_1(VAR_0);

  if (FUNC_3(VAR_0, VAR_1) < 0)
   return;

  FUNC_5(VAR_0, 0);
 } else {
  FUNC_13(VAR_0);

  if (FUNC_3(VAR_0, VAR_1) < 0)
   return;
 }
}
