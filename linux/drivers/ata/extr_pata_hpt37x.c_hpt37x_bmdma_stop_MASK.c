
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_queued_cmd {struct ata_port* ap; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct pci_dev *VAR_2 = FUNC_3(VAR_1->host->dev);
 int VAR_3 = 0x50 + 4 * VAR_1->port_no;
 u8 VAR_4, VAR_5;

 FUNC_1(VAR_2, 0x6A, &VAR_4);
 FUNC_1(VAR_2, VAR_3, &VAR_5);
 if (VAR_4 & (1 << VAR_1->port_no))
  FUNC_2(VAR_2, VAR_3, VAR_5 | 0x30);
 FUNC_0(VAR_0);
}
