
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct spi_device {int bits_per_word; int mode; struct device dev; } ;
struct TYPE_3__ {int * funcs; struct device* dev; } ;
struct nt39016 {TYPE_1__ drm_panel; int backlight; int map; int reset_gpio; int supply; int panel_info; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct nt39016* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct spi_device*,int *) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct spi_device*,struct nt39016*) ;
 int FUNC_12 (struct spi_device*) ;

__attribute__((used)) static int FUNC_13(struct spi_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct nt39016 *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->dev = VAR_10;
 FUNC_11(VAR_9, VAR_11);

 VAR_11->panel_info = FUNC_10(VAR_10);
 if (!VAR_11->panel_info)
  return -VAR_0;

 VAR_11->supply = FUNC_7(VAR_10, "power");
 if (FUNC_0(VAR_11->supply)) {
  FUNC_2(VAR_10, "Failed to get power supply");
  return FUNC_1(VAR_11->supply);
 }

 VAR_11->reset_gpio = FUNC_3(VAR_10, "reset", VAR_4);
 if (FUNC_0(VAR_11->reset_gpio)) {
  FUNC_2(VAR_10, "Failed to get reset GPIO");
  return FUNC_1(VAR_11->reset_gpio);
 }

 VAR_9->bits_per_word = 8;
 VAR_9->mode = VAR_6 | VAR_5;
 VAR_12 = FUNC_12(VAR_9);
 if (VAR_12) {
  FUNC_2(VAR_10, "Failed to setup SPI");
  return VAR_12;
 }

 VAR_11->map = FUNC_6(VAR_9, &VAR_8);
 if (FUNC_0(VAR_11->map)) {
  FUNC_2(VAR_10, "Failed to init regmap");
  return FUNC_1(VAR_11->map);
 }

 VAR_11->backlight = FUNC_5(VAR_10);
 if (FUNC_0(VAR_11->backlight)) {
  VAR_12 = FUNC_1(VAR_11->backlight);
  if (VAR_12 != -VAR_2)
   FUNC_2(VAR_10, "Failed to get backlight handle");
  return VAR_12;
 }

 FUNC_9(&VAR_11->drm_panel);
 VAR_11->drm_panel.dev = VAR_10;
 VAR_11->drm_panel.funcs = &VAR_7;

 VAR_12 = FUNC_8(&VAR_11->drm_panel);
 if (VAR_12 < 0) {
  FUNC_2(VAR_10, "Failed to register panel");
  return VAR_12;
 }

 return 0;
}
