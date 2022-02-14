
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32f7_i2c_dev {scalar_t__* slave; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct stm32f7_i2c_dev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->slave[VAR_2])
   return 1;
 }

 return 0;
}
