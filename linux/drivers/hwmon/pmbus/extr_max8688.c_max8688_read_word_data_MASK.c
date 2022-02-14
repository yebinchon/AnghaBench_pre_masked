
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_6 > 0)
  return -VAR_1;

 switch (VAR_7) {
 case 131:
  VAR_8 = FUNC_0(VAR_5, 0, VAR_4);
  break;
 case 133:
  VAR_8 = FUNC_0(VAR_5, 0, VAR_2);
  break;
 case 132:
  VAR_8 = FUNC_0(VAR_5, 0,
        VAR_3);
  break;
 case 128:
 case 130:
 case 129:
  VAR_8 = 0;
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }
 return VAR_8;
}
