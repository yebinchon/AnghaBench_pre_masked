
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {struct drm_device* dev; } ;
struct drm_encoder {int possible_crtcs; } ;
struct drm_device {int dev; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 struct drm_encoder* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct drm_connector* FUNC_7 (struct hibmc_drm_private*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_8(struct hibmc_drm_private *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct drm_encoder *VAR_7;
 struct drm_connector *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(VAR_5);
 if (FUNC_1(VAR_8)) {
  FUNC_0("failed to create connector: %ld\n",
     FUNC_2(VAR_8));
  return FUNC_2(VAR_8);
 }

 VAR_7 = FUNC_3(VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_0("failed to alloc memory when init encoder\n");
  return -VAR_1;
 }

 VAR_7->possible_crtcs = 0x1;
 VAR_9 = FUNC_6(VAR_6, VAR_7, &VAR_3,
          VAR_0, ((void*)0));
 if (VAR_9) {
  FUNC_0("failed to init encoder: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_5(VAR_7, &VAR_4);
 FUNC_4(VAR_8, VAR_7);

 return 0;
}
