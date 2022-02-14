
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct radeon_encoder {struct drm_display_mode native_mode; } ;
struct radeon_device {int flags; } ;
struct radeon_connector {scalar_t__ edid; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dev; struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct drm_encoder* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_connector*,int) ;
 scalar_t__ VAR_3 ;
 struct radeon_connector* FUNC_7 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_9(struct drm_connector *VAR_4, bool VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 struct radeon_connector *VAR_8 = FUNC_7(VAR_4);
 struct drm_encoder *VAR_9 = FUNC_4(VAR_4);
 enum drm_connector_status VAR_10 = VAR_2;
 int VAR_11;

 if (!FUNC_0()) {
  VAR_11 = FUNC_1(VAR_4->dev->dev);
  if (VAR_11 < 0)
   return VAR_2;
 }

 if (VAR_9) {
  struct radeon_encoder *VAR_12 = FUNC_8(VAR_9);
  struct drm_display_mode *VAR_13 = &VAR_12->native_mode;


  if (VAR_13->hdisplay >= 320 && VAR_13->vdisplay >= 240)
   VAR_10 = VAR_1;



  if ((VAR_7->flags & VAR_0) && (VAR_3 != 0))
   VAR_10 = VAR_2;
 }


 FUNC_5(VAR_4);
 if (VAR_8->edid)
  VAR_10 = VAR_1;


 FUNC_6(VAR_4, VAR_10);

 if (!FUNC_0()) {
  FUNC_2(VAR_4->dev->dev);
  FUNC_3(VAR_4->dev->dev);
 }

 return VAR_10;
}
