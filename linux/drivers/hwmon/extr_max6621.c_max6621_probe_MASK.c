
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6621_data {int* input_chan2reg; int regmap; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct device* FUNC_3 (struct device*,int ,struct max6621_data*,int *,int *) ;
 struct max6621_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct max6621_data*) ;
 int FUNC_7 (struct i2c_client*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int FUNC_8 (struct device*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 struct device *VAR_12 = &VAR_10->dev;
 struct max6621_data *VAR_13;
 struct device *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_13 = FUNC_4(VAR_12, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->regmap = FUNC_5(VAR_10, &VAR_8);
 if (FUNC_0(VAR_13->regmap))
  return FUNC_1(VAR_13->regmap);

 FUNC_6(VAR_10, VAR_13);
 VAR_13->client = VAR_10;


 VAR_16 = FUNC_11(VAR_13->regmap, VAR_3,
      VAR_2);
 if (VAR_16)
  return VAR_16;


 VAR_16 = FUNC_11(VAR_13->regmap, VAR_5,
      VAR_4);
 if (VAR_16)
  return VAR_16;


 FUNC_9(VAR_13->regmap);
 VAR_16 = FUNC_10(VAR_13->regmap);
 if (VAR_16)
  return VAR_16;


 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_16 = FUNC_7(VAR_10, VAR_9[VAR_15]);
  if (VAR_16 < 0)
   return VAR_16;
  VAR_16 = FUNC_8(VAR_12, VAR_16);
  if (VAR_16) {
   VAR_13->input_chan2reg[VAR_15] = -1;
   continue;
  }

  VAR_13->input_chan2reg[VAR_15] = VAR_9[VAR_15];
 }

 VAR_14 = FUNC_3(VAR_12, VAR_10->name,
        VAR_13,
        &VAR_7,
        ((void*)0));

 return FUNC_2(VAR_14);
}
