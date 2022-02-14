
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct mipi_dsi_device {int lanes; int mode_flags; int format; struct device dev; } ;
struct TYPE_5__ {int * funcs; struct device* dev; } ;
struct jh057n {TYPE_1__ panel; void* iovcc; void* vcc; void* backlight; struct device* dev; void* reset_gpio; } ;
struct TYPE_6__ {int vrefresh; int vdisplay; int hdisplay; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (void*) ;
 TYPE_4__ VAR_8 ;
 void* FUNC_4 (struct device*,char*,int ) ;
 struct jh057n* FUNC_5 (struct device*,int,int ) ;
 void* FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct jh057n*) ;
 int VAR_9 ;
 int FUNC_12 (struct mipi_dsi_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mipi_dsi_device*,struct jh057n*) ;

__attribute__((used)) static int FUNC_15(struct mipi_dsi_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct jh057n *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(VAR_11, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->reset_gpio = FUNC_4(VAR_11, "reset", VAR_3);
 if (FUNC_2(VAR_12->reset_gpio)) {
  FUNC_0(VAR_11, "cannot get reset gpio\n");
  return FUNC_3(VAR_12->reset_gpio);
 }

 FUNC_14(VAR_10, VAR_12);

 VAR_12->dev = VAR_11;

 VAR_10->lanes = 4;
 VAR_10->format = VAR_4;
 VAR_10->mode_flags = VAR_5 |
  VAR_6 | VAR_7;

 VAR_12->backlight = FUNC_6(VAR_11);
 if (FUNC_2(VAR_12->backlight))
  return FUNC_3(VAR_12->backlight);

 VAR_12->vcc = FUNC_7(VAR_11, "vcc");
 if (FUNC_2(VAR_12->vcc)) {
  VAR_13 = FUNC_3(VAR_12->vcc);
  if (VAR_13 != -VAR_1)
   FUNC_0(VAR_11,
          "Failed to request vcc regulator: %d\n",
          VAR_13);
  return VAR_13;
 }
 VAR_12->iovcc = FUNC_7(VAR_11, "iovcc");
 if (FUNC_2(VAR_12->iovcc)) {
  VAR_13 = FUNC_3(VAR_12->iovcc);
  if (VAR_13 != -VAR_1)
   FUNC_0(VAR_11,
          "Failed to request iovcc regulator: %d\n",
          VAR_13);
  return VAR_13;
 }

 FUNC_9(&VAR_12->panel);
 VAR_12->panel.dev = VAR_11;
 VAR_12->panel.funcs = &VAR_9;

 FUNC_8(&VAR_12->panel);

 VAR_13 = FUNC_12(VAR_10);
 if (VAR_13 < 0) {
  FUNC_0(VAR_11,
         "mipi_dsi_attach failed (%d). Is host ready?\n",
         VAR_13);
  FUNC_10(&VAR_12->panel);
  return VAR_13;
 }

 FUNC_1(VAR_11, "%ux%u@%u %ubpp dsi %udl - ready\n",
       VAR_8.hdisplay, VAR_8.vdisplay,
       VAR_8.vrefresh,
       FUNC_13(VAR_10->format), VAR_10->lanes);

 FUNC_11(VAR_12);
 return 0;
}
