
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int extra_base; scalar_t__ channel; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {scalar_t__ media; int dev_flags; scalar_t__ current_speed; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(ide_drive_t *VAR_3)
{
 if (VAR_3->media != VAR_2 || (VAR_3->dev_flags & VAR_0)) {
  ide_hwif_t *VAR_4 = VAR_3->hwif;
  unsigned long VAR_5 = VAR_4->extra_base - 16;
  unsigned long VAR_6 = VAR_5 + (VAR_4->channel ? 0x24 : 0x20);
  u8 VAR_7 = 0;

  FUNC_3(0, VAR_6);
  VAR_7 = FUNC_1(VAR_5 + 0x11);
  FUNC_2(VAR_7 & ~(VAR_4->channel ? 0x08:0x02), VAR_5 + 0x11);
 }
 if (VAR_3->current_speed > VAR_1)
  FUNC_4(VAR_3->hwif);
 return FUNC_0(VAR_3);
}
