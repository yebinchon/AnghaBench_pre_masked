
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_connector {int dac_load_detect; } ;
struct drm_encoder_helper_funcs {int (* detect ) (struct drm_encoder*,struct drm_connector*) ;} ;
struct drm_encoder {struct drm_encoder_helper_funcs* helper_private; } ;
struct drm_connector {TYPE_1__* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct drm_encoder* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct drm_connector*,struct drm_encoder*,int,int) ;
 int FUNC_6 (struct drm_connector*,int) ;
 int FUNC_7 (struct drm_encoder*,struct drm_connector*) ;
 struct radeon_connector* FUNC_8 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_9(struct drm_connector *VAR_2, bool VAR_3)
{
 struct drm_encoder *VAR_4;
 const struct drm_encoder_helper_funcs *VAR_5;
 struct radeon_connector *VAR_6 = FUNC_8(VAR_2);
 enum drm_connector_status VAR_7 = VAR_1;
 int VAR_8;

 if (!VAR_6->dac_load_detect)
  return VAR_7;

 if (!FUNC_0()) {
  VAR_8 = FUNC_1(VAR_2->dev->dev);
  if (VAR_8 < 0)
   return VAR_1;
 }

 VAR_4 = FUNC_4(VAR_2);
 if (!VAR_4)
  VAR_7 = VAR_1;
 else {
  VAR_5 = VAR_4->helper_private;
  VAR_7 = VAR_5->detect(VAR_4, VAR_2);
 }
 if (VAR_7 == VAR_0)
  VAR_7 = FUNC_5(VAR_2, VAR_4, VAR_7, 0);
 FUNC_6(VAR_2, VAR_7);

 if (!FUNC_0()) {
  FUNC_2(VAR_2->dev->dev);
  FUNC_3(VAR_2->dev->dev);
 }

 return VAR_7;
}
