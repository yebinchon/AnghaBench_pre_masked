
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap_config {int reg_bits; int val_bits; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {struct cxd2099_cfg* platform_data; } ;
struct i2c_client {TYPE_2__ dev; int addr; } ;
struct cxd2099_cfg {TYPE_1__** en; } ;
struct TYPE_3__ {int * write_data; int * read_data; struct cxd* data; } ;
struct cxd {int lastaddress; int clk_reg_b; int clk_reg_f; int regmap; TYPE_1__ en; int lock; int cfg; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct i2c_client*,struct cxd*) ;
 int FUNC_4 (struct cxd*) ;
 int FUNC_5 (struct cxd*) ;
 struct cxd* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,struct cxd2099_cfg*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_11 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct cxd *VAR_6;
 struct cxd2099_cfg *VAR_7 = VAR_4->dev.platform_data;
 static const struct regmap_config VAR_8 = {
  .reg_bits = 8,
  .val_bits = 8,
 };
 unsigned int VAR_9;
 int VAR_10;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_6->client = VAR_4;
 FUNC_7(&VAR_6->cfg, VAR_7, sizeof(VAR_6->cfg));

 VAR_6->regmap = FUNC_10(VAR_4, &VAR_8);
 if (FUNC_0(VAR_6->regmap)) {
  VAR_10 = FUNC_1(VAR_6->regmap);
  goto err_kfree;
 }

 VAR_10 = FUNC_11(VAR_6->regmap, 0x00, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_4->dev, "No CXD2099AR detected at 0x%02x\n",
    VAR_4->addr);
  goto err_rmexit;
 }

 FUNC_8(&VAR_6->lock);
 VAR_6->lastaddress = 0xff;
 VAR_6->clk_reg_b = 0x4a;
 VAR_6->clk_reg_f = 0x1b;

 VAR_6->en = VAR_3;
 VAR_6->en.data = VAR_6;
 FUNC_4(VAR_6);
 FUNC_2(&VAR_4->dev, "Attached CXD2099AR at 0x%02x\n", VAR_4->addr);

 *VAR_7->en = &VAR_6->en;

 if (!VAR_2) {
  VAR_6->en.read_data = ((void*)0);
  VAR_6->en.write_data = ((void*)0);
 } else {
  FUNC_2(&VAR_4->dev, "Using CXD2099AR buffer mode");
 }

 FUNC_3(VAR_4, VAR_6);

 return 0;

err_rmexit:
 FUNC_9(VAR_6->regmap);
err_kfree:
 FUNC_5(VAR_6);
err:

 return VAR_10;
}
