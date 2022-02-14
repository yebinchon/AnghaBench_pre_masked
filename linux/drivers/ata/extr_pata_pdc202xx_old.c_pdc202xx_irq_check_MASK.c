
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct ata_port *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_2(VAR_0->host->dev);
 unsigned long VAR_2 = FUNC_1(VAR_1, 4);
 u8 VAR_3 = FUNC_0(VAR_2 + 0x1d);

 if (VAR_0->port_no) {




  return VAR_3 & 0x40;
 } else {




  return VAR_3 & 0x04;
 }
}
