
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda998x_priv {struct gpio_desc* calib; TYPE_1__* hdmi; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int *,char*,int) ;
 struct gpio_desc* FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct tda998x_priv *VAR_2 = VAR_1;
 struct gpio_desc *VAR_3;

 VAR_3 = FUNC_3(&VAR_2->hdmi->dev, "nxp,calib", VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_2->hdmi->dev, "failed to get calibration gpio: %ld\n",
    FUNC_1(VAR_3));
  return FUNC_1(VAR_3);
 }

 VAR_2->calib = VAR_3;

 return 0;
}
