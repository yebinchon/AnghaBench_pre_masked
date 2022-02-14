
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct i2c_client*,unsigned int,unsigned int) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
