
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_port {scalar_t__ port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_port *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_2(VAR_5->host->dev);
 u8 VAR_7;

 if (FUNC_0(VAR_4))
  return VAR_1;



 FUNC_1(VAR_6, VAR_3 + VAR_5->port_no, &VAR_7);
 if ((VAR_7 & 0x07) >= 0x04 || (VAR_7 & 0x70) >= 0x40)
  return VAR_2;
 return VAR_0;
}
