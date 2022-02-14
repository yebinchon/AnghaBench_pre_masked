
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int family; } ;
struct nvif_device {TYPE_2__ info; } ;
struct nouveau_encoder {int dummy; } ;
struct TYPE_11__ {struct nvif_device device; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct nouveau_backlight {scalar_t__ id; TYPE_5__* dev; } ;
struct drm_connector {scalar_t__ connector_type; int kdev; int dev; } ;
struct backlight_properties {int member_0; } ;
struct backlight_ops {int dummy; } ;
struct TYPE_16__ {struct nouveau_backlight* backlight; } ;
struct TYPE_13__ {int brightness; } ;
struct TYPE_15__ {TYPE_4__* ops; TYPE_3__ props; } ;
struct TYPE_14__ {int (* get_brightness ) (TYPE_5__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct nouveau_drm*,char*) ;
 int FUNC_2 (struct nouveau_drm*,char*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 () ;
 TYPE_5__* FUNC_5 (char*,int ,struct nouveau_encoder*,struct backlight_ops const*,struct backlight_properties*) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_8 ;
 struct nouveau_encoder* FUNC_7 (struct drm_connector*,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (struct nouveau_backlight*) ;
 struct nouveau_backlight* FUNC_10 (int,int ) ;
 TYPE_6__* FUNC_11 (struct drm_connector*) ;
 struct nouveau_drm* FUNC_12 (int ) ;
 int FUNC_13 (char*,struct nouveau_backlight*) ;
 int FUNC_14 (struct nouveau_encoder*,struct backlight_properties*,struct backlight_ops const**) ;
 int FUNC_15 (struct nouveau_encoder*,struct backlight_properties*,struct backlight_ops const**) ;
 int FUNC_16 (TYPE_5__*) ;

int
FUNC_17(struct drm_connector *VAR_9)
{
 struct nouveau_drm *VAR_10 = FUNC_12(VAR_9->dev);
 struct nouveau_backlight *VAR_11;
 struct nouveau_encoder *VAR_12 = ((void*)0);
 struct nvif_device *VAR_13 = &VAR_10->client.device;
 char VAR_14[VAR_0];
 struct backlight_properties VAR_15 = {0};
 const struct backlight_ops *VAR_16;
 int VAR_17;

 if (FUNC_4()) {
  FUNC_2(VAR_10, "Apple GMUX detected: not registering Nouveau backlight interface\n");
  return 0;
 }

 if (VAR_9->connector_type == VAR_3)
  VAR_12 = FUNC_7(VAR_9, VAR_2);
 else if (VAR_9->connector_type == VAR_4)
  VAR_12 = FUNC_7(VAR_9, VAR_1);
 else
  return 0;

 if (!VAR_12)
  return 0;

 switch (VAR_13->info.family) {
 case 135:
  VAR_17 = FUNC_14(VAR_12, &VAR_15, &VAR_16);
  break;
 case 130:
 case 134:
 case 133:
 case 132:
 case 131:
 case 128:
 case 129:
  VAR_17 = FUNC_15(VAR_12, &VAR_15, &VAR_16);
  break;
 default:
  return 0;
 }

 if (VAR_17 == -VAR_5)
  return 0;
 else if (VAR_17)
  return VAR_17;

 VAR_11 = FUNC_10(sizeof(*VAR_11), VAR_7);
 if (!VAR_11)
  return -VAR_6;

 if (!FUNC_13(VAR_14, VAR_11)) {
  FUNC_1(VAR_10, "Failed to retrieve a unique name for the backlight interface\n");
  goto fail_alloc;
 }

 VAR_11->dev = FUNC_5(VAR_14, VAR_9->kdev,
         VAR_12, VAR_16, &VAR_15);
 if (FUNC_0(VAR_11->dev)) {
  if (VAR_11->id >= 0)
   FUNC_8(&VAR_8, VAR_11->id);
  VAR_17 = FUNC_3(VAR_11->dev);
  goto fail_alloc;
 }

 FUNC_11(VAR_9)->backlight = VAR_11;
 VAR_11->dev->props.brightness = VAR_11->dev->ops->get_brightness(VAR_11->dev);
 FUNC_6(VAR_11->dev);

 return 0;

fail_alloc:
 FUNC_9(VAR_11);
 return VAR_17;
}
