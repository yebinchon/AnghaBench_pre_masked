
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * funcs; struct device* dev; } ;
struct s6e8aa0 {TYPE_1__ panel; scalar_t__ brightness; int reset_gpio; TYPE_4__* supplies; struct device* dev; } ;
struct device {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; struct device dev; } ;
struct TYPE_7__ {char* supply; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct s6e8aa0* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct mipi_dsi_device*) ;
 int FUNC_11 (struct mipi_dsi_device*,struct s6e8aa0*) ;
 int VAR_13 ;
 int FUNC_12 (struct s6e8aa0*) ;

__attribute__((used)) static int FUNC_13(struct mipi_dsi_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct s6e8aa0 *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_5(VAR_15, sizeof(struct s6e8aa0), VAR_2);
 if (!VAR_16)
  return -VAR_0;

 FUNC_11(VAR_14, VAR_16);

 VAR_16->dev = VAR_15;

 VAR_14->lanes = 4;
 VAR_14->format = VAR_4;
 VAR_14->mode_flags = VAR_6 | VAR_8
  | VAR_10 | VAR_9
  | VAR_11 | VAR_5
  | VAR_12 | VAR_7;

 VAR_17 = FUNC_12(VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_16->supplies[0].supply = "vdd3";
 VAR_16->supplies[1].supply = "vci";
 VAR_17 = FUNC_6(VAR_15, FUNC_0(VAR_16->supplies),
          VAR_16->supplies);
 if (VAR_17 < 0) {
  FUNC_3(VAR_15, "failed to get regulators: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_16->reset_gpio = FUNC_4(VAR_15, "reset", VAR_3);
 if (FUNC_1(VAR_16->reset_gpio)) {
  FUNC_3(VAR_15, "cannot get reset-gpios %ld\n",
   FUNC_2(VAR_16->reset_gpio));
  return FUNC_2(VAR_16->reset_gpio);
 }

 VAR_16->brightness = VAR_1 - 1;

 FUNC_8(&VAR_16->panel);
 VAR_16->panel.dev = VAR_15;
 VAR_16->panel.funcs = &VAR_13;

 VAR_17 = FUNC_7(&VAR_16->panel);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_10(VAR_14);
 if (VAR_17 < 0)
  FUNC_9(&VAR_16->panel);

 return VAR_17;
}
