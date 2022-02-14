
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_device {int dummy; } ;


 int FUNC_0 (struct i2c_device*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static u16 FUNC_2(struct i2c_device *VAR_0)
{
 u16 VAR_1;

 VAR_1 = FUNC_0(VAR_0, 896);
 if (VAR_1 != 0x01b3) {
  FUNC_1("wrong Vendor ID (0x%x)\n", VAR_1);
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0, 897);
 if (VAR_1 != 0x4000 && VAR_1 != 0x4001 && VAR_1 != 0x4002 && VAR_1 != 0x4003 && VAR_1 != 0x4004 && VAR_1 != 0x4005) {
  FUNC_1("wrong Device ID (0x%x)\n", VAR_1);
  return 0;
 }


 if (VAR_1 == 0x4000 && FUNC_0(VAR_0, 769) == 0x4000) {
  FUNC_1("this driver does not work with DiB7000PC\n");
  return 0;
 }

 switch (VAR_1) {
 case 0x4000:
  FUNC_1("found DiB7000MA/PA/MB/PB\n");
  break;
 case 0x4001:
  FUNC_1("found DiB7000HC\n");
  break;
 case 0x4002:
  FUNC_1("found DiB7000MC\n");
  break;
 case 0x4003:
  FUNC_1("found DiB9000A\n");
  break;
 case 0x4004:
  FUNC_1("found DiB9000H\n");
  break;
 case 0x4005:
  FUNC_1("found DiB9000M\n");
  break;
 }

 return VAR_1;
}
