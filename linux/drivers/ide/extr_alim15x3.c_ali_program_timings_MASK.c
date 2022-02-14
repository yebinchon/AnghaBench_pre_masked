
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ide_timing {int setup; int act8b; int rec8b; int active; int recover; } ;
struct TYPE_5__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_hwif_t *VAR_0, ide_drive_t *VAR_1,
    struct ide_timing *VAR_2, u8 VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_0->dev);
 int VAR_5 = VAR_0->channel ? 0x5c : 0x58;
 int VAR_6 = 0x56 + VAR_0->channel;
 u8 VAR_7 = VAR_1->dn & 1, VAR_8;
 int VAR_9 = 4 * VAR_7;


 FUNC_1(VAR_4, VAR_6, &VAR_8);
 VAR_8 &= ~(0x0F << VAR_9);
 VAR_8 |= VAR_3 << VAR_9;
 FUNC_2(VAR_4, VAR_6, VAR_8);

 if (VAR_2 == ((void*)0))
  return;

 VAR_2->setup = FUNC_0(VAR_2->setup, 1, 8) & 7;
 VAR_2->act8b = FUNC_0(VAR_2->act8b, 1, 8) & 7;
 VAR_2->rec8b = FUNC_0(VAR_2->rec8b, 1, 16) & 15;
 VAR_2->active = FUNC_0(VAR_2->active, 1, 8) & 7;
 VAR_2->recover = FUNC_0(VAR_2->recover, 1, 16) & 15;

 FUNC_2(VAR_4, VAR_5, VAR_2->setup);
 FUNC_2(VAR_4, VAR_5 + 1, (VAR_2->act8b << 4) | VAR_2->rec8b);
 FUNC_2(VAR_4, VAR_5 + VAR_7 + 2,
         (VAR_2->active << 4) | VAR_2->recover);
}
