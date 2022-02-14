
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_host {unsigned int n_ports; int * ports; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ata_host *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_4(VAR_5->dev);
 unsigned int VAR_7;
 u32 VAR_8;

 FUNC_0("ENTER\n");


 FUNC_2(VAR_6, VAR_0, &VAR_8);
 VAR_8 |= VAR_1 |
   VAR_2 |
   VAR_3 |
   VAR_4;

 FUNC_3(VAR_6, VAR_0, VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_5->n_ports; VAR_7++)
  FUNC_1(VAR_5->ports[VAR_7]);

 return 0;
}
