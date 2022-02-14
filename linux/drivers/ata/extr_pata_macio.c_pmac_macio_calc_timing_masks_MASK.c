
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_macio_priv {int dev; TYPE_1__* timings; } ;
struct ata_port_info {unsigned int pio_mask; unsigned int mwdma_mask; unsigned int udma_mask; } ;
struct TYPE_2__ {int mode; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct pata_macio_priv *VAR_0,
      struct ata_port_info *VAR_1)
{
 int VAR_2 = 0;

 VAR_1->pio_mask = 0;
 VAR_1->mwdma_mask = 0;
 VAR_1->udma_mask = 0;

 while (VAR_0->timings[VAR_2].mode > 0) {
  unsigned int VAR_3 = 1U << (VAR_0->timings[VAR_2].mode & 0x0f);
  switch(VAR_0->timings[VAR_2].mode & 0xf0) {
  case 0x00:
   VAR_1->pio_mask |= (VAR_3 >> 8);
   break;
  case 0x20:
   VAR_1->mwdma_mask |= VAR_3;
   break;
  case 0x40:
   VAR_1->udma_mask |= VAR_3;
   break;
  }
  VAR_2++;
 }
 FUNC_0(VAR_0->dev, "Supported masks: PIO=%lx, MWDMA=%lx, UDMA=%lx\n",
  VAR_1->pio_mask, VAR_1->mwdma_mask, VAR_1->udma_mask);
}
