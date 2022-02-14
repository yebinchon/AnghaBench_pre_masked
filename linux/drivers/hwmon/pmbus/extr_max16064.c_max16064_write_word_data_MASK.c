
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct i2c_client*,int,int ,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3, int VAR_4,
        int VAR_5, u16 VAR_6)
{
 int VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_7 = FUNC_0(VAR_3, VAR_4,
         VAR_2, 0);
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_3, VAR_4,
         VAR_1,
         0xffff);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }
 return VAR_7;
}
