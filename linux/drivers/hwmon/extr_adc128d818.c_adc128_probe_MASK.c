
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int of_node; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; struct regulator dev; } ;
struct device {int of_node; } ;
struct adc128_data {int vref; int mode; struct regulator* regulator; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 int VAR_5 ;
 int FUNC_3 (struct adc128_data*) ;
 int FUNC_4 (struct regulator*,char*,int) ;
 struct regulator* FUNC_5 (struct regulator*,int ,struct adc128_data*,int ) ;
 struct adc128_data* FUNC_6 (struct regulator*,int,int ) ;
 struct regulator* FUNC_7 (struct regulator*,char*) ;
 int FUNC_8 (struct i2c_client*,struct adc128_data*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,char*,int*) ;
 int FUNC_12 (struct regulator*) ;
 int FUNC_13 (struct regulator*) ;
 int FUNC_14 (struct regulator*) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct regulator *VAR_9;
 struct device *VAR_10;
 struct adc128_data *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_6(VAR_8, sizeof(struct adc128_data), VAR_4);
 if (!VAR_11)
  return -VAR_3;


 VAR_9 = FUNC_7(VAR_8, "vref");
 if (!FUNC_1(VAR_9)) {
  VAR_11->regulator = VAR_9;
  VAR_12 = FUNC_13(VAR_9);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_13 = FUNC_14(VAR_9);
  if (VAR_13 < 0) {
   VAR_12 = VAR_13;
   goto error;
  }
  VAR_11->vref = FUNC_0(VAR_13, 1000);
 } else {
  VAR_11->vref = 2560;
 }


 if (FUNC_11(VAR_8->of_node, "ti,mode", &VAR_11->mode) == 0) {
  if (VAR_11->mode > 3) {
   FUNC_4(VAR_8, "invalid operation mode %d\n",
    VAR_11->mode);
   VAR_12 = -VAR_2;
   goto error;
  }
 } else {
  VAR_12 = FUNC_9(VAR_6, VAR_0);
  if (VAR_12 < 0)
   goto error;
  VAR_11->mode = (VAR_12 >> 1) & VAR_1;
 }

 VAR_11->client = VAR_6;
 FUNC_8(VAR_6, VAR_11);
 FUNC_10(&VAR_11->update_lock);


 VAR_12 = FUNC_3(VAR_11);
 if (VAR_12 < 0)
  goto error;

 VAR_10 = FUNC_5(VAR_8, VAR_6->name,
          VAR_11, VAR_5);
 if (FUNC_1(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  goto error;
 }

 return 0;

error:
 if (VAR_11->regulator)
  FUNC_12(VAR_11->regulator);
 return VAR_12;
}
