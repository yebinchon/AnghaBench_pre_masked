
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int base; int owner; TYPE_1__* parent; int label; int set; int get; int direction_output; int direction_input; int free; int request; int ngpio; } ;
struct spear_spics {int last_off; TYPE_3__ chip; int cs_enable_shift; int cs_enable_mask; int cs_value_bit; int sw_enable_bit; int perip_cfg; int base; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*,struct spear_spics*) ;
 struct spear_spics* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 scalar_t__ FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct platform_device*,struct spear_spics*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11)
{
 struct device_node *VAR_12 = VAR_11->dev.of_node;
 struct spear_spics *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->base = FUNC_7(VAR_11, 0);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 if (FUNC_8(VAR_12, "st-spics,peripcfg-reg",
    &VAR_13->perip_cfg))
  goto err_dt_data;
 if (FUNC_8(VAR_12, "st-spics,sw-enable-bit",
    &VAR_13->sw_enable_bit))
  goto err_dt_data;
 if (FUNC_8(VAR_12, "st-spics,cs-value-bit",
    &VAR_13->cs_value_bit))
  goto err_dt_data;
 if (FUNC_8(VAR_12, "st-spics,cs-enable-mask",
    &VAR_13->cs_enable_mask))
  goto err_dt_data;
 if (FUNC_8(VAR_12, "st-spics,cs-enable-shift",
    &VAR_13->cs_enable_shift))
  goto err_dt_data;

 FUNC_9(VAR_11, VAR_13);

 VAR_13->chip.ngpio = VAR_3;
 VAR_13->chip.base = -1;
 VAR_13->chip.request = VAR_9;
 VAR_13->chip.free = VAR_7;
 VAR_13->chip.direction_input = VAR_5;
 VAR_13->chip.direction_output = VAR_6;
 VAR_13->chip.get = VAR_8;
 VAR_13->chip.set = VAR_10;
 VAR_13->chip.label = FUNC_4(&VAR_11->dev);
 VAR_13->chip.parent = &VAR_11->dev;
 VAR_13->chip.owner = VAR_4;
 VAR_13->last_off = -1;

 VAR_14 = FUNC_5(&VAR_11->dev, &VAR_13->chip, VAR_13);
 if (VAR_14) {
  FUNC_2(&VAR_11->dev, "unable to add gpio chip\n");
  return VAR_14;
 }

 FUNC_3(&VAR_11->dev, "spear spics registered\n");
 return 0;

err_dt_data:
 FUNC_2(&VAR_11->dev, "DT probe failed\n");
 return -VAR_0;
}
