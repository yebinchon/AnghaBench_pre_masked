
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct platform_device {int name; TYPE_1__ dev; } ;
struct intel_soc_pmic {int regmap; } ;
struct cht_wc_extcon_data {TYPE_1__* dev; int regmap; int edev; int previous_cable; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct cht_wc_extcon_data*,int) ;
 int VAR_9 ;
 int FUNC_3 (struct cht_wc_extcon_data*) ;
 int FUNC_4 (struct cht_wc_extcon_data*,int) ;
 int FUNC_5 (struct cht_wc_extcon_data*,int ) ;
 int FUNC_6 (struct cht_wc_extcon_data*,int) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 struct intel_soc_pmic* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 struct cht_wc_extcon_data* FUNC_11 (TYPE_1__*,int,int ) ;
 int FUNC_12 (TYPE_1__*,int,int *,int ,int ,int ,struct cht_wc_extcon_data*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct cht_wc_extcon_data*) ;
 int FUNC_15 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_10)
{
 struct intel_soc_pmic *VAR_11 = FUNC_8(VAR_10->dev.parent);
 struct cht_wc_extcon_data *VAR_12;
 unsigned long VAR_13 = ~(VAR_2 | VAR_1);
 int VAR_14, VAR_15;

 VAR_14 = FUNC_13(VAR_10, 0);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_12 = FUNC_11(&VAR_10->dev, sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return -VAR_3;

 VAR_12->dev = &VAR_10->dev;
 VAR_12->regmap = VAR_11->regmap;
 VAR_12->previous_cable = VAR_4;


 VAR_12->edev = FUNC_9(VAR_12->dev, VAR_8);
 if (FUNC_0(VAR_12->edev))
  return FUNC_1(VAR_12->edev);
 FUNC_4(VAR_12, 0);


 VAR_15 = FUNC_6(VAR_12, 1);
 if (VAR_15)
  goto disable_sw_control;


 FUNC_2(VAR_12, 0);


 VAR_15 = FUNC_10(VAR_12->dev, VAR_12->edev);
 if (VAR_15) {
  FUNC_7(VAR_12->dev, "Error registering extcon device: %d\n", VAR_15);
  goto disable_sw_control;
 }


 FUNC_5(VAR_12, VAR_7);


 FUNC_3(VAR_12);

 VAR_15 = FUNC_12(VAR_12->dev, VAR_14, ((void*)0), VAR_9,
     VAR_6, VAR_10->name, VAR_12);
 if (VAR_15) {
  FUNC_7(VAR_12->dev, "Error requesting interrupt: %d\n", VAR_15);
  goto disable_sw_control;
 }


 VAR_15 = FUNC_15(VAR_12->regmap, VAR_0, VAR_13);
 if (VAR_15) {
  FUNC_7(VAR_12->dev, "Error writing irq-mask: %d\n", VAR_15);
  goto disable_sw_control;
 }

 FUNC_14(VAR_10, VAR_12);

 return 0;

disable_sw_control:
 FUNC_6(VAR_12, 0);
 return VAR_15;
}
