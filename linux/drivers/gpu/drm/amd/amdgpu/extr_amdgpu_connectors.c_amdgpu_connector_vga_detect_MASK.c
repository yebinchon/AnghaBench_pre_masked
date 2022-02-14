
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_connector {int status; TYPE_2__* dev; int name; } ;
struct amdgpu_connector {int detected_by_load; int use_digital; scalar_t__ dac_load_detect; scalar_t__ shared_ddc; TYPE_1__* edid; scalar_t__ ddc_bus; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int input; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct drm_encoder* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,int) ;
 int FUNC_5 (struct amdgpu_connector*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct drm_encoder*,struct drm_connector*) ;
 struct amdgpu_connector* FUNC_11 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_12(struct drm_connector *VAR_3, bool VAR_4)
{
 struct amdgpu_connector *VAR_5 = FUNC_11(VAR_3);
 struct drm_encoder *VAR_6;
 const struct drm_encoder_helper_funcs *VAR_7;
 bool VAR_8 = 0;
 enum drm_connector_status VAR_9 = VAR_2;
 int VAR_10;

 if (!FUNC_6()) {
  VAR_10 = FUNC_7(VAR_3->dev->dev);
  if (VAR_10 < 0)
   return VAR_2;
 }

 VAR_6 = FUNC_1(VAR_3);
 if (!VAR_6)
  VAR_9 = VAR_2;

 if (VAR_5->ddc_bus)
  VAR_8 = FUNC_5(VAR_5, 0);
 if (VAR_8) {
  VAR_5->detected_by_load = 0;
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);

  if (!VAR_5->edid) {
   FUNC_0("%s: probed a monitor but no|invalid EDID\n",
     VAR_3->name);
   VAR_9 = VAR_1;
  } else {
   VAR_5->use_digital =
    !!(VAR_5->edid->input & VAR_0);




   if (VAR_5->use_digital && VAR_5->shared_ddc) {
    FUNC_2(VAR_3);
    VAR_9 = VAR_2;
   } else {
    VAR_9 = VAR_1;
   }
  }
 } else {


  if (!VAR_4) {



   if (VAR_5->detected_by_load)
    VAR_9 = VAR_3->status;
   goto out;
  }

  if (VAR_5->dac_load_detect && VAR_6) {
   VAR_7 = VAR_6->helper_private;
   VAR_9 = VAR_7->detect(VAR_6, VAR_3);
   if (VAR_9 != VAR_2)
    VAR_5->detected_by_load = 1;
  }
 }

 FUNC_4(VAR_3, VAR_9);

out:
 if (!FUNC_6()) {
  FUNC_8(VAR_3->dev->dev);
  FUNC_9(VAR_3->dev->dev);
 }

 return VAR_9;
}
