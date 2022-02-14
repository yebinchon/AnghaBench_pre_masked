
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sch311x_gpio_priv {TYPE_1__* blocks; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int chip; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 struct sch311x_gpio_priv* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct sch311x_gpio_priv *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->blocks); VAR_2++) {
  FUNC_2(&VAR_1->blocks[VAR_2].chip);
  FUNC_1(&VAR_0->dev,
    "SMSC SCH311x GPIO block %d unregistered.\n", VAR_2);
 }
 return 0;
}
