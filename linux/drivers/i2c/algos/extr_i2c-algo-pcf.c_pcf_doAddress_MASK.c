
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct i2c_algo_pcf_data {int dummy; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (struct i2c_algo_pcf_data*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct i2c_algo_pcf_data *VAR_1,
    struct i2c_msg *VAR_2)
{
 unsigned char VAR_3 = FUNC_0(VAR_2);

 if (VAR_2->flags & VAR_0)
  VAR_3 ^= 1;
 FUNC_1(VAR_1, VAR_3);

 return 0;
}
