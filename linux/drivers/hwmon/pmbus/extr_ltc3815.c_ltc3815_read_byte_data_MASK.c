
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;


__attribute__((used)) static int FUNC_0(struct i2c_client *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 128:






  VAR_4 = 0x40;
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}
