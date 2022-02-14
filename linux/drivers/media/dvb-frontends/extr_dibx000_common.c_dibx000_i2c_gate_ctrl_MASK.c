
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dibx000_i2c_master {scalar_t__ device_rev; int base_reg; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dibx000_i2c_master *VAR_1, u8 VAR_2[4],
     u8 VAR_3, int VAR_4)
{
 u16 VAR_5;


 if (VAR_4)
  VAR_5 = VAR_3 << 8;
 else
  VAR_5 = 1 << 7;

 if (VAR_1->device_rev > VAR_0)
  VAR_5 <<= 1;

 VAR_2[0] = (((VAR_1->base_reg + 1) >> 8) & 0xff);
 VAR_2[1] = ((VAR_1->base_reg + 1) & 0xff);
 VAR_2[2] = VAR_5 >> 8;
 VAR_2[3] = VAR_5 & 0xff;

 return 0;
}
