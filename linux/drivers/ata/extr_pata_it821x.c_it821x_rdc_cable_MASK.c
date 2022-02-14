
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ata_port *VAR_2)
{
 u16 VAR_3;
 struct pci_dev *VAR_4 = FUNC_1(VAR_2->host->dev);

 FUNC_0(VAR_4, 0x40, &VAR_3);
 if (VAR_3 & (1 << (2 + VAR_2->port_no)))
  return VAR_0;
 return VAR_1;
}
