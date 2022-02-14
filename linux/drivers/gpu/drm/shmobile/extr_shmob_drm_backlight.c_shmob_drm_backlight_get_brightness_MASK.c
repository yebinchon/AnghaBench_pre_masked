
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct shmob_drm_device {TYPE_3__* pdata; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct shmob_drm_connector {TYPE_2__ connector; } ;
struct shmob_drm_backlight_data {int (* get_brightness ) () ;} ;
struct backlight_device {int dummy; } ;
struct TYPE_6__ {struct shmob_drm_backlight_data backlight; } ;
struct TYPE_4__ {struct shmob_drm_device* dev_private; } ;


 struct shmob_drm_connector* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_0)
{
 struct shmob_drm_connector *VAR_1 = FUNC_0(VAR_0);
 struct shmob_drm_device *VAR_2 = VAR_1->connector.dev->dev_private;
 const struct shmob_drm_backlight_data *VAR_3 = &VAR_2->pdata->backlight;

 return VAR_3->get_brightness();
}
