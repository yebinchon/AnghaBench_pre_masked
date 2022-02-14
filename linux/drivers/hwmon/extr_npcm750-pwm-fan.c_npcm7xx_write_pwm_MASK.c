
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct npcm7xx_pwm_fan_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 struct npcm7xx_pwm_fan_data* FUNC_0 (struct device*) ;

 int FUNC_1 (struct npcm7xx_pwm_fan_data*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3, u32 VAR_4, int VAR_5,
        long VAR_6)
{
 struct npcm7xx_pwm_fan_data *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;

 switch (VAR_4) {
 case 128:
  if (VAR_6 < 0 || VAR_6 > VAR_2)
   return -VAR_0;
  VAR_8 = FUNC_1(VAR_7, VAR_5, (u16)VAR_6);
  break;
 default:
  VAR_8 = -VAR_1;
  break;
 }

 return VAR_8;
}
