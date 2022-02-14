
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct switch_dev {char* name; char* alias; int * ops; int vlans; int ports; int cpu_port; struct device_node* of_node; } ;
struct rt305x_esw {int port_map; int port_disable; int reg_initval_fct2; int reg_initval_fpa2; int reg_led_polarity; int irq; struct switch_dev swdev; int reg_rw_lock; int base; TYPE_1__* dev; } ;
struct resource {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct rt305x_esw* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,char*,struct rt305x_esw*) ;
 int FUNC_7 (struct rt305x_esw*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct rt305x_esw*,int ,int ) ;
 int FUNC_9 (struct device_node*,int ) ;
 int * FUNC_10 (struct device_node*,char*,int *) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct rt305x_esw*) ;
 int FUNC_13 (struct switch_dev*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_12)
{
 struct resource *VAR_13 = FUNC_11(VAR_12, VAR_3, 0);
 struct device_node *VAR_14 = VAR_12->dev.of_node;
 const __be32 *VAR_15, *VAR_16, *VAR_17;
 struct switch_dev *VAR_18;
 struct rt305x_esw *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_5(&VAR_12->dev, sizeof(*VAR_19), VAR_2);
 if (!VAR_19)
  return -VAR_1;

 VAR_19->dev = &VAR_12->dev;
 VAR_19->irq = FUNC_9(VAR_14, 0);
 VAR_19->base = FUNC_4(&VAR_12->dev, VAR_13);
 if (FUNC_0(VAR_19->base))
  return FUNC_1(VAR_19->base);

 VAR_15 = FUNC_10(VAR_14, "mediatek,portmap", ((void*)0));
 if (VAR_15)
  VAR_19->port_map = FUNC_2(*VAR_15);

 VAR_16 = FUNC_10(VAR_14, "mediatek,portdisable", ((void*)0));
 if (VAR_16)
  VAR_19->port_disable = FUNC_2(*VAR_16);

 VAR_17 = FUNC_10(VAR_14, "ralink,fct2", ((void*)0));
 if (VAR_17)
  VAR_19->reg_initval_fct2 = FUNC_2(*VAR_17);

 VAR_17 = FUNC_10(VAR_14, "ralink,fpa2", ((void*)0));
 if (VAR_17)
  VAR_19->reg_initval_fpa2 = FUNC_2(*VAR_17);

 VAR_17 = FUNC_10(VAR_14, "mediatek,led_polarity", ((void*)0));
 if (VAR_17)
  VAR_19->reg_led_polarity = FUNC_2(*VAR_17);

 VAR_18 = &VAR_19->swdev;
 VAR_18->of_node = VAR_12->dev.of_node;
 VAR_18->name = "rt305x-esw";
 VAR_18->alias = "rt305x";
 VAR_18->cpu_port = VAR_6;
 VAR_18->ports = VAR_4;
 VAR_18->vlans = VAR_5;
 VAR_18->ops = &VAR_11;

 VAR_20 = FUNC_13(VAR_18, ((void*)0));
 if (VAR_20 < 0) {
  FUNC_3(&VAR_12->dev, "register_switch failed\n");
  return VAR_20;
 }

 FUNC_12(VAR_12, VAR_19);

 FUNC_14(&VAR_19->reg_rw_lock);

 FUNC_7(VAR_19);

 VAR_17 = FUNC_10(VAR_14, "ralink,rgmii", ((void*)0));
 if (VAR_17 && FUNC_2(*VAR_17) == 1) {




  FUNC_3(&VAR_12->dev, "RGMII mode, not exporting switch device.\n");
  FUNC_15(&VAR_19->swdev);
  FUNC_12(VAR_12, ((void*)0));
  return -VAR_0;
 }

 VAR_20 = FUNC_6(&VAR_12->dev, VAR_19->irq, VAR_10, 0, "esw",
          VAR_19);

 if (!VAR_20) {
  FUNC_8(VAR_19, VAR_7, VAR_9);
  FUNC_8(VAR_19, ~VAR_7, VAR_8);
 }

 return VAR_20;
}
