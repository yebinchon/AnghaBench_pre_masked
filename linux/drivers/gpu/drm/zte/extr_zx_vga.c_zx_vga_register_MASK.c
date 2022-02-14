
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int polled; } ;
struct drm_encoder {int possible_crtcs; } ;
struct zx_vga {struct drm_connector connector; struct device* dev; struct drm_encoder encoder; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,int *) ;
 int FUNC_7 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_8, struct zx_vga *VAR_9)
{
 struct drm_encoder *VAR_10 = &VAR_9->encoder;
 struct drm_connector *VAR_11 = &VAR_9->connector;
 struct device *VAR_12 = VAR_9->dev;
 int VAR_13;

 VAR_10->possible_crtcs = VAR_3;

 VAR_13 = FUNC_7(VAR_8, VAR_10, &VAR_6,
          VAR_2, ((void*)0));
 if (VAR_13) {
  FUNC_0(VAR_12, "failed to init encoder: %d\n", VAR_13);
  return VAR_13;
 };

 FUNC_6(VAR_10, &VAR_7);

 VAR_9->connector.polled = VAR_0;

 VAR_13 = FUNC_4(VAR_8, VAR_11, &VAR_4,
     VAR_1);
 if (VAR_13) {
  FUNC_0(VAR_12, "failed to init connector: %d\n", VAR_13);
  goto clean_encoder;
 };

 FUNC_3(VAR_11, &VAR_5);

 VAR_13 = FUNC_1(VAR_11, VAR_10);
 if (VAR_13) {
  FUNC_0(VAR_12, "failed to attach encoder: %d\n", VAR_13);
  goto clean_connector;
 };

 return 0;

clean_connector:
 FUNC_2(VAR_11);
clean_encoder:
 FUNC_5(VAR_10);
 return VAR_13;
}
