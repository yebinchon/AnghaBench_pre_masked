
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct hpt_info {int chip_type; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int id; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;






 int FUNC_0 (int ) ;
 struct hpt_info* FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(ide_drive_t *VAR_0)
{
 ide_hwif_t *VAR_1 = VAR_0->hwif;
 struct hpt_info *VAR_2 = FUNC_1(VAR_1->dev);

 switch (VAR_2->chip_type) {
 case 131 :
 case 130:
 case 129:
 case 128 :
  if (FUNC_0(VAR_0->id))
   return 0x00;

 default:
  return 0x07;
 }
}
