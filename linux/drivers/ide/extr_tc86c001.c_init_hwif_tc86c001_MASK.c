
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {unsigned long config_data; int rqsize; int dma_base; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 unsigned long FUNC_2 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_hwif_t *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_3(VAR_0->dev);
 unsigned long VAR_2 = FUNC_2(VAR_1, 5);
 u16 VAR_3 = FUNC_0(VAR_2 + 0x00);


 FUNC_1(VAR_3 | 0x8000, VAR_2 + 0x00);


 FUNC_1(VAR_3 | 0x4000, VAR_2 + 0x00);


 FUNC_1(VAR_3 & ~0xc000, VAR_2 + 0x00);


 VAR_0->config_data = VAR_2;

 if (!VAR_0->dma_base)
  return;





 FUNC_1(0x0003, VAR_2 + 0x0c);


 VAR_0->rqsize = 0xffff;
}
