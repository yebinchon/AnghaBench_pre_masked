
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct resource*,struct resource*,struct resource*,unsigned int,int,int *,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct device_node*,int,struct resource*) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,...) ;
 int VAR_2 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 int VAR_4;
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 struct resource VAR_6;
 struct resource VAR_7;
 struct resource *VAR_8;
 unsigned int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 bool VAR_12;

 VAR_4 = FUNC_3(VAR_5, 0, &VAR_6);
 if (VAR_4) {
  FUNC_1(&VAR_3->dev, "can't get IO address from "
   "device tree\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_3(VAR_5, 1, &VAR_7);
 if (VAR_4) {
  FUNC_1(&VAR_3->dev, "can't get CTL address from "
   "device tree\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(VAR_3, VAR_1, 0);

 FUNC_5(VAR_5, "reg-shift", &VAR_9);

 if (!FUNC_5(VAR_5, "pio-mode", &VAR_10)) {
  if (VAR_10 > 6) {
   FUNC_1(&VAR_3->dev, "invalid pio-mode\n");
   return -VAR_0;
  }
 } else {
  FUNC_2(&VAR_3->dev, "pio-mode unspecified, assuming PIO0\n");
 }

 VAR_12 = FUNC_4(VAR_5, "ata-generic,use16bit");

 VAR_11 = 1 << VAR_10;
 VAR_11 |= (1 << VAR_10) - 1;

 return FUNC_0(&VAR_3->dev, &VAR_6, &VAR_7, VAR_8,
         VAR_9, VAR_11, &VAR_2,
         VAR_12);
}
