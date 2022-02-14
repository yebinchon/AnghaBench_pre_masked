
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int possible_crtcs; scalar_t__ possible_clones; } ;
struct drm_device {int dev; } ;
struct drm_connector {int dummy; } ;
struct device_node {int dummy; } ;
struct arcpgu_drm_connector {struct drm_connector connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;

int FUNC_9(struct drm_device *VAR_7, struct device_node *VAR_8)
{
 struct arcpgu_drm_connector *VAR_9;
 struct drm_encoder *VAR_10;
 struct drm_connector *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 VAR_10->possible_crtcs = 1;
 VAR_10->possible_clones = 0;

 VAR_12 = FUNC_8(VAR_7, VAR_10, &VAR_6,
          VAR_1, ((void*)0));
 if (VAR_12)
  return VAR_12;

 VAR_9 = FUNC_1(VAR_7->dev, sizeof(*VAR_9),
     VAR_3);
 if (!VAR_9) {
  VAR_12 = -VAR_2;
  goto error_encoder_cleanup;
 }

 VAR_11 = &VAR_9->connector;
 FUNC_4(VAR_11, &VAR_5);

 VAR_12 = FUNC_5(VAR_7, VAR_11, &VAR_4,
   VAR_0);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7->dev, "failed to initialize drm connector\n");
  goto error_encoder_cleanup;
 }

 VAR_12 = FUNC_2(VAR_11, VAR_10);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7->dev, "could not attach connector to encoder\n");
  FUNC_6(VAR_11);
  goto error_connector_cleanup;
 }

 return 0;

error_connector_cleanup:
 FUNC_3(VAR_11);

error_encoder_cleanup:
 FUNC_7(VAR_10);
 return VAR_12;
}
