
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {int pixelclock; int hactive; int vactive; } ;
struct panel_drv_data {int use_dsi_backlight; int extbldev; int * vddi; int * vpnl; scalar_t__ height_mm; scalar_t__ width_mm; TYPE_1__ vm; int * ext_te_gpio; int * reset_gpio; } ;
struct display_timing {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int * FUNC_4 (TYPE_2__*,char*,int ) ;
 int * FUNC_5 (TYPE_2__*,char*,int ) ;
 void* FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*,char*,struct display_timing*) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*,char*,int ) ;
 int FUNC_11 (struct device_node*,char*,scalar_t__*) ;
 struct panel_drv_data* FUNC_12 (struct platform_device*) ;
 int FUNC_13 (struct display_timing*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev.of_node;
 struct device_node *VAR_5;
 struct panel_drv_data *VAR_6 = FUNC_12(VAR_3);
 struct display_timing VAR_7;
 int VAR_8;

 VAR_6->reset_gpio = FUNC_4(&VAR_3->dev, "reset", VAR_2);
 if (FUNC_0(VAR_6->reset_gpio)) {
  VAR_8 = FUNC_1(VAR_6->reset_gpio);
  FUNC_2(&VAR_3->dev, "reset gpio request failed: %d", VAR_8);
  return VAR_8;
 }

 VAR_6->ext_te_gpio = FUNC_5(&VAR_3->dev, "te",
           VAR_1);
 if (FUNC_0(VAR_6->ext_te_gpio)) {
  VAR_8 = FUNC_1(VAR_6->ext_te_gpio);
  FUNC_2(&VAR_3->dev, "TE gpio request failed: %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_8(VAR_4, "panel-timing", &VAR_7);
 if (!VAR_8) {
  FUNC_13(&VAR_7, &VAR_6->vm);
  if (!VAR_6->vm.pixelclock)
   VAR_6->vm.pixelclock =
    VAR_6->vm.hactive * VAR_6->vm.vactive * 60;
 } else {
  FUNC_3(&VAR_3->dev,
    "failed to get video timing, using defaults\n");
 }

 VAR_6->width_mm = 0;
 FUNC_11(VAR_4, "width-mm", &VAR_6->width_mm);

 VAR_6->height_mm = 0;
 FUNC_11(VAR_4, "height-mm", &VAR_6->height_mm);

 VAR_6->vpnl = FUNC_6(&VAR_3->dev, "vpnl");
 if (FUNC_0(VAR_6->vpnl)) {
  VAR_8 = FUNC_1(VAR_6->vpnl);
  if (VAR_8 == -VAR_0)
   return VAR_8;
  VAR_6->vpnl = ((void*)0);
 }

 VAR_6->vddi = FUNC_6(&VAR_3->dev, "vddi");
 if (FUNC_0(VAR_6->vddi)) {
  VAR_8 = FUNC_1(VAR_6->vddi);
  if (VAR_8 == -VAR_0)
   return VAR_8;
  VAR_6->vddi = ((void*)0);
 }

 VAR_5 = FUNC_10(VAR_4, "backlight", 0);
 if (VAR_5) {
  VAR_6->extbldev = FUNC_7(VAR_5);
  FUNC_9(VAR_5);

  if (!VAR_6->extbldev)
   return -VAR_0;
 } else {

  VAR_6->use_dsi_backlight = 1;
 }



 return 0;
}
