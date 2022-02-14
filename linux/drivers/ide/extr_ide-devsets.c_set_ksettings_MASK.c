
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(ide_drive_t *VAR_2, int VAR_3)
{
 if (VAR_3 < 0 || VAR_3 > 1)
  return -VAR_0;

 if (VAR_3)
  VAR_2->dev_flags |= VAR_1;
 else
  VAR_2->dev_flags &= ~VAR_1;

 return 0;
}
