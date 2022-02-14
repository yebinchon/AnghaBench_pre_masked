
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_port *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_3->host->dev);
 u8 VAR_5;




 if (FUNC_0(VAR_4))
  return VAR_1;



 FUNC_1(VAR_4, 0x4A, &VAR_5);
 if (VAR_5 & (1 << VAR_3->port_no))
  return VAR_0;
 else
  return VAR_2;
}
