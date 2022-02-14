
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_device_desc {int dummy; } ;
struct i2c_pxa_platform_data {int dummy; } ;
struct i2c_board_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct i2c_board_info*,unsigned int) ;
 struct pxa_device_desc VAR_1 ;
 struct pxa_device_desc VAR_2 ;
 int FUNC_1 (struct pxa_device_desc*,struct i2c_pxa_platform_data*,int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_3, struct i2c_pxa_platform_data *VAR_4,
      struct i2c_board_info *VAR_5, unsigned VAR_6)
{
 struct pxa_device_desc *VAR_7 = ((void*)0);
 int VAR_8;

 switch (VAR_3) {
 case 0: VAR_7 = &VAR_1; break;
 case 1: VAR_7 = &VAR_2; break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_3, VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;

 return FUNC_1(VAR_7, VAR_4, sizeof(*VAR_4));
}
