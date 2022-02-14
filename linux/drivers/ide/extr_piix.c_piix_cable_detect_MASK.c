
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;
struct ich_laptop {scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; } ;
struct TYPE_3__ {scalar_t__ channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ich_laptop* VAR_3 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(ide_hwif_t *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_1(VAR_4->dev);
 const struct ich_laptop *VAR_6 = &VAR_3[0];
 u8 VAR_7 = 0, VAR_8 = VAR_4->channel ? 0xc0 : 0x30;


 while (VAR_6->device) {
  if (VAR_6->device == VAR_5->device &&
      VAR_6->subvendor == VAR_5->subsystem_vendor &&
      VAR_6->subdevice == VAR_5->subsystem_device) {
   return VAR_1;
  }
  VAR_6++;
 }

 FUNC_0(VAR_5, 0x54, &VAR_7);

 return (VAR_7 & VAR_8) ? VAR_2 : VAR_0;
}
