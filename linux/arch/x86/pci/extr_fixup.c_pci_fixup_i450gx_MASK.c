
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct pci_dev*,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{




 u8 VAR_2;
 FUNC_1(VAR_1, 0x4a, &VAR_2);
 FUNC_0(&VAR_1->dev, "i440KX/GX host bridge; secondary bus %02x\n", VAR_2);
 FUNC_2(VAR_2);
 VAR_0 = -1;
}
