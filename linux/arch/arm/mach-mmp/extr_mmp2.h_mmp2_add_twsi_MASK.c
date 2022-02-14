
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
 struct pxa_device_desc VAR_3 ;
 struct pxa_device_desc VAR_4 ;
 struct pxa_device_desc VAR_5 ;
 struct pxa_device_desc VAR_6 ;
 int FUNC_1 (struct pxa_device_desc*,struct i2c_pxa_platform_data*,int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_7, struct i2c_pxa_platform_data *VAR_8,
      struct i2c_board_info *VAR_9, unsigned VAR_10)
{
 struct pxa_device_desc *VAR_11 = ((void*)0);
 int VAR_12;

 switch (VAR_7) {
 case 1: VAR_11 = &VAR_1; break;
 case 2: VAR_11 = &VAR_2; break;
 case 3: VAR_11 = &VAR_3; break;
 case 4: VAR_11 = &VAR_4; break;
 case 5: VAR_11 = &VAR_5; break;
 case 6: VAR_11 = &VAR_6; break;
 default:
  return -VAR_0;
 }

 VAR_12 = FUNC_0(VAR_7 - 1, VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;

 return FUNC_1(VAR_11, VAR_8, sizeof(*VAR_8));
}
