
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* id; int special_flags; scalar_t__ mult_count; int dev_flags; scalar_t__ mult_req; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(ide_drive_t *VAR_7)
{
 int VAR_8 = (VAR_7->id[VAR_0] & 0x0400) ? 0 : 1;

 VAR_7->special_flags =
  VAR_8 ? (VAR_5 | VAR_4) : 0;

 VAR_7->mult_count = 0;
 VAR_7->dev_flags &= ~VAR_2;

 if ((VAR_7->dev_flags & VAR_1) == 0 &&
     (VAR_7->dev_flags & VAR_3) == 0)
  VAR_7->mult_req = 0;

 if (VAR_7->mult_req != VAR_7->mult_count)
  VAR_7->special_flags |= VAR_6;
}
