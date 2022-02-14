
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct adt7411_data* FUNC_0 (struct device*) ;



 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_7, u32 VAR_8, int VAR_9,
       long *VAR_10)
{
 struct adt7411_data *VAR_11 = FUNC_0(VAR_7);
 struct i2c_client *VAR_12 = VAR_11->client;
 int VAR_13, VAR_14;

 VAR_13 = FUNC_1(VAR_12, VAR_0);
 if (VAR_13 < 0)
  return VAR_13;

 switch (VAR_8) {
 case 128:
  VAR_14 = VAR_9 ? VAR_3
         : VAR_5;
  break;
 case 129:
  VAR_14 = VAR_9 ? VAR_2
         : VAR_4;
  break;
 case 130:
  VAR_14 = VAR_1;
  break;
 default:
  return -VAR_6;
 }

 *VAR_10 = !!(VAR_13 & VAR_14);
 return 0;
}
