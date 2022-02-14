
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_haptic {int enabled; scalar_t__ mode; int mutex; int regulator; int pwm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct max8997_haptic*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct max8997_haptic *VAR_1)
{
 FUNC_1(&VAR_1->mutex);

 if (VAR_1->enabled) {
  VAR_1->enabled = 0;
  FUNC_0(VAR_1);
  if (VAR_1->mode == VAR_0)
   FUNC_3(VAR_1->pwm);
  FUNC_4(VAR_1->regulator);
 }

 FUNC_2(&VAR_1->mutex);
}
