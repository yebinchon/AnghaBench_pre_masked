
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ media; TYPE_1__* hwif; int * id; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int ultra_mask; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static u8 FUNC_1(ide_drive_t *VAR_4)
{
 if (VAR_3 > 0x20 && VAR_3 < 0xC2) {
  if (VAR_4->media != VAR_2)
   return 0;
  if (VAR_1 &&
      FUNC_0((char *)&VAR_4->id[VAR_0], "WDC "))
   return 0;
 }

 return VAR_4->hwif->ultra_mask;
}
