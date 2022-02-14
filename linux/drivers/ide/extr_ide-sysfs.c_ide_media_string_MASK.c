
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int media; } ;
typedef TYPE_1__ ide_drive_t ;
char *FUNC_0(ide_drive_t *VAR_0)
{
 switch (VAR_0->media) {
 case 131:
  return "disk";
 case 132:
  return "cdrom";
 case 128:
  return "tape";
 case 130:
  return "floppy";
 case 129:
  return "optical";
 default:
  return "UNKNOWN";
 }
}
