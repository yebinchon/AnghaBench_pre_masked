
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct pci_dev {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ,char*,int*) ;

int FUNC_2(struct pci_dev *VAR_0, int *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->dev.of_node, "ibm,opal-xsl-irq", VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev,
   "Can't get translation interrupt for device\n");
  return VAR_2;
 }
 return 0;
}
