
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int fwnode; } ;
struct pci_bus {struct device dev; struct pci_bus* parent; } ;
struct acpi_iort_node {int dummy; } ;
struct TYPE_2__ {struct pci_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct acpi_iort_node* FUNC_1 (int ) ;
 int VAR_2 ;
 struct acpi_iort_node* FUNC_2 (int ,int ,struct device*) ;
 int FUNC_3 (struct pci_bus*) ;
 TYPE_1__* FUNC_4 (struct device*) ;

__attribute__((used)) static struct acpi_iort_node *FUNC_5(struct device *VAR_3)
{
 struct pci_bus *VAR_4;

 if (!FUNC_0(VAR_3)) {
  struct acpi_iort_node *VAR_5;






  VAR_5 = FUNC_1(VAR_3->fwnode);
  if (VAR_5)
   return VAR_5;





  return FUNC_2(VAR_0,
          VAR_2, VAR_3);
 }


 VAR_4 = FUNC_4(VAR_3)->bus;
 while (!FUNC_3(VAR_4))
  VAR_4 = VAR_4->parent;

 return FUNC_2(VAR_1,
         VAR_2, &VAR_4->dev);
}
