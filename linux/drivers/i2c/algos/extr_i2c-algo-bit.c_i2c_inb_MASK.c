
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int udelay; } ;
struct i2c_adapter {int dev; struct i2c_algo_bit_data* algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *,char*,int) ;
 scalar_t__ FUNC_1 (struct i2c_algo_bit_data*) ;
 scalar_t__ FUNC_2 (struct i2c_algo_bit_data*) ;
 int FUNC_3 (struct i2c_algo_bit_data*) ;
 int FUNC_4 (struct i2c_algo_bit_data*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_1)
{


 int VAR_2;
 unsigned char VAR_3 = 0;
 struct i2c_algo_bit_data *VAR_4 = VAR_1->algo_data;


 FUNC_3(VAR_4);
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if (FUNC_2(VAR_4) < 0) {
   FUNC_0(1, &VAR_1->dev,
    "i2c_inb: timeout at bit #%d\n",
    7 - VAR_2);
   return -VAR_0;
  }
  VAR_3 *= 2;
  if (FUNC_1(VAR_4))
   VAR_3 |= 0x01;
  FUNC_4(VAR_4, 0);
  FUNC_5(VAR_2 == 7 ? VAR_4->udelay / 2 : VAR_4->udelay);
 }

 return VAR_3;
}
