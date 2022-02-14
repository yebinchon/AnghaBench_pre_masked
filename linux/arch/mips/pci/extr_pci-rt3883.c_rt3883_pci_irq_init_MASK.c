
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt3883_pci_controller {int irq_domain; int intc_of_node; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ,int ,int *,struct rt3883_pci_controller*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ,struct rt3883_pci_controller*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct rt3883_pci_controller*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6,
          struct rt3883_pci_controller *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_7->intc_of_node, 0);
 if (VAR_8 == 0) {
  FUNC_0(VAR_6, "%pOF has no IRQ", VAR_7->intc_of_node);
  return -VAR_0;
 }


 FUNC_4(VAR_7, 0, VAR_3);

 VAR_7->irq_domain =
  FUNC_1(VAR_7->intc_of_node, VAR_2,
          &VAR_4,
          VAR_7);
 if (!VAR_7->irq_domain) {
  FUNC_0(VAR_6, "unable to add IRQ domain\n");
  return -VAR_1;
 }

 FUNC_3(VAR_8, VAR_5, VAR_7);

 return 0;
}
