
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ HotSparePool; } ;
struct mpt_standalone_disk {int NumActiveVolumes; int NumActivePhysDisks; char* Name; int NumPhysDisks; int NumHotSpares; char* devname; TYPE_3__* HotSpare; TYPE_1__ VolumeSettings; TYPE_2__* PhysDisk; TYPE_4__* RaidVolume; } ;
struct TYPE_8__ {int VolumeID; int VolumeBus; int VolumeType; } ;
struct TYPE_7__ {int PhysDiskNum; int HotSparePool; } ;
struct TYPE_6__ {int PhysDiskNum; } ;
typedef TYPE_2__ RAID_VOL0_PHYS_DISK ;
typedef TYPE_3__ IOC_5_HOT_SPARE ;
typedef struct mpt_standalone_disk CONFIG_PAGE_RAID_VOL_1 ;
typedef struct mpt_standalone_disk CONFIG_PAGE_RAID_VOL_0 ;
typedef struct mpt_standalone_disk CONFIG_PAGE_RAID_PHYS_DISK_0 ;
typedef struct mpt_standalone_disk CONFIG_PAGE_IOC_5 ;
typedef TYPE_4__ CONFIG_PAGE_IOC_2_RAID_VOL ;
typedef struct mpt_standalone_disk CONFIG_PAGE_IOC_2 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mpt_standalone_disk*) ;
 scalar_t__ FUNC_3 (int,int*,struct mpt_standalone_disk**) ;
 int FUNC_4 (int) ;
 struct mpt_standalone_disk* FUNC_5 (int,int,int *) ;
 char* FUNC_6 (int ) ;
 struct mpt_standalone_disk* FUNC_7 (int,int,int *) ;
 int VAR_2 ;
 struct mpt_standalone_disk* FUNC_8 (int,int ,int ,int *) ;
 struct mpt_standalone_disk* FUNC_9 (int,int ,int ,int *) ;
 char* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct mpt_standalone_disk*,int,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct mpt_standalone_disk*,int,int ) ;
 int FUNC_14 (struct mpt_standalone_disk*,int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int
FUNC_18(int VAR_3, char **VAR_4)
{
 CONFIG_PAGE_IOC_2 *VAR_5;
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_6;
 CONFIG_PAGE_IOC_5 *VAR_7;
 IOC_5_HOT_SPARE *VAR_8;
 CONFIG_PAGE_RAID_VOL_0 *VAR_9;
 RAID_VOL0_PHYS_DISK *VAR_10;
 CONFIG_PAGE_RAID_VOL_1 *VAR_11;
 CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_12;
 struct mpt_standalone_disk *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 if (VAR_3 != 1) {
  FUNC_17("show config: extra arguments");
  return (VAR_0);
 }

 VAR_15 = FUNC_4(VAR_2);
 if (VAR_15 < 0) {
  VAR_14 = VAR_1;
  FUNC_16("mpt_open");
  return (VAR_14);
 }


 VAR_5 = FUNC_7(VAR_15, 2, ((void*)0));
 VAR_7 = FUNC_7(VAR_15, 5, ((void*)0));
 if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0)) {
  VAR_14 = VAR_1;
  FUNC_16("Failed to get config");
  FUNC_2(VAR_5);
  FUNC_0(VAR_15);
  return (VAR_14);
 }
 if (FUNC_3(VAR_15, &VAR_18, &VAR_13) < 0) {
  VAR_14 = VAR_1;
  FUNC_16("Failed to get standalone drive list");
  FUNC_2(VAR_7);
  FUNC_2(VAR_5);
  FUNC_0(VAR_15);
  return (VAR_14);
 }


 FUNC_15("mpt%d Configuration: %d volumes, %d drives\n",
     VAR_2, VAR_5->NumActiveVolumes, VAR_5->NumActivePhysDisks +
     VAR_18);
 VAR_6 = VAR_5->RaidVolume;
 for (VAR_16 = 0; VAR_16 < VAR_5->NumActiveVolumes; VAR_6++, VAR_16++) {
  FUNC_15("    volume %s ", FUNC_10(VAR_6->VolumeBus,
      VAR_6->VolumeID));
  VAR_9 = FUNC_8(VAR_15, VAR_6->VolumeBus, VAR_6->VolumeID, ((void*)0));
  if (VAR_9 == ((void*)0)) {
   FUNC_15("%s UNKNOWN", FUNC_6(VAR_6->VolumeType));
  } else
   FUNC_14(VAR_9, -1);
  VAR_11 = FUNC_9(VAR_15, VAR_6->VolumeBus, VAR_6->VolumeID, ((void*)0));
  if (VAR_11 != ((void*)0)) {
   if (VAR_11->Name[0] != '\0')
    FUNC_15(" <%s>", VAR_11->Name);
   FUNC_2(VAR_11);
  }
  if (VAR_9 == ((void*)0)) {
   FUNC_15("\n");
   continue;
  }
  FUNC_15(" spans:\n");
  VAR_10 = VAR_9->PhysDisk;
  for (VAR_17 = 0; VAR_17 < VAR_9->NumPhysDisks; VAR_10++, VAR_17++) {
   FUNC_15("        drive %u ", VAR_10->PhysDiskNum);
   VAR_12 = FUNC_5(VAR_15, VAR_10->PhysDiskNum, ((void*)0));
   if (VAR_12 != ((void*)0)) {
    FUNC_11(VAR_12, -1, 0);
    FUNC_2(VAR_12);
   }
   FUNC_15("\n");
  }
  if (VAR_9->VolumeSettings.HotSparePool != 0) {
   FUNC_15("        spare pools: ");
   FUNC_12(VAR_9->VolumeSettings.HotSparePool);
   FUNC_15("\n");
  }
  FUNC_2(VAR_9);
 }

 VAR_8 = VAR_7->HotSpare;
 for (VAR_16 = 0; VAR_16 < VAR_7->NumHotSpares; VAR_8++, VAR_16++) {
  FUNC_15("    spare %u ", VAR_8->PhysDiskNum);
  VAR_12 = FUNC_5(VAR_15, VAR_8->PhysDiskNum, ((void*)0));
  if (VAR_12 != ((void*)0)) {
   FUNC_11(VAR_12, -1, 0);
   FUNC_2(VAR_12);
  }
  FUNC_15(" backs pool %d\n", FUNC_1(VAR_8->HotSparePool) - 1);
 }
 for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
  FUNC_15("    drive %s ", VAR_13[VAR_16].devname);
  FUNC_13(&VAR_13[VAR_16], -1, 0);
  FUNC_15("\n");
 }
 FUNC_2(VAR_5);
 FUNC_2(VAR_7);
 FUNC_2(VAR_13);
 FUNC_0(VAR_15);

 return (0);
}
