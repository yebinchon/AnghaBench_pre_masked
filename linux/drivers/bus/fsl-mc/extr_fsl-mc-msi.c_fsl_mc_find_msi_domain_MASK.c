
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_domain* FUNC_0 (struct device*,struct device_node*,int ) ;
 int FUNC_1 (char*,struct device_node*) ;

int FUNC_2(struct device *VAR_2,
      struct irq_domain **VAR_3)
{
 struct irq_domain *VAR_4;
 struct device_node *VAR_5 = VAR_2->of_node;

 VAR_4 = FUNC_0(VAR_2, VAR_5,
           VAR_0);
 if (!VAR_4) {
  FUNC_1("Unable to find fsl-mc MSI domain for %pOF\n",
         VAR_5);

  return -VAR_1;
 }

 *VAR_3 = VAR_4;
 return 0;
}
