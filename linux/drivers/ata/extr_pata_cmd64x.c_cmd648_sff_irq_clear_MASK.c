
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
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,unsigned long) ;
 unsigned long FUNC_3 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_4(VAR_2->host->dev);
 unsigned long VAR_4 = FUNC_3(VAR_3, 4);
 int VAR_5 = VAR_2->port_no ? VAR_1 : VAR_0;
 u8 VAR_6;

 FUNC_0(VAR_2);


 VAR_6 = FUNC_1(VAR_4 + 1);
 VAR_6 &= ~(VAR_0 | VAR_1);
 FUNC_2(VAR_6 | VAR_5, VAR_4 + 1);
}
