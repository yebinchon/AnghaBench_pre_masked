
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_7, int VAR_8, int *VAR_9)
{
 int VAR_10;
 u8 VAR_11;

 switch (VAR_8) {
 case 135:
  VAR_11 = VAR_6;
  break;
 case 134:
 case 137:
 case 129:
  VAR_11 = VAR_2;
  break;
 case 133:
  VAR_11 = VAR_3;
  break;
 case 132:
 case 136:
 case 128:
  VAR_11 = VAR_4;
  break;
 case 131:
  VAR_11 = VAR_5;
  break;
 case 130:
  VAR_11 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_11);
 if (FUNC_2(VAR_10 < 0))
  return VAR_10;

 switch (VAR_8) {
 case 130:
 case 129:
 case 128:

  *VAR_9 = FUNC_1(VAR_10, 12) * 1000 / 16;
  break;
 case 137:
 case 136:

  *VAR_9 = FUNC_1(VAR_10, 14) * 1942 / 100;
  break;
 case 135:

  *VAR_9 = FUNC_1(VAR_10, 14) * 30518 / (100 * 1000) + 2500;
  break;
 case 134:
 case 133:
 case 132:
 case 131:

  *VAR_9 = FUNC_1(VAR_10, 14) * 30518 / (100 * 1000);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
