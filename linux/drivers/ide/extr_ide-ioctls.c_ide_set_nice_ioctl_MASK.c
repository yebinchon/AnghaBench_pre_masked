
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ media; int dev_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_0(ide_drive_t *VAR_6, unsigned long VAR_7)
{
 if (VAR_7 != (VAR_7 & ((1 << VAR_4) | (1 << VAR_3))))
  return -VAR_0;

 if (((VAR_7 >> VAR_4) & 1) &&
     (VAR_6->media != VAR_5))
  return -VAR_0;

 if ((VAR_7 >> VAR_4) & 1)
  VAR_6->dev_flags |= VAR_1;
 else
  VAR_6->dev_flags &= ~VAR_1;

 if ((VAR_7 >> VAR_3) & 1)
  VAR_6->dev_flags |= VAR_2;
 else
  VAR_6->dev_flags &= ~VAR_2;

 return 0;
}
