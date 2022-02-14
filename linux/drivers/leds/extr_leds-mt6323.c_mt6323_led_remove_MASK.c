
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mt6323_leds {int lock; TYPE_2__* hw; TYPE_1__** led; } ;
struct TYPE_4__ {int regmap; } ;
struct TYPE_3__ {int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mt6323_leds* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct mt6323_leds *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;


 for (VAR_5 = 0 ; VAR_4->led[VAR_5] ; VAR_5++)
  FUNC_0(&VAR_4->led[VAR_5]->cdev);

 FUNC_3(VAR_4->hw->regmap, VAR_2,
      VAR_1,
      VAR_0);

 FUNC_1(&VAR_4->lock);

 return 0;
}
