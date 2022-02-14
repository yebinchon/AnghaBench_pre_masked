
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct an30259a_led {int default_state; TYPE_1__ cdev; int num; struct an30259a* chip; } ;
struct an30259a {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;


 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct an30259a_led *VAR_3)
{
 struct an30259a *VAR_4 = VAR_3->chip;
 int VAR_5, VAR_6;

 switch (VAR_3->default_state) {
 case 128:
  VAR_3->cdev.brightness = VAR_1;
  break;
 case 129:
  VAR_6 = FUNC_3(VAR_4->regmap, VAR_0, &VAR_5);
  if (VAR_6)
   break;

  if (!(VAR_5 & FUNC_0(VAR_3->num))) {
   VAR_3->cdev.brightness = VAR_2;
   break;
  }
  FUNC_3(VAR_4->regmap, FUNC_1(VAR_3->num),
       &VAR_3->cdev.brightness);
  break;
 default:
  VAR_3->cdev.brightness = VAR_2;
 }

 FUNC_2(&VAR_3->cdev, VAR_3->cdev.brightness);
}
