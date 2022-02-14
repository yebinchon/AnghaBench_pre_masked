
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int udelay; } ;


 int FUNC_0 (struct i2c_algo_bit_data*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct i2c_algo_bit_data *VAR_0)
{
 FUNC_0(VAR_0, 1);
 FUNC_1((VAR_0->udelay + 1) / 2);
}
