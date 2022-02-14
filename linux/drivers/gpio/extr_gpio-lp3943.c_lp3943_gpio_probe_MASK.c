
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {TYPE_2__* parent; } ;
struct lp3943_gpio {TYPE_1__ chip; struct lp3943* lp3943; } ;
struct lp3943 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp3943* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,struct lp3943_gpio*) ;
 struct lp3943_gpio* FUNC_2 (TYPE_2__*,int,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct platform_device*,struct lp3943_gpio*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct lp3943 *VAR_4 = FUNC_0(VAR_3->dev.parent);
 struct lp3943_gpio *VAR_5;

 VAR_5 = FUNC_2(&VAR_3->dev, sizeof(*VAR_5),
    VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->lp3943 = VAR_4;
 VAR_5->chip = VAR_2;
 VAR_5->chip.parent = &VAR_3->dev;

 FUNC_3(VAR_3, VAR_5);

 return FUNC_1(&VAR_3->dev, &VAR_5->chip,
          VAR_5);
}
