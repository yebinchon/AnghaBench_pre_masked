
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int channel; scalar_t__ select_data; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dev_flags; int dn; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_3 (struct pci_dev*,int,unsigned int) ;
 struct pci_dev* FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6 (ide_drive_t *VAR_1, unsigned int VAR_2)
{
 ide_hwif_t *VAR_3 = VAR_1->hwif;
 struct pci_dev *VAR_4 = FUNC_4(VAR_3->dev);
 unsigned int VAR_5, VAR_6, VAR_7, *VAR_8 = (unsigned int *) VAR_3->select_data;
 unsigned long VAR_9;

 FUNC_1(VAR_9);
 VAR_7 = *VAR_8;


 VAR_5 = 1 << (8 + VAR_3->channel);

 if (VAR_1->dev_flags & VAR_0)
  VAR_7 &= ~VAR_5;
 else
  VAR_7 |= VAR_5;


 VAR_5 = 1 << (20 + (VAR_1->dn & 1) + (VAR_3->channel << 1));
 VAR_6 = 1 << (20 + (1 - (VAR_1->dn & 1)) + (VAR_3->channel << 1));
 VAR_7 = VAR_2 ? ((VAR_7 & ~VAR_6) | VAR_5) : (VAR_7 & ~VAR_5);

 if (VAR_7 != *VAR_8) {
  unsigned char VAR_10;





  (void) FUNC_2(VAR_4, 0x43, &VAR_10);
  while (VAR_10 & 0x03) {
   FUNC_5(1);
   (void) FUNC_2(VAR_4, 0x43, &VAR_10);
  }

  *VAR_8 = VAR_7;
  (void) FUNC_3(VAR_4, 0x40, VAR_7);




  FUNC_5(10);
 }

 FUNC_0(VAR_9);
}
