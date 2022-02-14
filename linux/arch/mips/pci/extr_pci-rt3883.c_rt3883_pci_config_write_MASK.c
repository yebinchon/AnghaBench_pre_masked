
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt3883_pci_controller {int pcie_ready; } ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct rt3883_pci_controller* FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (int,int ,int ,int) ;
 int FUNC_4 (struct rt3883_pci_controller*,int ) ;
 int FUNC_5 (struct rt3883_pci_controller*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_bus *VAR_4, unsigned int VAR_5,
       int VAR_6, int VAR_7, u32 VAR_8)
{
 struct rt3883_pci_controller *VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 VAR_9 = FUNC_2(VAR_4);

 if (!VAR_9->pcie_ready && VAR_4->number == 1)
  return VAR_0;

 VAR_11 = FUNC_3(VAR_4->number, FUNC_1(VAR_5),
      FUNC_0(VAR_5), VAR_6);

 FUNC_5(VAR_9, VAR_11, VAR_2);
 VAR_12 = FUNC_4(VAR_9, VAR_3);

 switch (VAR_7) {
 case 1:
  VAR_12 = (VAR_12 & ~(0xff << ((VAR_6 & 3) << 3))) |
         (VAR_8 << ((VAR_6 & 3) << 3));
  break;
 case 2:
  VAR_12 = (VAR_12 & ~(0xffff << ((VAR_6 & 3) << 3))) |
         (VAR_8 << ((VAR_6 & 3) << 3));
  break;
 case 4:
  VAR_12 = VAR_8;
  break;
 }

 FUNC_5(VAR_9, VAR_12, VAR_3);

 return VAR_1;
}
