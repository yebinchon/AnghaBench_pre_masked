
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int ,struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(int VAR_6)
{
 struct pci_dev *VAR_7;
 int VAR_8;
 u32 VAR_9 = 0;

 VAR_8 = 0;
 VAR_7 = ((void*)0);
 do {
  VAR_7 = FUNC_1(VAR_5,
      VAR_4,
      VAR_7);
  if (!VAR_7)
   break;
  ++VAR_8;
  FUNC_3(VAR_7, VAR_2, VAR_6
           | VAR_3);
  FUNC_2(VAR_7, VAR_2, &VAR_9);
  if (VAR_9 != (VAR_6 | VAR_3)) {
   FUNC_0(VAR_7);
   FUNC_4("Failed to setup IBS LVT offset, IBSCTL = 0x%08x\n",
     VAR_9);
   return -VAR_0;
  }
 } while (1);

 if (!VAR_8) {
  FUNC_4("No CPU node configured for IBS\n");
  return -VAR_1;
 }

 return 0;
}
