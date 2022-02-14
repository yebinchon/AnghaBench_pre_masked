
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int udelay; } ;
struct i2c_adapter {int dev; struct i2c_algo_bit_data* algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct i2c_algo_bit_data*) ;
 int FUNC_2 (struct i2c_algo_bit_data*) ;
 int FUNC_3 (struct i2c_algo_bit_data*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_1, int VAR_2)
{
 struct i2c_algo_bit_data *VAR_3 = VAR_1->algo_data;


 if (VAR_2)
  FUNC_3(VAR_3, 0);
 FUNC_4((VAR_3->udelay + 1) / 2);
 if (FUNC_1(VAR_3) < 0) {
  FUNC_0(&VAR_1->dev, "readbytes: ack/nak timeout\n");
  return -VAR_0;
 }
 FUNC_2(VAR_3);
 return 0;
}
