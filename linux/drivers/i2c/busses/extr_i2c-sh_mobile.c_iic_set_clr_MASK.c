
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_i2c_data {int dummy; } ;


 unsigned char FUNC_0 (struct sh_mobile_i2c_data*,int) ;
 int FUNC_1 (struct sh_mobile_i2c_data*,int,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct sh_mobile_i2c_data *VAR_0, int VAR_1,
   unsigned char VAR_2, unsigned char VAR_3)
{
 FUNC_1(VAR_0, VAR_1, (FUNC_0(VAR_0, VAR_1) | VAR_2) & ~VAR_3);
}
