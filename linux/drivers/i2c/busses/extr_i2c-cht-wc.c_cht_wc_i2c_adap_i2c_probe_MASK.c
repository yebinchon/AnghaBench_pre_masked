
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int of_node; int parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct intel_soc_pmic {int regmap; } ;
struct i2c_board_info {char* type; int addr; char* dev_name; scalar_t__ irq; int * platform_data; int properties; } ;
struct TYPE_9__ {TYPE_6__* parent; } ;
struct TYPE_10__ {TYPE_1__ dev; int name; int * lock_ops; int * algo; int class; int owner; } ;
struct cht_wc_i2c_adap {int irq_domain; TYPE_2__ adapter; int client; scalar_t__ client_irq; int irqchip; int irq_mask; int regmap; int old_irq_mask; int irqchip_lock; int adap_lock; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*,int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_6__*,char*) ;
 struct intel_soc_pmic* FUNC_2 (int ) ;
 struct cht_wc_i2c_adap* FUNC_3 (TYPE_6__*,int,int ) ;
 int FUNC_4 (TYPE_6__*,int,int *,int ,int ,char*,struct cht_wc_i2c_adap*) ;
 int VAR_16 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct i2c_board_info*) ;
 int FUNC_8 (TYPE_2__*,struct cht_wc_i2c_adap*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int,int *,int *) ;
 int FUNC_12 (int ) ;
 int VAR_17 ;
 int FUNC_13 (scalar_t__,int *,int ) ;
 int FUNC_14 (scalar_t__,struct cht_wc_i2c_adap*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*,struct cht_wc_i2c_adap*) ;
 int FUNC_18 (int ,int ,int*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,char*,int) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_18)
{
 struct intel_soc_pmic *VAR_19 = FUNC_2(VAR_18->dev.parent);
 struct cht_wc_i2c_adap *VAR_20;
 struct i2c_board_info VAR_21 = {
  .type = "bq24190",
  .addr = 0x6b,
  .dev_name = "bq24190",
  .properties = VAR_11,
  .platform_data = &VAR_10,
 };
 int VAR_22, VAR_23, VAR_24;

 VAR_24 = FUNC_16(VAR_18, 0);
 if (VAR_24 < 0) {
  FUNC_1(&VAR_18->dev, "Error missing irq resource\n");
  return -VAR_4;
 }

 VAR_20 = FUNC_3(&VAR_18->dev, sizeof(*VAR_20), VAR_6);
 if (!VAR_20)
  return -VAR_5;

 FUNC_9(&VAR_20->wait);
 FUNC_15(&VAR_20->adap_lock);
 FUNC_15(&VAR_20->irqchip_lock);
 VAR_20->irqchip = VAR_15;
 VAR_20->regmap = VAR_19->regmap;
 VAR_20->adapter.owner = VAR_9;
 VAR_20->adapter.class = VAR_7;
 VAR_20->adapter.algo = &VAR_12;
 VAR_20->adapter.lock_ops = &VAR_13;
 FUNC_20(VAR_20->adapter.name, "PMIC I2C Adapter",
  sizeof(VAR_20->adapter.name));
 VAR_20->adapter.dev.parent = &VAR_18->dev;


 VAR_20->old_irq_mask = VAR_20->irq_mask = ~VAR_1;

 VAR_22 = FUNC_18(VAR_20->regmap, VAR_3, &VAR_23);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_19(VAR_20->regmap, VAR_0, ~VAR_20->irq_mask);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_19(VAR_20->regmap, VAR_2, VAR_20->irq_mask);
 if (VAR_22)
  return VAR_22;


 VAR_20->irq_domain = FUNC_11(VAR_18->dev.of_node, 1,
       &VAR_17, ((void*)0));
 if (!VAR_20->irq_domain)
  return -VAR_5;

 VAR_20->client_irq = FUNC_10(VAR_20->irq_domain, 0);
 if (!VAR_20->client_irq) {
  VAR_22 = -VAR_5;
  goto remove_irq_domain;
 }

 FUNC_14(VAR_20->client_irq, VAR_20);
 FUNC_13(VAR_20->client_irq, &VAR_20->irqchip,
     VAR_16);

 VAR_22 = FUNC_4(&VAR_18->dev, VAR_24, ((void*)0),
     VAR_14,
     VAR_8, "PMIC I2C Adapter", VAR_20);
 if (VAR_22)
  goto remove_irq_domain;

 FUNC_8(&VAR_20->adapter, VAR_20);
 VAR_22 = FUNC_5(&VAR_20->adapter);
 if (VAR_22)
  goto remove_irq_domain;
 if (FUNC_0("INT33FE", ((void*)0), -1)) {
  VAR_21.irq = VAR_20->client_irq;
  VAR_20->client = FUNC_7(&VAR_20->adapter, &VAR_21);
  if (!VAR_20->client) {
   VAR_22 = -VAR_5;
   goto del_adapter;
  }
 }

 FUNC_17(VAR_18, VAR_20);
 return 0;

del_adapter:
 FUNC_6(&VAR_20->adapter);
remove_irq_domain:
 FUNC_12(VAR_20->irq_domain);
 return VAR_22;
}
