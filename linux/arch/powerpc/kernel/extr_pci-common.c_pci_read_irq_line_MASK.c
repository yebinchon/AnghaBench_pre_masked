
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_3)
{
 int VAR_4;

 FUNC_5("PCI: Try to map irq for %s...\n", FUNC_3(VAR_3));


 VAR_4 = FUNC_2(VAR_3, 0, 0);
 if (VAR_4 <= 0) {
  u8 VAR_5, VAR_6;
  if (FUNC_4(VAR_3, VAR_2, &VAR_6))
   return -1;
  if (VAR_6 == 0)
   return -1;
  if (FUNC_4(VAR_3, VAR_1, &VAR_5) ||
      VAR_5 == 0xff || VAR_5 == 0) {
   return -1;
  }
  FUNC_5(" No map ! Using line %d (pin %d) from PCI config\n",
    VAR_5, VAR_6);

  VAR_4 = FUNC_0(((void*)0), VAR_5);
  if (VAR_4)
   FUNC_1(VAR_4, VAR_0);
 }

 if (!VAR_4) {
  FUNC_5(" Failed to map !\n");
  return -1;
 }

 FUNC_5(" Mapped to linux irq %d\n", VAR_4);

 VAR_3->irq = VAR_4;

 return 0;
}
