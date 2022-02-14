
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;
struct ata_host {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ata_host*,char const*) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_host *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_3->dev);
 u16 VAR_5;
 const char *VAR_6;

 FUNC_1(VAR_4, 0x0a, &VAR_5);
 if (VAR_5 == VAR_0)
  VAR_6 = "IDE";
 else if (VAR_5 == VAR_2)
  VAR_6 = "SATA";
 else if (VAR_5 == VAR_1)
  VAR_6 = "RAID";
 else
  VAR_6 = "unknown";

 FUNC_0(VAR_3, VAR_6);
}
