
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{



 int VAR_2, VAR_3;
 u8 VAR_4, VAR_5, VAR_6;

 FUNC_1(&VAR_1->dev, "Searching for i450NX host bridges\n");
 VAR_3 = 0xd0;
 for(VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  FUNC_2(VAR_1, VAR_3++, &VAR_4);
  FUNC_2(VAR_1, VAR_3++, &VAR_5);
  FUNC_2(VAR_1, VAR_3++, &VAR_6);
  FUNC_0(&VAR_1->dev, "i450NX PXB %d: %02x/%02x/%02x\n", VAR_2, VAR_4,
   VAR_5, VAR_6);
  if (VAR_4)
   FUNC_3(VAR_4);
  if (VAR_5 < VAR_6)
   FUNC_3(VAR_5+1);
 }
 VAR_0 = -1;
}
