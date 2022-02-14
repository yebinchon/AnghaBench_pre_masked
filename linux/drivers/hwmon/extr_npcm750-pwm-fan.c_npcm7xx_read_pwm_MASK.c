
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct npcm7xx_pwm_fan_data {int pwm_base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 struct npcm7xx_pwm_fan_data* FUNC_1 (struct device*) ;

 long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, u32 VAR_3, int VAR_4,
       long *VAR_5)
{
 struct npcm7xx_pwm_fan_data *VAR_6 = FUNC_1(VAR_2);
 u32 VAR_7 = (VAR_4 % VAR_1);
 u32 VAR_8 = (VAR_4 / VAR_1);

 switch (VAR_3) {
 case 128:
  *VAR_5 = FUNC_2
   (FUNC_0(VAR_6->pwm_base, VAR_8, VAR_7));
  return 0;
 default:
  return -VAR_0;
 }
}
