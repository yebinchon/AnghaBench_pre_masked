
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int possible_crtcs; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int dpms; int polled; } ;
struct device {int of_node; } ;
struct TYPE_2__ {int notifier_call; } ;
struct cdn_dp_port {TYPE_1__ event_nb; int extcon; } ;
struct cdn_dp_device {int connected; int active; int active_port; int fw_loaded; int ports; int event_work; int dev; struct cdn_dp_port** port; struct drm_connector connector; struct drm_encoder encoder; struct drm_device* drm_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct cdn_dp_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct cdn_dp_device* FUNC_5 (struct device*) ;
 int FUNC_6 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_7 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_8 (struct drm_connector*) ;
 int FUNC_9 (struct drm_connector*,int *) ;
 int FUNC_10 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_11 (struct drm_encoder*) ;
 int FUNC_12 (struct drm_encoder*,int *) ;
 int FUNC_13 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_14 (struct drm_device*,int ) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_11, struct device *VAR_12, void *VAR_13)
{
 struct cdn_dp_device *VAR_14 = FUNC_5(VAR_11);
 struct drm_encoder *VAR_15;
 struct drm_connector *VAR_16;
 struct cdn_dp_port *VAR_17;
 struct drm_device *VAR_18 = VAR_13;
 int VAR_19, VAR_20;

 VAR_19 = FUNC_4(VAR_14);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_14->drm_dev = VAR_18;
 VAR_14->connected = 0;
 VAR_14->active = 0;
 VAR_14->active_port = -1;
 VAR_14->fw_loaded = 0;

 FUNC_3(&VAR_14->event_work, VAR_10);

 VAR_15 = &VAR_14->encoder;

 VAR_15->possible_crtcs = FUNC_14(VAR_18,
            VAR_11->of_node);
 FUNC_0("possible_crtcs = 0x%x\n", VAR_15->possible_crtcs);

 VAR_19 = FUNC_13(VAR_18, VAR_15, &VAR_7,
          VAR_3, ((void*)0));
 if (VAR_19) {
  FUNC_2("failed to initialize encoder with drm\n");
  return VAR_19;
 }

 FUNC_12(VAR_15, &VAR_8);

 VAR_16 = &VAR_14->connector;
 VAR_16->polled = VAR_0;
 VAR_16->dpms = VAR_2;

 VAR_19 = FUNC_10(VAR_18, VAR_16,
     &VAR_5,
     VAR_1);
 if (VAR_19) {
  FUNC_2("failed to initialize connector with drm\n");
  goto err_free_encoder;
 }

 FUNC_9(VAR_16, &VAR_6);

 VAR_19 = FUNC_7(VAR_16, VAR_15);
 if (VAR_19) {
  FUNC_2("failed to attach connector and encoder\n");
  goto err_free_connector;
 }

 for (VAR_20 = 0; VAR_20 < VAR_14->ports; VAR_20++) {
  VAR_17 = VAR_14->port[VAR_20];

  VAR_17->event_nb.notifier_call = VAR_9;
  VAR_19 = FUNC_6(VAR_14->dev, VAR_17->extcon,
          VAR_4,
          &VAR_17->event_nb);
  if (VAR_19) {
   FUNC_1(VAR_11,
          "register EXTCON_DISP_DP notifier err\n");
   goto err_free_connector;
  }
 }

 FUNC_15(VAR_11);

 FUNC_16(&VAR_14->event_work);

 return 0;

err_free_connector:
 FUNC_8(VAR_16);
err_free_encoder:
 FUNC_11(VAR_15);
 return VAR_19;
}
