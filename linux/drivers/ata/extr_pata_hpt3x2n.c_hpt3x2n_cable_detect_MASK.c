
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
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ata_port *VAR_2)
{
 u8 VAR_3, VAR_4;
 struct pci_dev *VAR_5 = FUNC_2(VAR_2->host->dev);

 FUNC_0(VAR_5, 0x5B, &VAR_3);
 FUNC_1(VAR_5, 0x5B, VAR_3 & ~0x01);

 FUNC_3(10);


 FUNC_0(VAR_5, 0x5A, &VAR_4);

 FUNC_1(VAR_5, 0x5B, VAR_3);

 if (VAR_4 & (2 >> VAR_2->port_no))
  return VAR_0;
 else
  return VAR_1;
}
