
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ata_queued_cmd {TYPE_2__* dev; struct ata_port* ap; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_4__ {int devno; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct pci_dev *VAR_3 = FUNC_3(VAR_2->host->dev);
 int VAR_4 = (2 * VAR_2->port_no) + VAR_1->dev->devno;
 u16 VAR_5;

 FUNC_1(VAR_3, VAR_0, &VAR_5);
 VAR_5 &= ~(1 << VAR_4);
 FUNC_2(VAR_3, VAR_0, VAR_5);
 FUNC_0(VAR_1);
}
