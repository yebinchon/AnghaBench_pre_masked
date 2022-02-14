
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct cdv_intel_dp {int has_audio; scalar_t__ force_audio; int adapter; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (struct gma_encoder*) ;
 int FUNC_1 (struct gma_encoder*) ;
 int FUNC_2 (struct gma_encoder*) ;
 int VAR_0 ;
 int FUNC_3 (struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,int *) ;
 struct gma_encoder* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct gma_encoder*) ;
 int FUNC_7 (struct edid*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_8(struct drm_connector *VAR_1, bool VAR_2)
{
 struct gma_encoder *VAR_3 = FUNC_5(VAR_1);
 struct cdv_intel_dp *VAR_4 = VAR_3->dev_priv;
 enum drm_connector_status VAR_5;
 struct edid *VAR_6 = ((void*)0);
 int VAR_7 = FUNC_6(VAR_3);

 VAR_4->has_audio = 0;

 if (VAR_7)
  FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != VAR_0) {
  if (VAR_7)
   FUNC_1(VAR_3);
  return VAR_5;
        }

 if (VAR_4->force_audio) {
  VAR_4->has_audio = VAR_4->force_audio > 0;
 } else {
  VAR_6 = FUNC_4(VAR_1, &VAR_4->adapter);
  if (VAR_6) {
   VAR_4->has_audio = FUNC_3(VAR_6);
   FUNC_7(VAR_6);
  }
 }
 if (VAR_7)
  FUNC_1(VAR_3);

 return VAR_0;
}
