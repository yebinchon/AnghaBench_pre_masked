
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, int VAR_3, u8 VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 128:




  VAR_5 = FUNC_0(VAR_2, 0, VAR_1);
  if (VAR_5 > 0) {
   FUNC_1(VAR_2, 0, VAR_1,
           VAR_5);
   VAR_5 = 0;
  }
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
