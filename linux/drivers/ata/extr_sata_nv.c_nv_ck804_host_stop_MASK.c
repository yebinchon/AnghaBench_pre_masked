
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_host {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_host *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_2->dev);
 u8 VAR_4;


 FUNC_0(VAR_3, VAR_0, &VAR_4);
 VAR_4 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
