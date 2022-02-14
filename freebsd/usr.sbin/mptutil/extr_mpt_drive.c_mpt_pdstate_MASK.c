
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int State; int Flags; } ;
struct TYPE_5__ {int HotSparePool; } ;
struct TYPE_7__ {TYPE_2__ PhysDiskStatus; TYPE_1__ PhysDiskSettings; } ;
typedef TYPE_3__ CONFIG_PAGE_RAID_PHYS_DISK_0 ;




 int VAR_0 ;






 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_1)
{
 static char VAR_2[16];

 switch (VAR_1->PhysDiskStatus.State) {
 case 129:
  if ((VAR_1->PhysDiskStatus.Flags &
      VAR_0) &&
      VAR_1->PhysDiskSettings.HotSparePool == 0)
   return ("REBUILD");
  else
   return ("ONLINE");
 case 132:
  return ("MISSING");
 case 131:
  return ("NOT COMPATIBLE");
 case 135:
  return ("FAILED");
 case 133:
  return ("INITIALIZING");
 case 130:
  return ("OFFLINE REQUESTED");
 case 134:
  return ("FAILED REQUESTED");
 case 128:
  return ("OTHER OFFLINE");
 default:
  FUNC_0(VAR_2, "PSTATE 0x%02x", VAR_1->PhysDiskStatus.State);
  return (VAR_2);
 }
}
