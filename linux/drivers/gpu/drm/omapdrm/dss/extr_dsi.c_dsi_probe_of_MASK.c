
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct property {int dummy; } ;
struct omap_dsi_pin_config {int num_pins; int* pins; } ;
struct dsi_data {int num_lanes_supported; TYPE_1__* dev; int output; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *,struct omap_dsi_pin_config*) ;
 struct property* FUNC_2 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_3 (struct device_node*,int ,int ) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_6(struct dsi_data *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev->of_node;
 struct property *VAR_3;
 u32 VAR_4[10];
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 struct device_node *VAR_9;
 struct omap_dsi_pin_config VAR_10;

 VAR_9 = FUNC_3(VAR_2, 0, 0);
 if (!VAR_9)
  return 0;

 VAR_3 = FUNC_2(VAR_9, "lanes", &VAR_5);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_1->dev, "failed to find lane data\n");
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_6 = VAR_5 / sizeof(u32);

 if (VAR_6 < 4 || VAR_6 % 2 != 0 ||
  VAR_6 > VAR_1->num_lanes_supported * 2) {
  FUNC_0(VAR_1->dev, "bad number of lanes\n");
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_7 = FUNC_5(VAR_9, "lanes", VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_1->dev, "failed to read lane data\n");
  goto err;
 }

 VAR_10.num_pins = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
  VAR_10.pins[VAR_8] = (int)VAR_4[VAR_8];

 VAR_7 = FUNC_1(&VAR_1->output, &VAR_10);
 if (VAR_7) {
  FUNC_0(VAR_1->dev, "failed to configure pins");
  goto err;
 }

 FUNC_4(VAR_9);

 return 0;

err:
 FUNC_4(VAR_9);
 return VAR_7;
}
