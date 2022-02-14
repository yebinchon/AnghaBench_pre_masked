
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = FUNC_2(VAR_5->dev);
 int VAR_7 = VAR_5->channel ? VAR_0 : VAR_2;
 u8 VAR_8 = VAR_5->channel ? VAR_1 :
        VAR_3;
 u8 VAR_9 = 0;

 (void) FUNC_0(VAR_6, VAR_7, &VAR_9);

 (void) FUNC_1(VAR_6, VAR_7, VAR_9 | VAR_8);
}
