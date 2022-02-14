
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; int adapter; } ;
struct ad7414_data {int lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*) ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 struct device* FUNC_3 (struct device*,int ,struct ad7414_data*,int ) ;
 struct ad7414_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct ad7414_data *VAR_10;
 struct device *VAR_11;
 int VAR_12;

 if (!FUNC_5(VAR_7->adapter, VAR_4 |
         VAR_5))
  return -VAR_2;

 VAR_10 = FUNC_4(VAR_9, sizeof(struct ad7414_data), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->client = VAR_7;
 FUNC_8(&VAR_10->lock);

 FUNC_1(&VAR_7->dev, "chip found\n");


 VAR_12 = FUNC_6(VAR_7, VAR_0);
 if (VAR_12 < 0)
  FUNC_2(VAR_9, "ad7414_probe unable to read config register.\n");
 else {
  VAR_12 &= ~(1 << 7);
  FUNC_7(VAR_7, VAR_0, VAR_12);
 }

 VAR_11 = FUNC_3(VAR_9,
          VAR_7->name,
          VAR_10, VAR_6);
 return FUNC_0(VAR_11);
}
