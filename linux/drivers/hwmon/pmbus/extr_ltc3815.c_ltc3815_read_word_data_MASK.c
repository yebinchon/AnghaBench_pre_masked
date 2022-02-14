
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
 int VAR_5 ;
 int FUNC_0 (struct i2c_client*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;

 switch (VAR_8) {
 case 134:
  VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_4);
  break;
 case 133:
  VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_5);
  break;
 case 135:
  VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_3);
  break;
 case 136:
  VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_2);
  break;
 case 137:
  VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_1);
  break;
 case 128:
 case 129:
 case 130:
 case 131:
 case 132:
  VAR_9 = 0;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }
 return VAR_9;
}
