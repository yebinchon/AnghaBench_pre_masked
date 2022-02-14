
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {scalar_t__ device; scalar_t__ revision; } ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int VAR_2 ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(ide_drive_t *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_3->hwif->dev);

 if (VAR_4->device == VAR_0) {
  return 0x1f;
 } else if (VAR_4->revision < VAR_1) {
  return 0x07;
 } else {
  u8 VAR_5 = 0, VAR_6, VAR_7;

  FUNC_1(VAR_4, 0x5A, &VAR_5);
  VAR_6 = VAR_5 & 0x3;



  if (VAR_6 > 2 && FUNC_0(VAR_3, VAR_2))
   VAR_6 = 2;

  switch(VAR_6) {
  case 3: VAR_7 = 0x3f; break;
  case 2: VAR_7 = 0x1f; break;
  case 1: VAR_7 = 0x07; break;
  default: VAR_7 = 0x00; break;
  }

  return VAR_7;
 }
}
