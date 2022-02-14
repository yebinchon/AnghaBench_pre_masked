
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_pwm_tacho_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aspeed_pwm_tacho_data*,int *,int,scalar_t__) ;
 int FUNC_1 (struct device*,struct device_node*,struct aspeed_pwm_tacho_data*,scalar_t__,int) ;
 int FUNC_2 (struct aspeed_pwm_tacho_data*,int ) ;
 int * FUNC_3 (struct device*,int,int,int ) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_6 (struct device_node*,char*,int *,int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3,
        struct device_node *VAR_4,
        struct aspeed_pwm_tacho_data *VAR_5)
{
 u8 *VAR_6;
 u32 VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_5(VAR_4, "reg", &VAR_7);
 if (VAR_8)
  return VAR_8;
 FUNC_2(VAR_5, (u8)VAR_7);

 VAR_8 = FUNC_4(VAR_4, "cooling-levels");

 if (VAR_8 > 0) {
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7,
      VAR_8);
  if (VAR_8)
   return VAR_8;
 }

 VAR_9 = FUNC_4(VAR_4, "aspeed,fan-tach-ch");
 if (VAR_9 < 1)
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_3, VAR_9, sizeof(*VAR_6),
       VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_8 = FUNC_6(VAR_4, "aspeed,fan-tach-ch",
     VAR_6, VAR_9);
 if (VAR_8)
  return VAR_8;
 FUNC_0(VAR_5, VAR_6, VAR_9, VAR_7);

 return 0;
}
