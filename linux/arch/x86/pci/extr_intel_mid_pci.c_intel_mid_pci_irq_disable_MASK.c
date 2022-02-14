
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ irq; scalar_t__ irq_managed; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 if (!FUNC_0(&VAR_0->dev) && VAR_0->irq_managed &&
     VAR_0->irq > 0) {
  FUNC_1(VAR_0->irq);
  VAR_0->irq_managed = 0;
 }
}
