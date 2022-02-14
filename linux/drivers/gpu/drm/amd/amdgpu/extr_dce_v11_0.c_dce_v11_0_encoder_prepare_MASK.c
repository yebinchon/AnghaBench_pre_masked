
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_encoder {TYPE_1__* dev; } ;
struct drm_connector {scalar_t__ connector_type; } ;
struct amdgpu_encoder_atom_dig {size_t dig_encoder; int afmt; } ;
struct amdgpu_encoder {int active_device; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct TYPE_5__ {int * afmt; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_6__ {scalar_t__ cd_valid; } ;
struct amdgpu_connector {TYPE_3__ router; } ;
struct TYPE_4__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_connector*,int ) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_3 (struct drm_encoder*) ;
 struct drm_connector* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct amdgpu_connector*) ;
 size_t FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*) ;
 struct amdgpu_connector* FUNC_8 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_9 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_5->dev->dev_private;
 struct amdgpu_encoder *VAR_7 = FUNC_9(VAR_5);
 struct drm_connector *VAR_8 = FUNC_4(VAR_5);

 if ((VAR_7->active_device &
      (VAR_0 | VAR_1)) ||
     (FUNC_3(VAR_5) !=
      VAR_4)) {
  struct amdgpu_encoder_atom_dig *VAR_9 = VAR_7->enc_priv;
  if (VAR_9) {
   VAR_9->dig_encoder = FUNC_6(VAR_5);
   if (VAR_7->active_device & VAR_0)
    VAR_9->afmt = VAR_6->mode_info.afmt[VAR_9->dig_encoder];
  }
 }

 FUNC_2(VAR_6, 1);

 if (VAR_8) {
  struct amdgpu_connector *VAR_10 = FUNC_8(VAR_8);


  if (VAR_10->router.cd_valid)
   FUNC_5(VAR_10);


  if (VAR_8->connector_type == VAR_3)
   FUNC_1(VAR_8,
            VAR_2);
 }


 FUNC_0(VAR_5);

 FUNC_7(VAR_5);
}
