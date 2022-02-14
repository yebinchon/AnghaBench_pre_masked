
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct bd2802_led_platform_data {int reset_gpio; } ;
struct bd2802_led {struct i2c_client* client; int rwsem; int rgb_current; int wave_pattern; struct bd2802_led_platform_data* pdata; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ attr; } ;


 int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__** VAR_6 ;
 int FUNC_1 (struct bd2802_led*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *,char*,...) ;
 struct bd2802_led_platform_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 struct bd2802_led* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int ,int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct i2c_client*,struct bd2802_led*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct bd2802_led *VAR_9;
 struct bd2802_led_platform_data *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_8(&VAR_7->dev, sizeof(struct bd2802_led), VAR_4);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->client = VAR_7;
 VAR_10 = VAR_9->pdata = FUNC_4(&VAR_7->dev);
 FUNC_11(VAR_7, VAR_9);


 FUNC_9(VAR_10->reset_gpio, VAR_5, "RGB_RESETB");


 FUNC_13(100);


 VAR_11 = FUNC_2(VAR_7, VAR_2, 0x00);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_7->dev, "failed to detect device\n");
  return VAR_11;
 } else
  FUNC_5(&VAR_7->dev, "return 0x%02x\n", VAR_11);


 FUNC_10(VAR_9->pdata->reset_gpio, 0);


 VAR_9->wave_pattern = VAR_1;
 VAR_9->rgb_current = VAR_0;

 FUNC_12(&VAR_9->rwsem);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++) {
  VAR_11 = FUNC_6(&VAR_9->client->dev,
      VAR_6[VAR_12]);
  if (VAR_11) {
   FUNC_3(&VAR_9->client->dev, "failed: sysfs file %s\n",
     VAR_6[VAR_12]->attr.name);
   goto failed_unregister_dev_file;
  }
 }

 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11 < 0)
  goto failed_unregister_dev_file;

 return 0;

failed_unregister_dev_file:
 for (VAR_12--; VAR_12 >= 0; VAR_12--)
  FUNC_7(&VAR_9->client->dev, VAR_6[VAR_12]);
 return VAR_11;
}
