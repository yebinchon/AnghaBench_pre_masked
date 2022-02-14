
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {scalar_t__ device; } ;
struct hsu_dma_chip {TYPE_1__* hsu; scalar_t__ regs; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned short nr_channels; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct hsu_dma_chip*,unsigned short,int) ;
 int FUNC_2 (struct hsu_dma_chip*,unsigned short,int*) ;
 int FUNC_3 (scalar_t__) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct hsu_dma_chip *VAR_5 = VAR_4;
 struct pci_dev *VAR_6 = FUNC_4(VAR_5->dev);
 u32 VAR_7;
 u32 VAR_8;
 unsigned short VAR_9;
 int VAR_10 = 0;
 int VAR_11;







 if (VAR_6->device == VAR_2)
  return VAR_1;

 VAR_7 = FUNC_3(VAR_5->regs + VAR_0);
 for (VAR_9 = 0; VAR_9 < VAR_5->hsu->nr_channels; VAR_9++) {
  if (VAR_7 & 0x1) {
   VAR_11 = FUNC_2(VAR_5, VAR_9, &VAR_8);
   if (VAR_11 > 0)
    VAR_10 |= 1;
   else if (VAR_11 == 0)
    VAR_10 |= FUNC_1(VAR_5, VAR_9, VAR_8);
  }
  VAR_7 >>= 1;
 }

 return FUNC_0(VAR_10);
}
