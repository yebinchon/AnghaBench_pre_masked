
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ide_timing {int recover; int active; int setup; } ;
struct TYPE_7__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_8__ {size_t dn; int pio_mode; int dma_mode; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;





 int VAR_0 ;




 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int,struct ide_timing*,unsigned long const,int ) ;
 int FUNC_2 (struct ide_timing*,struct ide_timing*,struct ide_timing*,int ) ;
 int FUNC_3 (struct pci_dev*,int const,int*) ;
 int FUNC_4 (struct pci_dev*,int const,int) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(ide_drive_t *VAR_3, u8 VAR_4)
{
 ide_hwif_t *VAR_5 = VAR_3->hwif;
 struct pci_dev *VAR_6 = FUNC_5(VAR_3->hwif->dev);
 int VAR_7 = VAR_2 ? VAR_2 : 33;
 const unsigned long VAR_8 = 1000000 / VAR_7;
 static const u8 VAR_9[] =
  {15, 15, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0};
 static const u8 VAR_10[] = {0x40, 0x40, 0x40, 0x80, 0, 0xc0};
 static const u8 VAR_11[4] = {134, 133, 132, 132};
 static const u8 VAR_12[4] = {131, 130, 129, 128};
 struct ide_timing VAR_13;
 u8 VAR_14 = 0;

 FUNC_1(VAR_3, VAR_4, &VAR_13, VAR_8, 0);





 if (VAR_13.recover > 16) {
  VAR_13.active += VAR_13.recover - 16;
  VAR_13.recover = 16;
 }
 if (VAR_13.active > 16)
  VAR_13.active = 16;




 VAR_13.recover = VAR_9[VAR_13.recover];
 VAR_13.active &= 0x0f;


 FUNC_4(VAR_6, VAR_12[VAR_3->dn],
         (VAR_13.active << 4) | VAR_13.recover);







 if (VAR_5->channel) {
  ide_drive_t *VAR_15 = FUNC_0(VAR_3);

  if (VAR_15) {
   struct ide_timing VAR_16;

   FUNC_1(VAR_15, VAR_15->pio_mode, &VAR_16, VAR_8, 0);
   FUNC_2(&VAR_13, &VAR_16, &VAR_13, VAR_1);
   if (VAR_15->dma_mode) {
    FUNC_1(VAR_15, VAR_15->dma_mode,
      &VAR_16, VAR_8, 0);
    FUNC_2(&VAR_16, &VAR_13, &VAR_13, VAR_1);
   }
  }
 }

 if (VAR_13.setup > 5)
  VAR_13.setup = 5;





 (void) FUNC_3 (VAR_6, VAR_11[VAR_3->dn], &VAR_14);
 if (VAR_5->channel)
  VAR_14 &= ~VAR_0;
 VAR_14 &= ~0xc0;
 VAR_14 |= VAR_10[VAR_13.setup];
 (void) FUNC_4(VAR_6, VAR_11[VAR_3->dn], VAR_14);
}
