
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct pci_dev*,unsigned long,int*) ;
 unsigned long FUNC_1 (struct ata_port*,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct ata_port *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_2(VAR_0->host->dev);
 unsigned long VAR_2 = FUNC_1(VAR_0, 1);
 u8 VAR_3;

 FUNC_0(VAR_1, VAR_2, &VAR_3);

 return VAR_3 & 0x08;
}
