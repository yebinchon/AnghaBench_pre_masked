
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int interlace_allowed; int polled; } ;
struct dw_hdmi {int cec_notifier_mutex; struct cec_notifier* cec_notifier; int dev; int ddc; struct drm_connector connector; } ;
struct drm_encoder {int dummy; } ;
struct drm_bridge {int dev; struct drm_encoder* encoder; struct dw_hdmi* driver_private; } ;
struct cec_notifier {int dummy; } ;
struct cec_connector_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cec_connector_info*,struct drm_connector*) ;
 struct cec_notifier* FUNC_1 (int ,int *,struct cec_connector_info*) ;
 int FUNC_2 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (int ,struct drm_connector*,int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct drm_bridge *VAR_5)
{
 struct dw_hdmi *VAR_6 = VAR_5->driver_private;
 struct drm_encoder *VAR_7 = VAR_5->encoder;
 struct drm_connector *VAR_8 = &VAR_6->connector;
 struct cec_connector_info VAR_9;
 struct cec_notifier *VAR_10;

 VAR_8->interlace_allowed = 1;
 VAR_8->polled = VAR_0;

 FUNC_3(VAR_8, &VAR_4);

 FUNC_4(VAR_5->dev, VAR_8,
        &VAR_3,
        VAR_1,
        VAR_6->ddc);

 FUNC_2(VAR_8, VAR_7);

 FUNC_0(&VAR_9, VAR_8);

 VAR_10 = FUNC_1(VAR_6->dev, ((void*)0), &VAR_9);
 if (!VAR_10)
  return -VAR_2;

 FUNC_5(&VAR_6->cec_notifier_mutex);
 VAR_6->cec_notifier = VAR_10;
 FUNC_6(&VAR_6->cec_notifier_mutex);

 return 0;
}
