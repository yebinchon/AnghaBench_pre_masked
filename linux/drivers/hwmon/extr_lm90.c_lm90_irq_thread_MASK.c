
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3;
 u16 VAR_5;

 if (FUNC_0(VAR_4, &VAR_5))
  return VAR_0;
 else
  return VAR_1;
}
