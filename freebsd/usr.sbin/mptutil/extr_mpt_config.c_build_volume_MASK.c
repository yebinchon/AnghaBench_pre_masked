
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
struct volume_info {int drive_count; struct drive_info* drives; } ;
struct drive_info {TYPE_5__* info; } ;
struct config_id_state {TYPE_4__* ioc2; } ;
typedef scalar_t__ U32 ;
struct TYPE_19__ {scalar_t__ PageVersion; } ;
struct TYPE_14__ {int HotSparePool; int Settings; } ;
struct TYPE_13__ {int State; int Flags; } ;
struct TYPE_12__ {size_t PageLength; scalar_t__ PageNumber; int PageType; } ;
struct TYPE_18__ {int VolumeID; int VolumeBus; int NumPhysDisks; long StripeSize; int MaxLBA; int MaxLBAHigh; TYPE_6__* PhysDisk; int VolumeType; TYPE_3__ VolumeSettings; TYPE_2__ VolumeStatus; scalar_t__ VolumeIOC; TYPE_1__ Header; } ;
struct TYPE_17__ {int PhysDiskMap; int PhysDiskNum; } ;
struct TYPE_16__ {scalar_t__ MaxLBA; int PhysDiskNum; int PhysDiskBus; int PhysDiskID; } ;
struct TYPE_15__ {int CapabilitiesFlags; } ;
typedef TYPE_6__ RAID_VOL0_PHYS_DISK ;
typedef TYPE_7__ CONFIG_PAGE_RAID_VOL_0 ;
typedef TYPE_8__ CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int FUNC_0 () ;
 TYPE_7__* FUNC_1 (int,size_t) ;
 int VAR_13 ;
 int FUNC_2 (struct config_id_state*) ;
 int FUNC_3 (int,int ,int ,int ,TYPE_8__*,int *) ;
 int FUNC_4 (char*,int,int,int,int,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static CONFIG_PAGE_RAID_VOL_0 *
FUNC_6(int VAR_14, struct volume_info *VAR_15, int VAR_16, long VAR_17,
    struct config_id_state *VAR_18, int VAR_19)
{
 CONFIG_PAGE_HEADER VAR_20;
 CONFIG_PAGE_RAID_VOL_0 *VAR_21;
 RAID_VOL0_PHYS_DISK *VAR_22;
 struct drive_info *VAR_23;
        U32 VAR_24;
 uint64_t VAR_25;
 size_t VAR_26;
 int VAR_27, VAR_28;

 VAR_27 = FUNC_3(VAR_14, VAR_1,
     0, 0, &VAR_20, ((void*)0));
 if (VAR_27) {
  VAR_13 = VAR_27;
  return (((void*)0));
 }
 if (VAR_20.PageVersion > VAR_8) {
  FUNC_5("Unsupported RAID volume page 0 version %d",
      VAR_20.PageVersion);
  VAR_13 = VAR_0;
  return (((void*)0));
 }
 VAR_26 = sizeof(CONFIG_PAGE_RAID_VOL_0) +
     sizeof(RAID_VOL0_PHYS_DISK) * (VAR_15->drive_count - 1);
 VAR_21 = FUNC_1(1, VAR_26);
 if (VAR_21 == ((void*)0))
  return (((void*)0));


 VAR_21->Header.PageType = VAR_1;
 VAR_21->Header.PageNumber = 0;
 VAR_21->Header.PageLength = VAR_26 / 4;


 VAR_21->VolumeID = FUNC_2(VAR_18);
 VAR_21->VolumeBus = 0;
 VAR_21->VolumeIOC = 0;
 VAR_21->VolumeStatus.Flags = VAR_6;
 VAR_21->VolumeStatus.State = VAR_7;
 VAR_21->VolumeSettings.Settings = VAR_5;
 VAR_21->VolumeSettings.HotSparePool = VAR_9;
 VAR_21->NumPhysDisks = VAR_15->drive_count;


 VAR_24 = VAR_15->drives[0].info->MaxLBA;
 for (VAR_28 = 1; VAR_28 < VAR_15->drive_count; VAR_28++)
  if (VAR_15->drives[VAR_28].info->MaxLBA < VAR_24)
   VAR_24 = VAR_15->drives[VAR_28].info->MaxLBA;






 VAR_24 -= (512 * 1024 * 1024) / 512;

 switch (VAR_16) {
 case 130:
  VAR_21->VolumeType = VAR_12;
  VAR_21->StripeSize = VAR_17 / 512;
  VAR_25 = (uint64_t)VAR_24 * VAR_15->drive_count;
  break;
 case 129:
  VAR_21->VolumeType = VAR_10;
  VAR_25 = (uint64_t)VAR_24 * (VAR_15->drive_count / 2);
  break;
 case 128:
  VAR_21->VolumeType = VAR_11;
  VAR_21->StripeSize = VAR_17 / 512;
  VAR_25 = (uint64_t)VAR_24 * VAR_15->drive_count / 2;
  break;
 default:

  FUNC_0();
 }






 if (VAR_25 >> 32 != 0 &&
     !(VAR_18->ioc2->CapabilitiesFlags &
     VAR_2)) {
  FUNC_5(
     "Controller does not support volumes > 2TB, truncating volume.");
  VAR_25 = 0xffffffff;
 }
 VAR_21->MaxLBA = VAR_25;
 VAR_21->MaxLBAHigh = VAR_25 >> 32;


 for (VAR_28 = 0, VAR_23 = VAR_15->drives, VAR_22 = VAR_21->PhysDisk;
      VAR_28 < VAR_15->drive_count; VAR_28++, VAR_23++, VAR_22++) {
  if (VAR_19)
   FUNC_4("Adding drive %u (%u:%u) to volume %u:%u\n",
       VAR_23->info->PhysDiskNum, VAR_23->info->PhysDiskBus,
       VAR_23->info->PhysDiskID, VAR_21->VolumeBus,
       VAR_21->VolumeID);
  if (VAR_16 == 129) {
   if (VAR_28 == 0)
    VAR_22->PhysDiskMap =
        VAR_3;
   else
    VAR_22->PhysDiskMap =
        VAR_4;
  } else
   VAR_22->PhysDiskMap = VAR_28;
  VAR_22->PhysDiskNum = VAR_23->info->PhysDiskNum;
 }

 return (VAR_21);
}
