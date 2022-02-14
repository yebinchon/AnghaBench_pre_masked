
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bad_wstat; int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(ide_drive_t *VAR_4, int VAR_5)
{
 if (VAR_5 < 0 || VAR_5 > 1)
  return -VAR_2;

 if (VAR_5)
  VAR_4->dev_flags |= VAR_3;
 else
  VAR_4->dev_flags &= ~VAR_3;

 VAR_4->bad_wstat = VAR_5 ? VAR_0 : VAR_1;

 return 0;
}
