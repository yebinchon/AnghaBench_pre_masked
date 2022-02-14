
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct octeon_i2c {int dev; scalar_t__ twsi_base; scalar_t__ hlc_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct octeon_i2c*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct octeon_i2c*) ;

__attribute__((used)) static int FUNC_4(struct octeon_i2c *VAR_4, int VAR_5)
{
 u8 VAR_6;





 if (VAR_4->hlc_enabled)
  VAR_6 = FUNC_1(VAR_4->twsi_base + FUNC_0(VAR_4));
 else
  VAR_6 = FUNC_3(VAR_4);

 switch (VAR_6) {

 case 149:
 case 154:
 case 144:
 case 131:
 case 129:
  return 0;


 case 142:
  if (!VAR_5)
   return 0;
  return -VAR_1;


 case 141:
  if (VAR_5)
   return 0;
  return -VAR_1;


 case 148:
 case 147:
 case 146:
 case 145:
  return -VAR_0;


 case 140:
 case 139:
 case 151:
 case 150:
  return -VAR_3;


 case 138:
 case 137:
 case 136:
 case 135:
 case 133:
 case 132:
 case 134:
  return -VAR_3;

 case 128:
 case 152:
  return -VAR_1;
 case 130:
 case 143:
 case 153:
  return -VAR_2;
 default:
  FUNC_2(VAR_4->dev, "unhandled state: %d\n", VAR_6);
  return -VAR_1;
 }
}
