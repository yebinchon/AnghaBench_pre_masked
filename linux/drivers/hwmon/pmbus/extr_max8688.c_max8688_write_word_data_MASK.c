
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct i2c_client*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_4, int VAR_5, int VAR_6,
       u16 VAR_7)
{
 int VAR_8;

 switch (VAR_6) {
 case 128:
  VAR_8 = FUNC_0(VAR_4, 0, VAR_3,
         0);
  break;
 case 130:
  VAR_8 = FUNC_0(VAR_4, 0, VAR_1,
         0);
  break;
 case 129:
  VAR_8 = FUNC_0(VAR_4, 0,
         VAR_2,
         0xffff);
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 return VAR_8;
}
