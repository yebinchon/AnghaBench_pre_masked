
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_encoder_atom_dig {size_t dig_encoder; int afmt; } ;
struct radeon_encoder {int active_device; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_5__ {int * afmt; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ mode_info; } ;
struct TYPE_6__ {scalar_t__ cd_valid; } ;
struct radeon_connector {TYPE_3__ router; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct drm_connector {scalar_t__ connector_type; } ;
struct TYPE_4__ {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct drm_connector*,int ) ;
 int FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (struct drm_encoder*,int) ;
 size_t FUNC_11 (struct drm_encoder*,int) ;
 int FUNC_12 (struct radeon_device*,size_t) ;
 scalar_t__ FUNC_13 (struct drm_encoder*) ;
 struct drm_connector* FUNC_14 (struct drm_encoder*) ;
 int FUNC_15 (struct radeon_connector*) ;
 struct radeon_connector* FUNC_16 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_17 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_18(struct drm_encoder *VAR_6)
{
 struct radeon_device *VAR_7 = VAR_6->dev->dev_private;
 struct radeon_encoder *VAR_8 = FUNC_17(VAR_6);
 struct drm_connector *VAR_9 = FUNC_14(VAR_6);

 if ((VAR_8->active_device &
      (VAR_0 | VAR_1)) ||
     (FUNC_13(VAR_6) !=
      VAR_5)) {
  struct radeon_encoder_atom_dig *VAR_10 = VAR_8->enc_priv;
  if (VAR_10) {
   if (VAR_10->dig_encoder >= 0)
    FUNC_12(VAR_7, VAR_10->dig_encoder);
   VAR_10->dig_encoder = FUNC_11(VAR_6, -1);
   if (VAR_8->active_device & VAR_0) {
    if (VAR_7->family >= VAR_3)
     VAR_10->afmt = VAR_7->mode_info.afmt[VAR_10->dig_encoder];
    else

     VAR_10->afmt = VAR_7->mode_info.afmt[0];
   }
  }
 }

 FUNC_10(VAR_6, 1);

 if (VAR_9) {
  struct radeon_connector *VAR_11 = FUNC_16(VAR_9);


  if (VAR_11->router.cd_valid)
   FUNC_15(VAR_11);


  if (VAR_9->connector_type == VAR_4)
   FUNC_4(VAR_9,
           VAR_2);
 }


 FUNC_5(VAR_6);

 if (FUNC_3(VAR_7))
  FUNC_9(VAR_6);
 else if (FUNC_2(VAR_7))
  FUNC_8(VAR_6);
 else if (FUNC_1(VAR_7))
  FUNC_7(VAR_6);
 else if (FUNC_0(VAR_7))
  FUNC_6(VAR_6);
}
