
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_hdmi_connector {struct drm_encoder* encoder; struct sti_hdmi* hdmi; } ;
struct TYPE_2__ {int cea; } ;
struct sti_hdmi {struct drm_connector* drm_connector; TYPE_1__ audio; int ddc_adapt; struct drm_device* drm_dev; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int polled; } ;
struct drm_bridge {int * funcs; struct sti_hdmi* driver_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sti_hdmi* FUNC_1 (struct device*) ;
 void* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct drm_encoder*,struct drm_bridge*,int *) ;
 int FUNC_4 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_5 (struct drm_connector*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_connector*,int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sti_hdmi*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct drm_device*,struct drm_connector*) ;
 struct drm_encoder* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct device*,struct sti_hdmi*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_9, struct device *VAR_10, void *VAR_11)
{
 struct sti_hdmi *VAR_12 = FUNC_1(VAR_9);
 struct drm_device *VAR_13 = VAR_11;
 struct drm_encoder *VAR_14;
 struct sti_hdmi_connector *VAR_15;
 struct drm_connector *VAR_16;
 struct drm_bridge *VAR_17;
 int VAR_18;


 VAR_12->drm_dev = VAR_13;

 VAR_14 = FUNC_10(VAR_13);
 if (!VAR_14)
  return -VAR_2;

 VAR_15 = FUNC_2(VAR_9, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->hdmi = VAR_12;

 VAR_17 = FUNC_2(VAR_9, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->driver_private = VAR_12;
 VAR_17->funcs = &VAR_6;
 FUNC_3(VAR_14, VAR_17, ((void*)0));

 VAR_15->encoder = VAR_14;

 VAR_16 = (struct drm_connector *)VAR_15;

 VAR_16->polled = VAR_0;

 FUNC_6(VAR_13, VAR_16,
        &VAR_7,
        VAR_1,
        VAR_12->ddc_adapt);
 FUNC_5(VAR_16,
   &VAR_8);


 FUNC_9(VAR_13, VAR_16);

 VAR_12->drm_connector = VAR_16;

 VAR_18 = FUNC_4(VAR_16, VAR_14);
 if (VAR_18) {
  FUNC_0("Failed to attach a connector to a encoder\n");
  goto err_sysfs;
 }

 VAR_18 = FUNC_11(VAR_9, VAR_12);
 if (VAR_18) {
  FUNC_0("Failed to attach an audio codec\n");
  goto err_sysfs;
 }


 VAR_18 = FUNC_7(&VAR_12->audio.cea);
 if (VAR_18) {
  FUNC_0("Failed to init audio infoframe\n");
  goto err_sysfs;
 }


 FUNC_8(VAR_12, VAR_4, VAR_5);

 return 0;

err_sysfs:
 VAR_12->drm_connector = ((void*)0);
 return -VAR_2;
}
