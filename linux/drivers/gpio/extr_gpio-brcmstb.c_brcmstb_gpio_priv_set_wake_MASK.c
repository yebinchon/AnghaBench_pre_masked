
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmstb_gpio_priv {TYPE_1__* pdev; int parent_wake_irq; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct brcmstb_gpio_priv *VAR_0,
  unsigned int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1)
  VAR_2 = FUNC_2(VAR_0->parent_wake_irq);
 else
  VAR_2 = FUNC_1(VAR_0->parent_wake_irq);
 if (VAR_2)
  FUNC_0(&VAR_0->pdev->dev, "failed to %s wake-up interrupt\n",
    VAR_1 ? "enable" : "disable");
 return VAR_2;
}
