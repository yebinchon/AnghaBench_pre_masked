
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
typedef int port_type ;
struct TYPE_3__ {int channel; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(ide_hwif_t *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_1(VAR_2->dev);

 u32 VAR_4;
 u32 VAR_5;

 int VAR_6 = VAR_2->channel;
 port_type VAR_7[2];

 FUNC_0(VAR_3, 0x40, &VAR_4);




 if (VAR_4 & (1 << 23)) {
  VAR_7[0] = 128;
  VAR_7[1] = 130;
 } else {
  VAR_7[0] = 128;
  VAR_7[1] = 128;
 }



 FUNC_0(VAR_3, 0x80, &VAR_5);
 if (VAR_5 & (1<<24))
  VAR_7[0] = 129;


 if (VAR_4 & (1 << 22))
  VAR_6 = VAR_6 ^ 1;






 switch (VAR_7[VAR_6]) {
 case 130:
  if (VAR_4 & (1 << 3))
   return VAR_0;
  return VAR_1;
 case 129:
  if (VAR_5 & (1 << 19))
   return VAR_0;
  return VAR_1;
 case 128:
  break;
 }

 return VAR_1;
}
