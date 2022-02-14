
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
 int FUNC_0 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ata_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_2->host->dev);
 int VAR_4 = VAR_2->port_no ? VAR_0 : VAR_1;
 u8 VAR_5, VAR_6 = VAR_2->port_no ? 0x10 : 0x04;

 FUNC_0(VAR_3, VAR_4, &VAR_5);

 return VAR_5 & VAR_6;
}
