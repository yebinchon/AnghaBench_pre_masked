
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thmc50_data {int analog_out; scalar_t__ type; int has_temp3; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct thmc50_data *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 int VAR_5;

 VAR_3->analog_out = FUNC_0(VAR_4,
          VAR_0);

 if (VAR_3->analog_out == 0) {
  VAR_3->analog_out = 1;
  FUNC_1(VAR_4, VAR_0,
       VAR_3->analog_out);
 }
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_5 |= 0x1;
 if (VAR_3->type == VAR_2 && (VAR_5 & (1 << 7)))
  VAR_3->has_temp3 = 1;
 FUNC_1(VAR_4, VAR_1, VAR_5);
}
