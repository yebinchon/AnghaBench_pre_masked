
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bios_hardcoded_edid_size; } ;
struct radeon_device {TYPE_2__ mode_info; int is_atom_bios; } ;
struct radeon_connector {int detected_by_load; int use_digital; scalar_t__ dac_load_detect; scalar_t__ shared_ddc; TYPE_1__* edid; scalar_t__ ddc_bus; } ;
struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_device {int dev; struct radeon_device* dev_private; } ;
struct drm_connector {int status; struct drm_device* dev; int name; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_3__ {int input; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct drm_encoder* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_connector*,struct drm_encoder*,int,int) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_connector*) ;
 int FUNC_9 (struct drm_connector*,int) ;
 int FUNC_10 (struct radeon_connector*,int) ;
 int FUNC_11 (struct drm_encoder*,struct drm_connector*) ;
 struct radeon_connector* FUNC_12 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_13(struct drm_connector *VAR_3, bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct radeon_device *VAR_6 = VAR_5->dev_private;
 struct radeon_connector *VAR_7 = FUNC_12(VAR_3);
 struct drm_encoder *VAR_8;
 const struct drm_encoder_helper_funcs *VAR_9;
 bool VAR_10 = 0;
 enum drm_connector_status VAR_11 = VAR_2;
 int VAR_12;

 if (!FUNC_1()) {
  VAR_12 = FUNC_2(VAR_3->dev->dev);
  if (VAR_12 < 0)
   return VAR_2;
 }

 VAR_8 = FUNC_5(VAR_3);
 if (!VAR_8)
  VAR_11 = VAR_2;

 if (VAR_7->ddc_bus)
  VAR_10 = FUNC_10(VAR_7, 0);
 if (VAR_10) {
  VAR_7->detected_by_load = 0;
  FUNC_7(VAR_3);
  FUNC_8(VAR_3);

  if (!VAR_7->edid) {
   FUNC_0("%s: probed a monitor but no|invalid EDID\n",
     VAR_3->name);
   VAR_11 = VAR_1;
  } else {
   VAR_7->use_digital =
    !!(VAR_7->edid->input & VAR_0);




   if (VAR_7->use_digital && VAR_7->shared_ddc) {
    FUNC_7(VAR_3);
    VAR_11 = VAR_2;
   } else {
    VAR_11 = VAR_1;
   }
  }
 } else {


  if (!VAR_4) {



   if (VAR_7->detected_by_load)
    VAR_11 = VAR_3->status;
   goto out;
  }

  if (VAR_7->dac_load_detect && VAR_8) {
   VAR_9 = VAR_8->helper_private;
   VAR_11 = VAR_9->detect(VAR_8, VAR_3);
   if (VAR_11 != VAR_2)
    VAR_7->detected_by_load = 1;
  }
 }

 if (VAR_11 == VAR_1)
  VAR_11 = FUNC_6(VAR_3, VAR_8, VAR_11, 1);





 if ((!VAR_6->is_atom_bios) &&
     (VAR_11 == VAR_2) &&
     VAR_6->mode_info.bios_hardcoded_edid_size) {
  VAR_11 = VAR_1;
 }

 FUNC_9(VAR_3, VAR_11);

out:
 if (!FUNC_1()) {
  FUNC_3(VAR_3->dev->dev);
  FUNC_4(VAR_3->dev->dev);
 }

 return VAR_11;
}
