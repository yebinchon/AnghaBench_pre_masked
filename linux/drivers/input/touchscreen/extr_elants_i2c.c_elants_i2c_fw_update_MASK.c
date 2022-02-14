
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; int dev; } ;
struct firmware {int size; } ;
struct elants_data {scalar_t__ iap_mode; int state; int hw_version; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct elants_data*) ;
 int FUNC_4 (struct i2c_client*,struct firmware const*,int) ;
 int FUNC_5 (struct elants_data*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct firmware const*) ;
 int FUNC_11 (struct firmware const**,char*,int *) ;

__attribute__((used)) static int FUNC_12(struct elants_data *VAR_7)
{
 struct i2c_client *VAR_8 = VAR_7->client;
 const struct firmware *VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_7(VAR_6, "elants_i2c_%04x.bin", VAR_7->hw_version);
 if (!VAR_10)
  return -VAR_5;

 FUNC_1(&VAR_8->dev, "requesting fw name = %s\n", VAR_10);
 VAR_11 = FUNC_11(&VAR_9, VAR_10, &VAR_8->dev);
 FUNC_8(VAR_10);
 if (VAR_11) {
  FUNC_0(&VAR_8->dev, "failed to request firmware: %d\n",
   VAR_11);
  return VAR_11;
 }

 if (VAR_9->size % VAR_1) {
  FUNC_0(&VAR_8->dev, "invalid firmware length: %zu\n",
   VAR_9->size);
  VAR_11 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_8->irq);

 VAR_11 = FUNC_4(VAR_8, VAR_9,
     VAR_7->iap_mode == VAR_3);
 if (VAR_11) {
  FUNC_0(&VAR_8->dev, "firmware update failed: %d\n", VAR_11);
  VAR_7->iap_mode = VAR_3;
  goto out_enable_irq;
 }

 VAR_11 = FUNC_5(VAR_7);
 if (VAR_11) {
  FUNC_0(&VAR_8->dev,
   "failed to initialize device after firmware update: %d\n",
   VAR_11);
  VAR_7->iap_mode = VAR_3;
  goto out_enable_irq;
 }

 VAR_7->iap_mode = VAR_2;

out_enable_irq:
 VAR_7->state = VAR_4;
 FUNC_6(VAR_8->irq);
 FUNC_9(100);

 if (!VAR_11)
  FUNC_3(VAR_7);
out:
 FUNC_10(VAR_9);
 return VAR_11;
}
