
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {struct i2c_client* client; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 long FUNC_2 (long,int) ;
 int VAR_0 ;
 long FUNC_3 (long,int,int) ;
 struct adt7411_data* FUNC_4 (struct device*) ;


 int FUNC_5 (struct i2c_client*,int,long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, u32 VAR_2, int VAR_3,
         long VAR_4)
{
 struct adt7411_data *VAR_5 = FUNC_4(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7;

 VAR_4 = FUNC_3(VAR_4, -128000, 127000);
 VAR_4 = FUNC_2(VAR_4, 1000);

 switch (VAR_2) {
 case 128:
  VAR_7 = FUNC_1(VAR_3);
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_5(VAR_6, VAR_7, VAR_4);
}
