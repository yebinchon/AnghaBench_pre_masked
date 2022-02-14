
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ,int,int*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3, int VAR_4,
       int VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 switch (VAR_5) {
 case 130:
  if (VAR_4 < VAR_2)
   return -VAR_0;

  VAR_7 = FUNC_2(VAR_3, VAR_4 - VAR_2,
          VAR_5, &VAR_6);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = (VAR_6 >> 16) & 0xffff;
  break;
 case 131:






  VAR_7 = (VAR_4 >= VAR_2) ? -VAR_1 : -VAR_0;
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_3, VAR_4);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
