
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct hpt_info {int chip_type; } ;
struct TYPE_5__ {int ultra_mask; int dev; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {int id; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;




 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 struct hpt_info* FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(ide_drive_t *VAR_10)
{
 ide_hwif_t *VAR_11 = VAR_10->hwif;
 struct hpt_info *VAR_12 = FUNC_2(VAR_11->dev);
 u8 VAR_13 = VAR_11->ultra_mask;

 switch (VAR_12->chip_type) {
 case 134:
  if (!VAR_4 ||
      FUNC_1(VAR_10, VAR_9))
   VAR_13 = VAR_1;

  if (!VAR_3 ||
      FUNC_1(VAR_10, VAR_8))
   VAR_13 = VAR_0;
  break;
 case 133:
  if (!VAR_5 ||
      FUNC_1(VAR_10, VAR_6))
   VAR_13 = VAR_2;
  break;
 case 132:
  if (!VAR_5 ||
      FUNC_1(VAR_10, VAR_6))
   return VAR_2;

 case 131 :
 case 130:
 case 129:
 case 128 :
  if (FUNC_0(VAR_10->id))
   VAR_13 &= ~0x0e;

 default:
  return VAR_13;
 }

 return FUNC_1(VAR_10, VAR_7) ? 0x00 : VAR_13;
}
