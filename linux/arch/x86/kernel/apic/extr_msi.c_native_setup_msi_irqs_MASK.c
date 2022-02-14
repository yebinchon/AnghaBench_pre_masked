
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct irq_domain {int dummy; } ;
struct irq_alloc_info {struct pci_dev* msi_dev; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_alloc_info*,int *) ;
 struct irq_domain* FUNC_1 (struct irq_alloc_info*) ;
 struct irq_domain* VAR_2 ;
 int FUNC_2 (struct irq_domain*,int *,int) ;

int FUNC_3(struct pci_dev *VAR_3, int VAR_4, int VAR_5)
{
 struct irq_domain *VAR_6;
 struct irq_alloc_info VAR_7;

 FUNC_0(&VAR_7, ((void*)0));
 VAR_7.type = VAR_1;
 VAR_7.msi_dev = VAR_3;

 VAR_6 = FUNC_1(&VAR_7);
 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_2;
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 return FUNC_2(VAR_6, &VAR_3->dev, VAR_4);
}
