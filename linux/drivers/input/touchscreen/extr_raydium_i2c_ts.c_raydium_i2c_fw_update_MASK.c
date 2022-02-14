
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_ver; } ;
struct raydium_data {void* boot_mode; TYPE_1__ info; struct i2c_client* client; } ;
struct i2c_client {int irq; int dev; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct raydium_data*,struct firmware const*) ;
 int FUNC_9 (struct raydium_data*) ;
 int FUNC_10 (struct firmware const*) ;
 int FUNC_11 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_12(struct raydium_data *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 const struct firmware *VAR_6 = ((void*)0);
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_1, "raydium_%#04x.fw",
       FUNC_6(VAR_4->info.hw_ver));
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(&VAR_5->dev, "firmware name: %s\n", VAR_7);

 VAR_8 = FUNC_11(&VAR_6, VAR_7, &VAR_5->dev);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "Unable to open firmware %s\n", VAR_7);
  goto out_free_fw_file;
 }

 FUNC_2(VAR_5->irq);

 VAR_8 = FUNC_8(VAR_4, VAR_6);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "firmware update failed: %d\n", VAR_8);
  VAR_4->boot_mode = VAR_2;
  goto out_enable_irq;
 }

 VAR_8 = FUNC_9(VAR_4);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev,
   "failed to initialize device after firmware update: %d\n",
   VAR_8);
  VAR_4->boot_mode = VAR_2;
  goto out_enable_irq;
 }

 VAR_4->boot_mode = VAR_3;

out_enable_irq:
 FUNC_3(VAR_5->irq);
 FUNC_7(100);

 FUNC_10(VAR_6);

out_free_fw_file:
 FUNC_5(VAR_7);

 return VAR_8;
}
