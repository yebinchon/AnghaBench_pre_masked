
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2485_data {int time_prev; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ltc2485_data*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct ltc2485_data *VAR_0, int *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_0->client;
 __be32 VAR_3 = 0;
 int VAR_4;

 FUNC_4(VAR_0);

 VAR_4 = FUNC_2(VAR_2, (char *)&VAR_3, 4);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_2->dev, "i2c_master_recv failed\n");
  return VAR_4;
 }
 VAR_0->time_prev = FUNC_3();
 *VAR_1 = FUNC_5(FUNC_0(VAR_3) >> 6, 24);

 return VAR_4;
}
