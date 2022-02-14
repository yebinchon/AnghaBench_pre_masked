
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; int dev; } ;
struct agp_bridge_data {int major_version; scalar_t__ minor_version; } ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0, struct agp_bridge_data *VAR_1)
{
 char *VAR_2;

 switch (VAR_0->revision) {
 case 0x01: VAR_2="A0"; break;
 case 0x02: VAR_2="A1"; break;
 case 0x11: VAR_2="B0"; break;
 case 0x12: VAR_2="B1"; break;
 case 0x13: VAR_2="B2"; break;
 case 0x14: VAR_2="B3"; break;
 default: VAR_2="??"; break;
 }

 FUNC_0(&VAR_0->dev, "AMD 8151 AGP Bridge rev %s\n", VAR_2);





 if (VAR_0->revision < 0x13) {
  FUNC_0(&VAR_0->dev, "correcting AGP revision (reports 3.5, is really 3.0)\n");
  VAR_1->major_version = 3;
  VAR_1->minor_version = 0;
 }
}
