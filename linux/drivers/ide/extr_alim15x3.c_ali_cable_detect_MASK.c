
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int VAR_3 ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(ide_hwif_t *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_2(VAR_4->dev);
 u8 VAR_6 = VAR_0, VAR_7;

 if (VAR_3 >= 0xC2) {
  if (FUNC_0(VAR_5))
   VAR_6 = VAR_1;
  else {
   FUNC_1(VAR_5, 0x4a, &VAR_7);
   if ((VAR_7 & (1 << VAR_4->channel)) == 0)
    VAR_6 = VAR_2;
  }
 }

 return VAR_6;
}
