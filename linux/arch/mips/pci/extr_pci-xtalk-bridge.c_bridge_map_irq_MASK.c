
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pci_dev {int bus; } ;
struct irq_alloc_info {size_t pin; int nasid; struct bridge_controller* ctrl; } ;
struct bridge_controller {int* pci_int; int nasid; int domain; } ;


 struct bridge_controller* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,struct irq_alloc_info*) ;

__attribute__((used)) static int FUNC_2(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct bridge_controller *VAR_3 = FUNC_0(VAR_0->bus);
 struct irq_alloc_info VAR_4;
 int VAR_5;

 VAR_5 = VAR_3->pci_int[VAR_1];
 if (VAR_5 == -1) {
  VAR_4.ctrl = VAR_3;
  VAR_4.nasid = VAR_3->nasid;
  VAR_4.pin = VAR_1;

  VAR_5 = FUNC_1(VAR_3->domain, 1, VAR_3->nasid, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_3->pci_int[VAR_1] = VAR_5;
 }
 return VAR_5;
}
