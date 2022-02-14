
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_4__ {int recovery; int assert; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_2, struct ata_device *VAR_3, int VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_1(VAR_2->host->dev);
 int VAR_6 = VAR_3->devno;

 VAR_4 -= VAR_0;


 FUNC_0(VAR_5, 0x62 + VAR_2->port_no,
    (VAR_1[VAR_4].recovery << 4) |
    (VAR_1[VAR_4].assert));


 FUNC_0(VAR_5, 0x64 + 4*VAR_2->port_no + VAR_6,
    (VAR_1[VAR_4].recovery << 4) |
    (VAR_1[VAR_4].assert));

 FUNC_0(VAR_5, 0x66 + 4*VAR_2->port_no + VAR_6,
    (VAR_1[VAR_4].recovery << 4) |
    (VAR_1[VAR_4].assert));
}
