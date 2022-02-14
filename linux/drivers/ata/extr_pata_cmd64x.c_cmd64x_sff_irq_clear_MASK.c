
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
 int FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct pci_dev*,int,int *) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_2->host->dev);
 int VAR_4 = VAR_2->port_no ? VAR_0 : VAR_1;
 u8 VAR_5;

 FUNC_0(VAR_2);


 FUNC_1(VAR_3, VAR_4, &VAR_5);
}
