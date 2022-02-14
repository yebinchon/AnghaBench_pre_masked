
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
 long FUNC_0 (long,int) ;
 int VAR_2 ;
 long FUNC_1 (long,int ,int) ;
 struct adt7411_data* FUNC_2 (struct device*) ;


 int FUNC_3 (struct i2c_client*,int,long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, u32 VAR_4, long VAR_5)
{
 struct adt7411_data *VAR_6 = FUNC_2(VAR_3);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_5, 0, 255 * 7000 / 256);
 VAR_5 = FUNC_0(VAR_5 * 256, 7000);

 switch (VAR_4) {
 case 128:
  VAR_8 = VAR_1;
  break;
 case 129:
  VAR_8 = VAR_0;
  break;
 default:
  return -VAR_2;
 }

 return FUNC_3(VAR_7, VAR_8, VAR_5);
}
