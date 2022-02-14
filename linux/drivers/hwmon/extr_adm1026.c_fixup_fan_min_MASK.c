
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int* fan_div; int* fan_min; struct i2c_client* client; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int,int,int) ;
 struct adm1026_data* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, int VAR_1, int VAR_2)
{
 struct adm1026_data *VAR_3 = FUNC_3(VAR_0);
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;
 int VAR_6 = VAR_3->fan_div[VAR_1];


 if (VAR_3->fan_min[VAR_1] == 0 || VAR_3->fan_min[VAR_1] == 0xff)
  return;

 VAR_5 = VAR_3->fan_min[VAR_1] * VAR_2 / VAR_6;
 VAR_5 = FUNC_2(VAR_5, 1, 254);
 VAR_3->fan_min[VAR_1] = VAR_5;
 FUNC_1(VAR_4, FUNC_0(VAR_1), VAR_5);
}
