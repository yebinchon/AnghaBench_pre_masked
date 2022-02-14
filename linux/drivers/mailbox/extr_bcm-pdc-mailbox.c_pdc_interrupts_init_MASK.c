
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct pdc_state {scalar_t__ hw_type; int pdc_irq; scalar_t__ pdc_reg_vbase; struct platform_device* pdev; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int ,int ,struct pdc_state*) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int ,int ,int ,struct device*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct device_node*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct pdc_state *VAR_8)
{
 struct platform_device *VAR_9 = VAR_8->pdev;
 struct device *VAR_10 = &VAR_9->dev;
 struct device_node *VAR_11 = VAR_9->dev.of_node;
 int VAR_12;


 FUNC_4(VAR_2, VAR_8->pdc_reg_vbase + VAR_3);

 if (VAR_8->hw_type == VAR_0)
  FUNC_4(VAR_4, VAR_8->pdc_reg_vbase +
     VAR_1);
 else
  FUNC_4(VAR_4, VAR_8->pdc_reg_vbase +
     VAR_5);


 VAR_8->pdc_irq = FUNC_5(VAR_11, 0);
 FUNC_0(VAR_10, "pdc device %s irq %u for pdcs %p",
  FUNC_2(VAR_10), VAR_8->pdc_irq, VAR_8);

 VAR_12 = FUNC_3(VAR_10, VAR_8->pdc_irq, VAR_7, 0,
          FUNC_2(VAR_10), VAR_10);
 if (VAR_12) {
  FUNC_1(VAR_10, "IRQ %u request failed with err %d\n",
   VAR_8->pdc_irq, VAR_12);
  return VAR_12;
 }
 return VAR_6;
}
