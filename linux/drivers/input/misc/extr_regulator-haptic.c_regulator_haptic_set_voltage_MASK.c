
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct regulator_haptic {scalar_t__ min_volt; int dev; scalar_t__ max_volt; int regulator; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct regulator_haptic*,int) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct regulator_haptic *VAR_1,
      unsigned int VAR_2)
{
 u64 VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_3 = (u64)(VAR_1->max_volt - VAR_1->min_volt) * VAR_2;
 VAR_4 = (unsigned int)(VAR_3 >> VAR_0);

 VAR_5 = FUNC_2(VAR_1->regulator,
          VAR_4 + VAR_1->min_volt,
          VAR_1->max_volt);
 if (VAR_5) {
  FUNC_0(VAR_1->dev, "cannot set regulator voltage to %d: %d\n",
   VAR_4 + VAR_1->min_volt, VAR_5);
  return VAR_5;
 }

 FUNC_1(VAR_1, !!VAR_2);

 return 0;
}
