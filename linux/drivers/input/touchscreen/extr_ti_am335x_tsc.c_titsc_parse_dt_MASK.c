
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct titsc {int wires; int x_plate_resistance; int coordinate_readouts; int charge_delay; int config_inp; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct device_node*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2,
     struct titsc *VAR_3)
{
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 int VAR_5;

 if (!VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_4, "ti,wires", &VAR_3->wires);
 if (VAR_5 < 0)
  return VAR_5;
 switch (VAR_3->wires) {
 case 4:
 case 5:
 case 8:
  break;
 default:
  return -VAR_1;
 }

 VAR_5 = FUNC_2(VAR_4, "ti,x-plate-resistance",
   &VAR_3->x_plate_resistance);
 if (VAR_5 < 0)
  return VAR_5;





 VAR_5 = FUNC_2(VAR_4, "ti,coordinate-readouts",
   &VAR_3->coordinate_readouts);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_2->dev, "please use 'ti,coordinate-readouts' instead\n");
  VAR_5 = FUNC_2(VAR_4, "ti,coordiante-readouts",
    &VAR_3->coordinate_readouts);
 }

 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_3->coordinate_readouts <= 0) {
  FUNC_1(&VAR_2->dev,
    "invalid co-ordinate readouts, resetting it to 5\n");
  VAR_3->coordinate_readouts = 5;
 }

 VAR_5 = FUNC_2(VAR_4, "ti,charge-delay",
       &VAR_3->charge_delay);




 if (VAR_5 < 0) {
  VAR_3->charge_delay = VAR_0;
  FUNC_1(&VAR_2->dev, "ti,charge-delay not specified\n");
 }

 return FUNC_3(VAR_4, "ti,wire-config",
   VAR_3->config_inp, FUNC_0(VAR_3->config_inp));
}
