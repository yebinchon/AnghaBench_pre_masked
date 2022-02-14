
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max11801_data {int input_dev; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct i2c_client*,int ,int,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_15, void *VAR_16)
{
 struct max11801_data *VAR_17 = VAR_16;
 struct i2c_client *VAR_18 = VAR_17->client;
 int VAR_19, VAR_20, VAR_21;
 u8 VAR_22[VAR_13];
 int VAR_23 = -1;
 int VAR_24 = -1;

 VAR_19 = FUNC_4(VAR_17->client, VAR_6);

 if (VAR_19 & (VAR_8 | VAR_9)) {
  VAR_19 = FUNC_4(VAR_17->client, VAR_6);

  VAR_21 = FUNC_0(VAR_18, VAR_5,
          VAR_13, VAR_22);





  if (VAR_21 < VAR_13)
   goto out;

  for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20 += VAR_13 / 2) {
   if ((VAR_22[VAR_20 + 1] & VAR_10) == VAR_11)
    VAR_23 = (VAR_22[VAR_20] << VAR_14) +
        (VAR_22[VAR_20 + 1] >> VAR_14);
   else if ((VAR_22[VAR_20 + 1] & VAR_10) == VAR_12)
    VAR_24 = (VAR_22[VAR_20] << VAR_14) +
        (VAR_22[VAR_20 + 1] >> VAR_14);
  }

  if ((VAR_22[1] & VAR_3) != (VAR_22[3] & VAR_3))
   goto out;

  switch (VAR_22[1] & VAR_3) {
  case 130:

  case 129:
   FUNC_2(VAR_17->input_dev, VAR_0, VAR_23);
   FUNC_2(VAR_17->input_dev, VAR_1, VAR_24);
   FUNC_1(VAR_17->input_dev, VAR_4, VAR_2, 1);
   FUNC_3(VAR_17->input_dev);
   break;

  case 128:
   FUNC_1(VAR_17->input_dev, VAR_4, VAR_2, 0);
   FUNC_3(VAR_17->input_dev);
   break;

  case 131:
   break;
  }
 }
out:
 return VAR_7;
}
