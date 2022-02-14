
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct npcm7xx_pwm_fan_data {int* pwm_present; int* fan_present; TYPE_1__* fan_dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int fan_st_flg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (struct device*,int,int,int ) ;
 int FUNC_1 (struct device*,struct device_node*,struct npcm7xx_pwm_fan_data*,size_t,int) ;
 int FUNC_2 (struct npcm7xx_pwm_fan_data*,size_t,int ) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,size_t*) ;
 int FUNC_5 (struct device_node*,char*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_5,
         struct device_node *VAR_6,
         struct npcm7xx_pwm_fan_data *VAR_7)
{
 u8 *VAR_8;
 u32 VAR_9;
 int VAR_10, VAR_11;
 u8 VAR_12, VAR_13;

 VAR_10 = FUNC_4(VAR_6, "reg", &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_7->pwm_present[VAR_9] = 1;
 VAR_10 = FUNC_2(VAR_7, VAR_9,
         VAR_4);

 VAR_10 = FUNC_3(VAR_6, "cooling-levels");
 if (VAR_10 > 0) {
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_9,
       VAR_10);
  if (VAR_10)
   return VAR_10;
 }

 VAR_11 = FUNC_3(VAR_6, "fan-tach-ch");
 if (VAR_11 < 1)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_5, VAR_11, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_5(VAR_6, "fan-tach-ch", VAR_8, VAR_11);
 if (VAR_10)
  return VAR_10;

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_12 = VAR_8[VAR_13];
  VAR_7->fan_present[VAR_12] = 1;
  VAR_7->fan_dev[VAR_12].fan_st_flg = VAR_2;
 }

 return 0;
}
