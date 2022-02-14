
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct device* dev; int * funcs; } ;
struct wuxga_nt_panel {TYPE_2__* backlight; TYPE_3__ base; TYPE_1__* dsi; int supply; int * mode; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct wuxga_nt_panel *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dsi->dev;
 struct device_node *VAR_5;
 int VAR_6;

 VAR_3->mode = &VAR_1;

 VAR_3->supply = FUNC_2(VAR_4, "power");
 if (FUNC_0(VAR_3->supply))
  return FUNC_1(VAR_3->supply);

 VAR_5 = FUNC_7(VAR_4->of_node, "backlight", 0);
 if (VAR_5) {
  VAR_3->backlight = FUNC_5(VAR_5);
  FUNC_6(VAR_5);

  if (!VAR_3->backlight)
   return -VAR_0;
 }

 FUNC_4(&VAR_3->base);
 VAR_3->base.funcs = &VAR_2;
 VAR_3->base.dev = &VAR_3->dsi->dev;

 VAR_6 = FUNC_3(&VAR_3->base);
 if (VAR_6 < 0)
  goto put_backlight;

 return 0;

put_backlight:
 if (VAR_3->backlight)
  FUNC_8(&VAR_3->backlight->dev);

 return VAR_6;
}
