
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
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_2->host->dev);
 u8 VAR_4;


 FUNC_0(VAR_3, 0x48, &VAR_4);
 VAR_4 >>= VAR_2->port_no;
 if ((VAR_4 & 0x10) && !FUNC_1(VAR_3))
  return VAR_0;
 return VAR_1;
}
