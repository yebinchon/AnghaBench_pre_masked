
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int udelay; } ;
struct i2c_adapter {int dev; struct i2c_algo_bit_data* algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *,char*,int,...) ;
 int FUNC_1 (struct i2c_algo_bit_data*) ;
 scalar_t__ FUNC_2 (struct i2c_algo_bit_data*) ;
 int FUNC_3 (struct i2c_algo_bit_data*) ;
 int FUNC_4 (struct i2c_algo_bit_data*) ;
 int FUNC_5 (struct i2c_algo_bit_data*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_1, unsigned char VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 struct i2c_algo_bit_data *VAR_6 = VAR_1->algo_data;


 for (VAR_3 = 7; VAR_3 >= 0; VAR_3--) {
  VAR_4 = (VAR_2 >> VAR_3) & 1;
  FUNC_5(VAR_6, VAR_4);
  FUNC_6((VAR_6->udelay + 1) / 2);
  if (FUNC_2(VAR_6) < 0) {
   FUNC_0(1, &VAR_1->dev,
    "i2c_outb: 0x%02x, timeout at bit #%d\n",
    (int)VAR_2, VAR_3);
   return -VAR_0;
  }






  FUNC_3(VAR_6);
 }
 FUNC_4(VAR_6);
 if (FUNC_2(VAR_6) < 0) {
  FUNC_0(1, &VAR_1->dev,
   "i2c_outb: 0x%02x, timeout at ack\n", (int)VAR_2);
  return -VAR_0;
 }




 VAR_5 = !FUNC_1(VAR_6);
 FUNC_0(2, &VAR_1->dev, "i2c_outb: 0x%02x %s\n", (int)VAR_2,
  VAR_5 ? "A" : "NA");

 FUNC_3(VAR_6);
 return VAR_5;

}
