
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int irq; struct device dev; } ;
struct adv7511_link_config {int dummy; } ;
struct TYPE_12__ {scalar_t__ of_node; int * funcs; } ;
struct adv7511 {int powered; int type; TYPE_1__* i2c_edid; TYPE_1__* i2c_packet; scalar_t__ cec_clk; TYPE_1__* i2c_cec; TYPE_6__ bridge; int wq; int hpd_work; TYPE_1__* regmap; TYPE_1__* gpio_pd; int status; struct i2c_client* i2c_main; } ;
typedef int link_config ;
typedef enum adv7511_type { ____Placeholder_adv7511_type } adv7511_type ;
struct TYPE_11__ {int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct device*,struct adv7511*) ;
 int VAR_12 ;
 int FUNC_5 (struct device*,struct adv7511*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct adv7511*) ;
 int FUNC_7 (struct adv7511*) ;
 int VAR_15 ;
 int FUNC_8 (struct adv7511*,int) ;
 int FUNC_9 (scalar_t__,struct adv7511_link_config*) ;
 int FUNC_10 (struct adv7511*) ;
 int VAR_16 ;
 int FUNC_11 (struct adv7511*,struct adv7511_link_config*) ;
 int FUNC_12 (struct adv7511*) ;
 int FUNC_13 (scalar_t__,struct adv7511*) ;
 int FUNC_14 (struct adv7511*) ;
 int FUNC_15 (scalar_t__) ;
 int VAR_17 ;
 int FUNC_16 (struct device*,char*,unsigned int) ;
 int FUNC_17 (struct device*,char*) ;
 int FUNC_18 (struct device*) ;
 TYPE_1__* FUNC_19 (struct device*,char*,int ) ;
 struct adv7511* FUNC_20 (struct device*,int,int ) ;
 TYPE_1__* FUNC_21 (struct i2c_client*,int *) ;
 int FUNC_22 (struct device*,int ,int *,int ,int ,int ,struct adv7511*) ;
 int FUNC_23 (TYPE_6__*) ;
 int FUNC_24 (TYPE_1__*,int ) ;
 void* FUNC_25 (struct i2c_client*,char*,int ) ;
 int FUNC_26 (struct i2c_client*,struct adv7511*) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct adv7511_link_config*,int ,int) ;
 scalar_t__ FUNC_30 (struct device*) ;
 int FUNC_31 (TYPE_1__*,int ,unsigned int*) ;
 int FUNC_32 (TYPE_1__*,int ,int ) ;
 int FUNC_33 (TYPE_1__*,int ,int) ;
 int FUNC_34 (int,int) ;

__attribute__((used)) static int FUNC_35(struct i2c_client *VAR_18, const struct i2c_device_id *VAR_19)
{
 struct adv7511_link_config VAR_20;
 struct adv7511 *VAR_21;
 struct device *VAR_22 = &VAR_18->dev;
 unsigned int VAR_23;
 int VAR_24;

 if (!VAR_22->of_node)
  return -VAR_7;

 VAR_21 = FUNC_20(VAR_22, sizeof(*VAR_21), VAR_9);
 if (!VAR_21)
  return -VAR_8;

 VAR_21->i2c_main = VAR_18;
 VAR_21->powered = 0;
 VAR_21->status = VAR_17;

 if (VAR_22->of_node)
  VAR_21->type = (enum adv7511_type)FUNC_30(VAR_22);
 else
  VAR_21->type = VAR_19->driver_data;

 FUNC_29(&VAR_20, 0, sizeof(VAR_20));

 if (VAR_21->type == VAR_0)
  VAR_24 = FUNC_9(VAR_22->of_node, &VAR_20);
 else
  VAR_24 = FUNC_13(VAR_22->of_node, VAR_21);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_7(VAR_21);
 if (VAR_24) {
  FUNC_17(VAR_22, "failed to init regulators\n");
  return VAR_24;
 }





 VAR_21->gpio_pd = FUNC_19(VAR_22, "pd", VAR_10);
 if (FUNC_2(VAR_21->gpio_pd)) {
  VAR_24 = FUNC_3(VAR_21->gpio_pd);
  goto uninit_regulators;
 }

 if (VAR_21->gpio_pd) {
  FUNC_34(5000, 6000);
  FUNC_24(VAR_21->gpio_pd, 0);
 }

 VAR_21->regmap = FUNC_21(VAR_18, &VAR_16);
 if (FUNC_2(VAR_21->regmap)) {
  VAR_24 = FUNC_3(VAR_21->regmap);
  goto uninit_regulators;
 }

 VAR_24 = FUNC_31(VAR_21->regmap, VAR_4, &VAR_23);
 if (VAR_24)
  goto uninit_regulators;
 FUNC_16(VAR_22, "Rev. %d\n", VAR_23);

 if (VAR_21->type == VAR_0)
  VAR_24 = FUNC_32(VAR_21->regmap,
         VAR_13,
         FUNC_0(VAR_13));
 else
  VAR_24 = FUNC_14(VAR_21);
 if (VAR_24)
  goto uninit_regulators;

 FUNC_8(VAR_21, 0xffff);

 VAR_21->i2c_edid = FUNC_25(VAR_18, "edid",
     VAR_1);
 if (FUNC_2(VAR_21->i2c_edid)) {
  VAR_24 = FUNC_3(VAR_21->i2c_edid);
  goto uninit_regulators;
 }

 FUNC_33(VAR_21->regmap, VAR_5,
       VAR_21->i2c_edid->addr << 1);

 VAR_21->i2c_packet = FUNC_25(VAR_18, "packet",
     VAR_2);
 if (FUNC_2(VAR_21->i2c_packet)) {
  VAR_24 = FUNC_3(VAR_21->i2c_packet);
  goto err_i2c_unregister_edid;
 }

 FUNC_33(VAR_21->regmap, VAR_6,
       VAR_21->i2c_packet->addr << 1);

 VAR_24 = FUNC_6(VAR_21);
 if (VAR_24)
  goto err_i2c_unregister_packet;

 FUNC_33(VAR_21->regmap, VAR_3,
       VAR_21->i2c_cec->addr << 1);

 FUNC_1(&VAR_21->hpd_work, VAR_14);

 if (VAR_18->irq) {
  FUNC_28(&VAR_21->wq);

  VAR_24 = FUNC_22(VAR_22, VAR_18->irq, ((void*)0),
      VAR_15,
      VAR_11, FUNC_18(VAR_22),
      VAR_21);
  if (VAR_24)
   goto err_unregister_cec;
 }

 FUNC_10(VAR_21);

 FUNC_26(VAR_18, VAR_21);

 if (VAR_21->type == VAR_0)
  FUNC_11(VAR_21, &VAR_20);

 VAR_24 = FUNC_5(VAR_22, VAR_21);
 if (VAR_24)
  goto err_unregister_cec;

 VAR_21->bridge.funcs = &VAR_12;
 VAR_21->bridge.of_node = VAR_22->of_node;

 FUNC_23(&VAR_21->bridge);

 FUNC_4(VAR_22, VAR_21);
 return 0;

err_unregister_cec:
 FUNC_27(VAR_21->i2c_cec);
 if (VAR_21->cec_clk)
  FUNC_15(VAR_21->cec_clk);
err_i2c_unregister_packet:
 FUNC_27(VAR_21->i2c_packet);
err_i2c_unregister_edid:
 FUNC_27(VAR_21->i2c_edid);
uninit_regulators:
 FUNC_12(VAR_21);

 return VAR_24;
}
