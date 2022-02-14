
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dibx000_i2c_master {scalar_t__ base_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct dibx000_i2c_master*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dibx000_i2c_master *VAR_1)
{
 int VAR_2 = 100;
 u16 VAR_3;

 while (((VAR_3 = FUNC_0(VAR_1, VAR_1->base_reg + 2)) & 0x0100) == 0 && --VAR_2 > 0)
  ;


 if (VAR_2 == 0)
  return -VAR_0;


 if ((VAR_3 & 0x0080) == 0)
  return -VAR_0;

 return 0;
}
