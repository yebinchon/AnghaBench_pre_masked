
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int host_flags; scalar_t__ hwif_data; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,unsigned long) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(ide_drive_t *VAR_3)
{
 ide_hwif_t *VAR_4 = VAR_3->hwif;
 struct pci_dev *VAR_5 = FUNC_2(VAR_4->dev);
 unsigned long VAR_6 = (unsigned long)VAR_4->hwif_data;
 u8 VAR_7, VAR_8 = 0;

 VAR_6 += (VAR_4->host_flags & VAR_2) ? 0x4A : 0x8A;

 VAR_7 = FUNC_1(VAR_5, VAR_6);

 switch (VAR_7 & 0x30) {
 case 0x10:
  VAR_8 = VAR_1;
  break;
 case 0x20:
  VAR_8 = VAR_1;
  break;
 case 0x00:
  VAR_8 = VAR_0;
  break;
 default:
  FUNC_0();
 }

 return VAR_8;
}
