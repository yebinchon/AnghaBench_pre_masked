
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int of_node; TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mvebu_gpio_chip {int offset; int regs; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1,
       struct mvebu_gpio_chip *VAR_2)
{
 VAR_2->regs = FUNC_3(VAR_1->dev.parent->of_node);
 if (FUNC_0(VAR_2->regs))
  return FUNC_1(VAR_2->regs);

 if (FUNC_2(VAR_1->dev.of_node, "offset", &VAR_2->offset))
  return -VAR_0;

 return 0;
}
