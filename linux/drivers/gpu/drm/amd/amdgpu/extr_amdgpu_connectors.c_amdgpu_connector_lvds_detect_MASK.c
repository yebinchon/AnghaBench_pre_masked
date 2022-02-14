
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_connector {TYPE_1__* dev; } ;
struct amdgpu_encoder {struct drm_display_mode native_mode; } ;
struct amdgpu_connector {scalar_t__ edid; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int dev; } ;


 struct drm_encoder* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct amdgpu_connector* FUNC_7 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_9(struct drm_connector *VAR_2, bool VAR_3)
{
 struct amdgpu_connector *VAR_4 = FUNC_7(VAR_2);
 struct drm_encoder *VAR_5 = FUNC_0(VAR_2);
 enum drm_connector_status VAR_6 = VAR_1;
 int VAR_7;

 if (!FUNC_3()) {
  VAR_7 = FUNC_4(VAR_2->dev->dev);
  if (VAR_7 < 0)
   return VAR_1;
 }

 if (VAR_5) {
  struct amdgpu_encoder *VAR_8 = FUNC_8(VAR_5);
  struct drm_display_mode *VAR_9 = &VAR_8->native_mode;


  if (VAR_9->hdisplay >= 320 && VAR_9->vdisplay >= 240)
   VAR_6 = VAR_0;

 }


 FUNC_1(VAR_2);
 if (VAR_4->edid)
  VAR_6 = VAR_0;


 FUNC_2(VAR_2, VAR_6);

 if (!FUNC_3()) {
  FUNC_5(VAR_2->dev->dev);
  FUNC_6(VAR_2->dev->dev);
 }

 return VAR_6;
}
