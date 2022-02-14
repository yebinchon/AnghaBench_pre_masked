
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sh_mobile_i2c_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sh_mobile_i2c_data*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct sh_mobile_i2c_data *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 1000; VAR_6; VAR_6--) {
  u_int8_t VAR_7 = FUNC_0(VAR_5, VAR_2);

  if (VAR_7 & VAR_3)
   break;

  if (VAR_7 & VAR_4)
   return -VAR_0;

  FUNC_1(10);
 }

 return VAR_6 ? 0 : -VAR_1;
}
