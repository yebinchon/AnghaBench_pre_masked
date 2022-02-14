
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct shmob_drm_device {TYPE_3__* pdata; } ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct shmob_drm_connector {TYPE_2__ connector; } ;
struct shmob_drm_backlight_data {int (* set_brightness ) (int) ;} ;
struct TYPE_8__ {int brightness; scalar_t__ power; int state; } ;
struct backlight_device {TYPE_4__ props; } ;
struct TYPE_7__ {struct shmob_drm_backlight_data backlight; } ;
struct TYPE_5__ {struct shmob_drm_device* dev_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct shmob_drm_connector* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_2)
{
 struct shmob_drm_connector *VAR_3 = FUNC_0(VAR_2);
 struct shmob_drm_device *VAR_4 = VAR_3->connector.dev->dev_private;
 const struct shmob_drm_backlight_data *VAR_5 = &VAR_4->pdata->backlight;
 int VAR_6 = VAR_2->props.brightness;

 if (VAR_2->props.power != VAR_1 ||
     VAR_2->props.state & VAR_0)
  VAR_6 = 0;

 return VAR_5->set_brightness(VAR_6);
}
