
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct thermal_cooling_device {struct mlxreg_fan* devdata; } ;
struct TYPE_2__ {int reg; } ;
struct mlxreg_fan {unsigned long* cooling_levels; int dev; TYPE_1__ pwm; int regmap; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct thermal_cooling_device *VAR_4,
        unsigned long VAR_5)

{
 struct mlxreg_fan *VAR_6 = VAR_4->devdata;
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9;
 int VAR_10;
 if (VAR_5 >= VAR_3 && VAR_5 <= VAR_2) {
  VAR_5 -= VAR_1;
  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
   VAR_6->cooling_levels[VAR_9] = VAR_5;
  for (VAR_9 = VAR_5; VAR_9 <= VAR_1; VAR_9++)
   VAR_6->cooling_levels[VAR_9] = VAR_9;

  VAR_10 = FUNC_3(VAR_6->regmap, VAR_6->pwm.reg, &VAR_8);
  if (VAR_10) {
   FUNC_2(VAR_6->dev, "Failed to query PWM duty\n");
   return VAR_10;
  }

  VAR_7 = FUNC_0(VAR_8);
  if (VAR_5 < VAR_7)
   return 0;

  VAR_5 = VAR_7;
 }

 if (VAR_5 > VAR_1)
  return -VAR_0;


 VAR_5 = VAR_6->cooling_levels[VAR_5];
 VAR_10 = FUNC_4(VAR_6->regmap, VAR_6->pwm.reg,
      FUNC_1(VAR_5));
 if (VAR_10) {
  FUNC_2(VAR_6->dev, "Failed to write PWM duty\n");
  return VAR_10;
 }
 return 0;
}
