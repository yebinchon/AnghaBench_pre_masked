
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct drm_connector {scalar_t__ connector_type; } ;
struct amdgpu_encoder_atom_dig {int backlight_level; int panel_mode; } ;
struct amdgpu_encoder {int devices; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_connector_atom_dig {int edp_on; } ;
struct amdgpu_connector {struct amdgpu_connector_atom_dig* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_15 ;
 int FUNC_1 (struct drm_encoder*,struct drm_connector*) ;
 int FUNC_2 (struct drm_encoder*,struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,int ) ;
 int FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct amdgpu_encoder*,int ) ;
 int FUNC_6 (struct drm_connector*,int ) ;
 int FUNC_7 (struct drm_encoder*,int ,int ) ;
 int FUNC_8 (struct drm_encoder*,int ,int ,int ) ;
 int FUNC_9 (struct drm_encoder*,struct drm_encoder*,int) ;
 struct drm_connector* FUNC_10 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_11 (struct drm_encoder*) ;
 struct amdgpu_connector* FUNC_12 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_13 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_14(struct drm_encoder *VAR_16, int VAR_17)
{
 struct amdgpu_encoder *VAR_18 = FUNC_13(VAR_16);
 struct drm_encoder *VAR_19 = FUNC_11(VAR_16);
 struct amdgpu_encoder_atom_dig *VAR_20 = VAR_18->enc_priv;
 struct drm_connector *VAR_21 = FUNC_10(VAR_16);
 struct amdgpu_connector *VAR_22 = ((void*)0);
 struct amdgpu_connector_atom_dig *VAR_23 = ((void*)0);

 if (VAR_21) {
  VAR_22 = FUNC_12(VAR_21);
  VAR_23 = VAR_22->con_priv;
 }

 if (VAR_17 == VAR_2) {
  if (!VAR_21)
   VAR_20->panel_mode = VAR_12;
  else
   VAR_20->panel_mode = FUNC_1(VAR_16, VAR_21);


  FUNC_7(VAR_16, VAR_5, 0);
  FUNC_7(VAR_16,
         VAR_6,
         VAR_20->panel_mode);
  if (VAR_19)
   FUNC_9(VAR_16, VAR_19,
        VAR_15);
  if (FUNC_0(FUNC_4(VAR_16)) &&
      VAR_21) {
   if (VAR_21->connector_type == VAR_14) {
    FUNC_6(VAR_21,
             VAR_11);
    VAR_23->edp_on = 1;
   }
  }

  FUNC_8(VAR_16,
             VAR_8,
             0, 0);
  if (FUNC_0(FUNC_4(VAR_16)) &&
      VAR_21) {

   FUNC_2(VAR_16, VAR_21);
   FUNC_7(VAR_16, VAR_4, 0);
  }
  if (VAR_18->devices & (VAR_0))
   FUNC_5(VAR_18, VAR_20->backlight_level);
  if (VAR_19)
   FUNC_9(VAR_16, VAR_19, VAR_2);
 } else {
  if (FUNC_0(FUNC_4(VAR_16)) &&
      VAR_21)
   FUNC_7(VAR_16,
          VAR_3, 0);
  if (VAR_19)
   FUNC_9(VAR_16, VAR_19, VAR_1);
  if (VAR_18->devices & (VAR_0))
   FUNC_8(VAR_16,
              VAR_9, 0, 0);

  if (FUNC_0(FUNC_4(VAR_16)) &&
      VAR_21)
   FUNC_3(VAR_21, VAR_13);

  FUNC_8(VAR_16,
             VAR_7, 0, 0);
  if (FUNC_0(FUNC_4(VAR_16)) &&
      VAR_21) {
   if (VAR_21->connector_type == VAR_14) {
    FUNC_6(VAR_21,
             VAR_10);
    VAR_23->edp_on = 0;
   }
  }
 }
}
