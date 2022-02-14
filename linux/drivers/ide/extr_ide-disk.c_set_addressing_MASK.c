
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev_flags; int id; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_4__ {int host_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(ide_drive_t *VAR_4, int VAR_5)
{
 if (VAR_5 < 0 || VAR_5 > 2)
  return -VAR_0;

 if (VAR_5 && ((VAR_4->hwif->host_flags & VAR_3) ||
     FUNC_0(VAR_4->id) == 0))
  return -VAR_1;

 if (VAR_5 == 2)
  VAR_5 = 0;

 if (VAR_5)
  VAR_4->dev_flags |= VAR_2;
 else
  VAR_4->dev_flags &= ~VAR_2;

 return 0;
}
