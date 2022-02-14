
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct TYPE_6__ {struct irq_domain* domain; scalar_t__ enabled_mask; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct dpu_mdss {TYPE_3__ irq_controller; TYPE_2__ base; } ;
struct device {int of_node; } ;
struct TYPE_4__ {struct device* dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct irq_domain* FUNC_1 (int ,int,int *,struct dpu_mdss*) ;

__attribute__((used)) static int FUNC_2(struct dpu_mdss *VAR_2)
{
 struct device *VAR_3;
 struct irq_domain *VAR_4;

 VAR_3 = VAR_2->base.dev->dev;

 VAR_4 = FUNC_1(VAR_3->of_node, 32,
   &VAR_1, VAR_2);
 if (!VAR_4) {
  FUNC_0("failed to add irq_domain\n");
  return -VAR_0;
 }

 VAR_2->irq_controller.enabled_mask = 0;
 VAR_2->irq_controller.domain = VAR_4;

 return 0;
}
