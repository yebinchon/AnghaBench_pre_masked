
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_dvo_connector {struct drm_encoder* encoder; struct sti_dvo* dvo; } ;
struct TYPE_2__ {int of_node; } ;
struct sti_dvo {struct drm_encoder* encoder; struct drm_bridge* bridge; TYPE_1__ dev; struct drm_device* drm_dev; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int polled; } ;
struct drm_bridge {int of_node; int * funcs; struct sti_dvo* driver_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sti_dvo* FUNC_1 (struct device*) ;
 void* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct drm_bridge*) ;
 int FUNC_4 (struct drm_encoder*,struct drm_bridge*,int *) ;
 int FUNC_5 (struct drm_bridge*) ;
 int FUNC_6 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_7 (struct drm_connector*,int *) ;
 int FUNC_8 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct drm_encoder* FUNC_9 (struct drm_device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_8, struct device *VAR_9, void *VAR_10)
{
 struct sti_dvo *VAR_11 = FUNC_1(VAR_8);
 struct drm_device *VAR_12 = VAR_10;
 struct drm_encoder *VAR_13;
 struct sti_dvo_connector *VAR_14;
 struct drm_connector *VAR_15;
 struct drm_bridge *VAR_16;
 int VAR_17;


 VAR_11->drm_dev = VAR_12;

 VAR_13 = FUNC_9(VAR_12);
 if (!VAR_13)
  return -VAR_3;

 VAR_14 = FUNC_2(VAR_8, sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_3;

 VAR_14->dvo = VAR_11;

 VAR_16 = FUNC_2(VAR_8, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_3;

 VAR_16->driver_private = VAR_11;
 VAR_16->funcs = &VAR_5;
 VAR_16->of_node = VAR_11->dev.of_node;
 FUNC_3(VAR_16);

 VAR_17 = FUNC_4(VAR_13, VAR_16, ((void*)0));
 if (VAR_17) {
  FUNC_0("Failed to attach bridge\n");
  return VAR_17;
 }

 VAR_11->bridge = VAR_16;
 VAR_14->encoder = VAR_13;
 VAR_11->encoder = VAR_13;

 VAR_15 = (struct drm_connector *)VAR_14;

 VAR_15->polled = VAR_0;

 FUNC_8(VAR_12, VAR_15,
      &VAR_6, VAR_1);
 FUNC_7(VAR_15,
     &VAR_7);

 VAR_17 = FUNC_6(VAR_15, VAR_13);
 if (VAR_17) {
  FUNC_0("Failed to attach a connector to a encoder\n");
  goto err_sysfs;
 }

 return 0;

err_sysfs:
 FUNC_5(VAR_16);
 return -VAR_2;
}
