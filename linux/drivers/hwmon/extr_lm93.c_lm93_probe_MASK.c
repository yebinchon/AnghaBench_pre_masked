
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm93_data {void (* update ) (struct lm93_data*,struct i2c_client*) ;int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct device*,int ,struct lm93_data*,int ) ;
 struct lm93_data* FUNC_3 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (struct i2c_client*) ;
 void FUNC_6 (struct lm93_data*,struct i2c_client*) ;
 void FUNC_7 (struct lm93_data*,struct i2c_client*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
        const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct lm93_data *VAR_10;
 struct device *VAR_11;
 int VAR_12;
 void (*VAR_13)(struct lm93_data *, struct i2c_client *);


 VAR_12 = FUNC_4(VAR_7->adapter);
 if (((VAR_3 & VAR_12) == VAR_3) &&
   (!VAR_5)) {
  FUNC_1(VAR_9, "using SMBus block data transactions\n");
  VAR_13 = FUNC_6;
 } else if ((VAR_4 & VAR_12) == VAR_4) {
  FUNC_1(VAR_9, "disabled SMBus block data transactions\n");
  VAR_13 = FUNC_7;
 } else {
  FUNC_1(VAR_9, "detect failed, smbus byte and/or word data not supported!\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_9, sizeof(struct lm93_data), VAR_2);
 if (!VAR_10)
  return -VAR_1;


 VAR_10->client = VAR_7;
 VAR_10->update = VAR_13;
 FUNC_8(&VAR_10->update_lock);


 FUNC_5(VAR_7);

 VAR_11 = FUNC_2(VAR_9, VAR_7->name,
          VAR_10,
          VAR_6);
 return FUNC_0(VAR_11);
}
