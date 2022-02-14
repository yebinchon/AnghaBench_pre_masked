
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct piix_map_db {int port_enable; } ;
struct pci_dev {int dummy; } ;
struct ata_host {int dev; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ata_host *VAR_1,
     const struct piix_map_db *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_4(VAR_1->dev);
 u16 VAR_4, VAR_5;

 FUNC_2(VAR_3, VAR_0, &VAR_4);

 VAR_5 = VAR_4 | VAR_2->port_enable;

 if (VAR_5 != VAR_4) {
  FUNC_0("updating PCS from 0x%x to 0x%x\n", VAR_4, VAR_5);
  FUNC_3(VAR_3, VAR_0, VAR_5);
  FUNC_1(150);
 }
}
