
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wdt87xx_data {int param; int phys; int fw_mutex; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; int name; int irq; TYPE_1__* adapter; } ;
struct TYPE_2__ {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *) ;
 struct wdt87xx_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int ,int *,int ,int ,int ,struct wdt87xx_data*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct i2c_client*,struct wdt87xx_data*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,char*,int,int) ;
 int VAR_5 ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (struct wdt87xx_data*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_7,
       const struct i2c_device_id *VAR_8)
{
 struct wdt87xx_data *VAR_9;
 int VAR_10;

 FUNC_0(&VAR_7->dev, "adapter=%d, client irq: %d\n",
  VAR_7->adapter->nr, VAR_7->irq);


 if (!FUNC_5(VAR_7->adapter, VAR_3))
  return -VAR_1;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->client = VAR_7;
 FUNC_7(&VAR_9->fw_mutex);
 FUNC_6(VAR_7, VAR_9);

 FUNC_8(VAR_9->phys, sizeof(VAR_9->phys), "i2c-%u-%04x/input0",
   VAR_7->adapter->nr, VAR_7->addr);

 VAR_10 = FUNC_9(VAR_7, &VAR_9->param);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_10(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(&VAR_7->dev, VAR_7->irq,
       ((void*)0), VAR_6,
       VAR_4,
       VAR_7->name, VAR_9);
 if (VAR_10) {
  FUNC_1(&VAR_7->dev, "request irq failed: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_2(&VAR_7->dev, &VAR_5);
 if (VAR_10) {
  FUNC_1(&VAR_7->dev, "create sysfs failed: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
