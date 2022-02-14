
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
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
 u32 VAR_4, VAR_5 = VAR_2->port_no ? VAR_1 : VAR_0;

 FUNC_0(VAR_3, 0x40, &VAR_4);

 return VAR_4 & VAR_5;
}
