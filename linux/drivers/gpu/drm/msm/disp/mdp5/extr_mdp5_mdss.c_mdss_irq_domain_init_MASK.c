
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct irq_domain* domain; scalar_t__ enabled_mask; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct mdp5_mdss {TYPE_3__ irqcontroller; TYPE_2__ base; } ;
struct irq_domain {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_4__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 struct irq_domain* FUNC_1 (int ,int,int *,struct mdp5_mdss*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct mdp5_mdss *VAR_2)
{
 struct device *VAR_3 = VAR_2->base.dev->dev;
 struct irq_domain *VAR_4;

 VAR_4 = FUNC_1(VAR_3->of_node, 32, &VAR_1,
      VAR_2);
 if (!VAR_4) {
  FUNC_0(VAR_3, "mdss irq domain add failed\n");
  return -VAR_0;
 }

 VAR_2->irqcontroller.enabled_mask = 0;
 VAR_2->irqcontroller.domain = VAR_4;

 return 0;
}
