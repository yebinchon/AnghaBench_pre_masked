
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * funcs; struct device* dev; } ;
struct rm68200 {TYPE_1__ panel; struct device* dev; int backlight; int supply; int reset_gpio; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct rm68200* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct mipi_dsi_device*) ;
 int FUNC_11 (struct mipi_dsi_device*,struct rm68200*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(struct mipi_dsi_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct rm68200 *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_10, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->reset_gpio = FUNC_3(VAR_10, "reset", VAR_3);
 if (FUNC_0(VAR_11->reset_gpio)) {
  VAR_12 = FUNC_1(VAR_11->reset_gpio);
  FUNC_2(VAR_10, "cannot get reset GPIO: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_11->supply = FUNC_6(VAR_10, "power");
 if (FUNC_0(VAR_11->supply)) {
  VAR_12 = FUNC_1(VAR_11->supply);
  if (VAR_12 != -VAR_1)
   FUNC_2(VAR_10, "cannot get regulator: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_11->backlight = FUNC_5(VAR_10);
 if (FUNC_0(VAR_11->backlight))
  return FUNC_1(VAR_11->backlight);

 FUNC_11(VAR_9, VAR_11);

 VAR_11->dev = VAR_10;

 VAR_9->lanes = 2;
 VAR_9->format = VAR_4;
 VAR_9->mode_flags = VAR_6 | VAR_7 |
     VAR_5;

 FUNC_8(&VAR_11->panel);
 VAR_11->panel.dev = VAR_10;
 VAR_11->panel.funcs = &VAR_8;

 FUNC_7(&VAR_11->panel);

 VAR_12 = FUNC_10(VAR_9);
 if (VAR_12 < 0) {
  FUNC_2(VAR_10, "mipi_dsi_attach() failed: %d\n", VAR_12);
  FUNC_9(&VAR_11->panel);
  return VAR_12;
 }

 return 0;
}
