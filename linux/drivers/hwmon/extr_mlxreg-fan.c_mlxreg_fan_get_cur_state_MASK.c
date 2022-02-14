
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct thermal_cooling_device {struct mlxreg_fan* devdata; } ;
struct TYPE_2__ {int reg; } ;
struct mlxreg_fan {int dev; TYPE_1__ pwm; int regmap; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct thermal_cooling_device *VAR_0,
        unsigned long *VAR_1)

{
 struct mlxreg_fan *VAR_2 = VAR_0->devdata;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->regmap, VAR_2->pwm.reg, &VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_2->dev, "Failed to query PWM duty\n");
  return VAR_4;
 }

 *VAR_1 = FUNC_0(VAR_3);

 return 0;
}
