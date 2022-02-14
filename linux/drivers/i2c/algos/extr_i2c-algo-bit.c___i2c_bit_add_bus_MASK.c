
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int * getscl; } ;
struct i2c_adapter {int retries; int dev; int * quirks; int * algo; struct i2c_algo_bit_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_4,
        int (*VAR_5)(struct i2c_adapter *))
{
 struct i2c_algo_bit_data *VAR_6 = VAR_4->algo_data;
 int VAR_7;

 if (VAR_1) {
  VAR_7 = FUNC_1(VAR_4);
  if (VAR_1 >= 2 && VAR_7 < 0)
   return -VAR_0;
 }


 VAR_4->algo = &VAR_2;
 VAR_4->retries = 3;
 if (VAR_6->getscl == ((void*)0))
  VAR_4->quirks = &VAR_3;






 VAR_7 = VAR_5(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;


 if (VAR_6->getscl == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "Not I2C compliant: can't read SCL\n");
  FUNC_0(&VAR_4->dev, "Bus may be unreliable\n");
 }
 return 0;
}
