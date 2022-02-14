
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shmob_drm_device {TYPE_1__* pdata; } ;
struct drm_connector {struct drm_device* dev; } ;
struct shmob_drm_connector {struct backlight_device* backlight; struct drm_connector connector; } ;
struct shmob_drm_backlight_data {scalar_t__ max_brightness; int name; } ;
struct drm_device {int dev; struct shmob_drm_device* dev_private; } ;
struct TYPE_4__ {int power; scalar_t__ brightness; scalar_t__ max_brightness; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_3__ {struct shmob_drm_backlight_data backlight; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int ,int ,struct shmob_drm_connector*,int *,int *) ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_1 ;

int FUNC_5(struct shmob_drm_connector *VAR_2)
{
 struct shmob_drm_device *VAR_3 = VAR_2->connector.dev->dev_private;
 const struct shmob_drm_backlight_data *VAR_4 = &VAR_3->pdata->backlight;
 struct drm_connector *VAR_5 = &VAR_2->connector;
 struct drm_device *VAR_6 = VAR_5->dev;
 struct backlight_device *VAR_7;

 if (!VAR_4->max_brightness)
  return 0;

 VAR_7 = FUNC_2(VAR_4->name, VAR_6->dev, VAR_2,
           &VAR_1, ((void*)0));
 if (FUNC_0(VAR_7)) {
  FUNC_4(VAR_6->dev, "unable to register backlight device: %ld\n",
   FUNC_1(VAR_7));
  return FUNC_1(VAR_7);
 }

 VAR_7->props.max_brightness = VAR_4->max_brightness;
 VAR_7->props.brightness = VAR_4->max_brightness;
 VAR_7->props.power = VAR_0;
 FUNC_3(VAR_7);

 VAR_2->backlight = VAR_7;
 return 0;
}
