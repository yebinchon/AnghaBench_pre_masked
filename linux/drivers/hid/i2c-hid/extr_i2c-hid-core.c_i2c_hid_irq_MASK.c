
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid {int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_hid*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct i2c_hid *VAR_4 = VAR_3;

 if (FUNC_1(VAR_0, &VAR_4->flags))
  return VAR_1;

 FUNC_0(VAR_4);

 return VAR_1;
}
