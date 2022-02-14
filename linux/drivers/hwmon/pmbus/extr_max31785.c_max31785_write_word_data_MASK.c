
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct i2c_client*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, int VAR_3,
        int VAR_4, u16 VAR_5)
{
 switch (VAR_4) {
 case 129:
  return FUNC_2(VAR_2, VAR_3, 0, 0, VAR_1,
     FUNC_1(VAR_5));
 case 128:
  return FUNC_0(VAR_2, VAR_3, VAR_5);
 default:
  break;
 }

 return -VAR_0;
}
