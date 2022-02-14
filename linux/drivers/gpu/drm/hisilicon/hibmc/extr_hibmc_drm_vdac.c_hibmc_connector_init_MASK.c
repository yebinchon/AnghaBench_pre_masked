
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {struct drm_device* dev; } ;
struct drm_device {int dev; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_connector* FUNC_1 (int) ;
 int VAR_2 ;
 struct drm_connector* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct drm_connector *
FUNC_5(struct hibmc_drm_private *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct drm_connector *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_0("failed to alloc memory when init connector\n");
  return FUNC_1(-VAR_1);
 }

 VAR_8 = FUNC_4(VAR_6, VAR_7,
     &VAR_3,
     VAR_0);
 if (VAR_8) {
  FUNC_0("failed to init connector: %d\n", VAR_8);
  return FUNC_1(VAR_8);
 }
 FUNC_3(VAR_7,
     &VAR_4);

 return VAR_7;
}
