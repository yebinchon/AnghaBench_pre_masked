
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct hpt_timings {int pio_mask; int dma_mask; int ultra_mask; } ;
struct hpt_info {struct hpt_timings* timings; } ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int dn; scalar_t__ dma_mode; } ;
typedef TYPE_2__ ide_drive_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (scalar_t__ const,struct hpt_info*) ;
 struct hpt_info* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ide_hwif_t *VAR_2, ide_drive_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_4(VAR_2->dev);
 struct hpt_info *VAR_5 = FUNC_1(VAR_2->dev);
 struct hpt_timings *VAR_6 = VAR_5->timings;
 u8 VAR_7 = 0x40 + (VAR_3->dn * 4);
 u32 VAR_8 = 0;
 const u8 VAR_9 = VAR_3->dma_mode;
 u32 VAR_10 = FUNC_0(VAR_9, VAR_5);
 u32 VAR_11 = VAR_9 < VAR_0 ? VAR_6->pio_mask :
     (VAR_9 < VAR_1 ? VAR_6->dma_mask :
         VAR_6->ultra_mask);

 FUNC_2(VAR_4, VAR_7, &VAR_8);
 VAR_10 = (VAR_8 & ~VAR_11) | (VAR_10 & VAR_11);




 VAR_10 &= ~0xc0000000;

 FUNC_3(VAR_4, VAR_7, VAR_10);
}
