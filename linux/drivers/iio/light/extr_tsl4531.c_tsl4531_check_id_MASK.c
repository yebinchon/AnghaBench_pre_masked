
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 switch (VAR_4 >> VAR_2) {
 case 131:
 case 130:
 case 129:
 case 128:
  return 0;
 default:
  return -VAR_0;
 }
}
