
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdt87xx_data {int fw_mutex; int param; } ;
struct i2c_client {int irq; int dev; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct wdt87xx_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct firmware const*,unsigned int) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (struct wdt87xx_data*,struct firmware const*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_0,
          const struct firmware *VAR_1,
          unsigned int VAR_2)
{
 struct wdt87xx_data *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_9(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(&VAR_3->fw_mutex);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_0->irq);

 VAR_4 = FUNC_7(VAR_0, VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_0(&VAR_0->dev,
   "firmware load failed (type: %d): %d\n",
   VAR_2, VAR_4);
  goto out;
 }

 VAR_4 = FUNC_8(VAR_0);
 if (VAR_4) {
  FUNC_0(&VAR_0->dev, "soft reset failed: %d\n", VAR_4);
  goto out;
 }


 VAR_4 = FUNC_6(VAR_0, &VAR_3->param);
 if (VAR_4)
  FUNC_0(&VAR_0->dev,
   "failed to refresh system parameters: %d\n", VAR_4);
out:
 FUNC_2(VAR_0->irq);
 FUNC_5(&VAR_3->fw_mutex);

 return VAR_4 ? VAR_4 : 0;
}
