
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * funcs; TYPE_3__* dev; } ;
struct st7789v {TYPE_1__* backlight; TYPE_2__ panel; int reset; int power; struct spi_device* spi; } ;
struct TYPE_9__ {int of_node; } ;
struct spi_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 struct st7789v* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct spi_device*,struct st7789v*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_5)
{
 struct device_node *VAR_6;
 struct st7789v *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 FUNC_11(VAR_5, VAR_7);
 VAR_7->spi = VAR_5;

 VAR_7->panel.dev = &VAR_5->dev;
 VAR_7->panel.funcs = &VAR_4;

 VAR_7->power = FUNC_5(&VAR_5->dev, "power");
 if (FUNC_0(VAR_7->power))
  return FUNC_1(VAR_7->power);

 VAR_7->reset = FUNC_3(&VAR_5->dev, "reset", VAR_3);
 if (FUNC_0(VAR_7->reset)) {
  FUNC_2(&VAR_5->dev, "Couldn't get our reset line\n");
  return FUNC_1(VAR_7->reset);
 }

 VAR_6 = FUNC_9(VAR_5->dev.of_node, "backlight", 0);
 if (VAR_6) {
  VAR_7->backlight = FUNC_7(VAR_6);
  FUNC_8(VAR_6);

  if (!VAR_7->backlight)
   return -VAR_1;
 }

 VAR_8 = FUNC_6(&VAR_7->panel);
 if (VAR_8 < 0)
  goto err_free_backlight;

 return 0;

err_free_backlight:
 if (VAR_7->backlight)
  FUNC_10(&VAR_7->backlight->dev);

 return VAR_8;
}
