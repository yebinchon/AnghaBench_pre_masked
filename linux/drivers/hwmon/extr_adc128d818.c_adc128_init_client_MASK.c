
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adc128_data {int mode; scalar_t__ regulator; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct adc128_data *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4;





 VAR_4 = FUNC_0(VAR_3, VAR_0, 0x80);
 if (VAR_4)
  return VAR_4;


 if (VAR_2->mode != 0) {
  VAR_4 = FUNC_0(VAR_3,
      VAR_1,
      VAR_2->mode << 1);
  if (VAR_4)
   return VAR_4;
 }


 VAR_4 = FUNC_0(VAR_3, VAR_0, 0x01);
 if (VAR_4)
  return VAR_4;


 if (VAR_2->regulator) {
  VAR_4 = FUNC_0(VAR_3,
      VAR_1, 0x01);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
