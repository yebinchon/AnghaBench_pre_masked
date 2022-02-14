
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_board_info {scalar_t__ irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void *FUNC_1(void *VAR_1)
{
 struct i2c_board_info *VAR_2 = VAR_1;
 int VAR_3 = FUNC_0("mpu3050_int");

 if (VAR_3 < 0)
  return ((void*)0);

 VAR_2->irq = VAR_3 + VAR_0;
 return ((void*)0);
}
