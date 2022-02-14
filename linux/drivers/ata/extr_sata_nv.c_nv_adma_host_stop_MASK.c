
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_host {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_host*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_host *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_3(VAR_5->dev);
 u32 VAR_7;


 FUNC_1(VAR_6, VAR_0, &VAR_7);
 VAR_7 &= ~(VAR_1 |
     VAR_2 |
     VAR_3 |
     VAR_4);

 FUNC_2(VAR_6, VAR_0, VAR_7);

 FUNC_0(VAR_5);
}
