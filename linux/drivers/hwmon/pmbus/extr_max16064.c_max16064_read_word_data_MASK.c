
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct i2c_client*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 switch (VAR_5) {
 case 130:
  VAR_6 = FUNC_0(VAR_3, VAR_4,
        VAR_2);
  break;
 case 131:
  VAR_6 = FUNC_0(VAR_3, VAR_4,
        VAR_1);
  break;
 case 128:
 case 129:
  VAR_6 = 0;
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 return VAR_6;
}
