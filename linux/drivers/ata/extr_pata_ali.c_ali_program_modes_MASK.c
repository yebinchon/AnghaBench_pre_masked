
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ata_timing {int setup; int act8b; int rec8b; int active; int recover; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct ata_device {int devno; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_0, struct ata_device *VAR_1, struct ata_timing *VAR_2, u8 VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_0->host->dev);
 int VAR_5 = 0x58 + 4 * VAR_0->port_no;
 int VAR_6 = 0x59 + 4 * VAR_0->port_no;
 int VAR_7 = 0x5A + 4 * VAR_0->port_no + VAR_1->devno;
 int VAR_8 = 0x56 + VAR_0->port_no;
 int VAR_9 = 4 * VAR_1->devno;
 u8 VAR_10;

 if (VAR_2 != ((void*)0)) {
  VAR_2->setup = FUNC_0(VAR_2->setup, 1, 8) & 7;
  VAR_2->act8b = FUNC_0(VAR_2->act8b, 1, 8) & 7;
  VAR_2->rec8b = FUNC_0(VAR_2->rec8b, 1, 16) & 15;
  VAR_2->active = FUNC_0(VAR_2->active, 1, 8) & 7;
  VAR_2->recover = FUNC_0(VAR_2->recover, 1, 16) & 15;

  FUNC_2(VAR_4, VAR_5, VAR_2->setup);
  FUNC_2(VAR_4, VAR_6, (VAR_2->act8b << 4) | VAR_2->rec8b);
  FUNC_2(VAR_4, VAR_7, (VAR_2->active << 4) | VAR_2->recover);
 }


 FUNC_1(VAR_4, VAR_8, &VAR_10);
 VAR_10 &= ~(0x0F << VAR_9);
 VAR_10 |= VAR_3 << VAR_9;
 FUNC_2(VAR_4, VAR_8, VAR_10);
}
