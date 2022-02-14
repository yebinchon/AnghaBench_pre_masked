
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_connector_atom_dig {int edp_on; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int height_mm; int width_mm; } ;
struct TYPE_2__ {int height_mm; int width_mm; } ;
struct drm_connector {scalar_t__ connector_type; TYPE_1__ display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct drm_connector*,int ) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_encoder*,struct drm_connector*) ;
 int FUNC_3 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_4 (struct drm_connector*) ;
 scalar_t__ FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_encoder*,struct drm_connector*) ;
 struct drm_display_mode* FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (struct drm_connector*) ;
 struct radeon_connector* FUNC_11 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_12(struct drm_connector *VAR_5)
{
 struct radeon_connector *VAR_6 = FUNC_11(VAR_5);
 struct radeon_connector_atom_dig *VAR_7 = VAR_6->con_priv;
 struct drm_encoder *VAR_8 = FUNC_4(VAR_5);
 int VAR_9;

 if ((VAR_5->connector_type == VAR_3) ||
     (VAR_5->connector_type == VAR_2)) {
  struct drm_display_mode *VAR_10;

  if (VAR_5->connector_type == VAR_3) {
   if (!VAR_7->edp_on)
    FUNC_0(VAR_5,
            VAR_1);
   FUNC_6(VAR_5);
   VAR_9 = FUNC_7(VAR_5);
   if (!VAR_7->edp_on)
    FUNC_0(VAR_5,
            VAR_0);
  } else {

   if (FUNC_5(VAR_5) !=
       VAR_4) {
    if (VAR_8)
     FUNC_3(VAR_8);
   }
   FUNC_6(VAR_5);
   VAR_9 = FUNC_7(VAR_5);
  }

  if (VAR_9 > 0) {
   if (VAR_8) {
    FUNC_8(VAR_8, VAR_5);

    FUNC_2(VAR_8, VAR_5);
   }
   return VAR_9;
  }

  if (!VAR_8)
   return 0;


  VAR_10 = FUNC_9(VAR_8);
  if (VAR_10) {
   VAR_9 = 1;
   FUNC_1(VAR_5, VAR_10);

   VAR_5->display_info.width_mm = VAR_10->width_mm;
   VAR_5->display_info.height_mm = VAR_10->height_mm;

   FUNC_2(VAR_8, VAR_5);
  }
 } else {

  if (FUNC_5(VAR_5) !=
   VAR_4) {
   if (VAR_8)
    FUNC_3(VAR_8);
  }
  FUNC_6(VAR_5);
  VAR_9 = FUNC_7(VAR_5);

  FUNC_10(VAR_5);
 }

 return VAR_9;
}
