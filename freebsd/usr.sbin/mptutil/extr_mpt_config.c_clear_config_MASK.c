
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int VolumeID; int VolumeBus; } ;
struct TYPE_11__ {int NumActiveVolumes; int NumHotSpares; int NumPhysDisks; TYPE_2__* PhysDisk; TYPE_1__* HotSpare; TYPE_5__* RaidVolume; } ;
struct TYPE_10__ {int PhysDiskNum; } ;
struct TYPE_9__ {int PhysDiskNum; } ;
typedef TYPE_1__ IOC_5_HOT_SPARE ;
typedef TYPE_2__ IOC_3_PHYS_DISK ;
typedef TYPE_3__ CONFIG_PAGE_IOC_5 ;
typedef TYPE_3__ CONFIG_PAGE_IOC_3 ;
typedef TYPE_5__ CONFIG_PAGE_IOC_2_RAID_VOL ;
typedef TYPE_3__ CONFIG_PAGE_IOC_2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ,int ,int ,int,int *,int ,int *,int *,int ,int *,int *,int ) ;
 TYPE_3__* FUNC_7 (int,int,int *) ;
 int FUNC_8 (int,int) ;
 int VAR_5 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (int,char*,int ) ;
 int FUNC_13 (char*,int ) ;

__attribute__((used)) static int
FUNC_14(int VAR_6, char **VAR_7)
{
 CONFIG_PAGE_IOC_2 *VAR_8;
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_9;
 CONFIG_PAGE_IOC_3 *VAR_10;
 IOC_3_PHYS_DISK *VAR_11;
 CONFIG_PAGE_IOC_5 *VAR_12;
 IOC_5_HOT_SPARE *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_16 = FUNC_5(VAR_5);
 if (VAR_16 < 0) {
  VAR_15 = VAR_4;
  FUNC_11("mpt_open");
  return (VAR_15);
 }

 VAR_8 = FUNC_7(VAR_16, 2, ((void*)0));
 if (VAR_8 == ((void*)0)) {
  VAR_15 = VAR_4;
  FUNC_11("Failed to fetch volume list");
  FUNC_0(VAR_16);
  return (VAR_15);
 }


 VAR_9 = VAR_8->RaidVolume;
 for (VAR_17 = 0; VAR_17 < VAR_8->NumActiveVolumes; VAR_9++, VAR_17++) {
  if (FUNC_4(VAR_9->VolumeBus, VAR_9->VolumeID) < 0) {
   FUNC_13("Volume %s is busy and cannot be deleted",
       FUNC_9(VAR_9->VolumeBus, VAR_9->VolumeID));
   FUNC_1(VAR_8);
   FUNC_0(VAR_16);
   return (VAR_0);
  }
 }

 FUNC_10(
     "Are you sure you wish to clear the configuration on mpt%u? [y/N] ",
     VAR_5);
 VAR_14 = FUNC_2();
 if (VAR_14 != 'y' && VAR_14 != 'Y') {
  FUNC_10("\nAborting\n");
  FUNC_1(VAR_8);
  FUNC_0(VAR_16);
  return (0);
 }


 VAR_9 = VAR_8->RaidVolume;
 for (VAR_17 = 0; VAR_17 < VAR_8->NumActiveVolumes; VAR_9++, VAR_17++) {
  VAR_15 = FUNC_6(VAR_16, VAR_3,
      VAR_9->VolumeBus, VAR_9->VolumeID, 0,
      VAR_1 |
      VAR_2, ((void*)0), 0, ((void*)0), ((void*)0), 0,
      ((void*)0), ((void*)0), 0);
  if (VAR_15)
   FUNC_12(VAR_15, "Failed to delete volume %s",
       FUNC_9(VAR_9->VolumeBus, VAR_9->VolumeID));
 }
 FUNC_1(VAR_8);


 VAR_12 = FUNC_7(VAR_16, 5, ((void*)0));
 if (VAR_12 == ((void*)0))
  FUNC_11("Failed to fetch spare list");
 else {
  VAR_13 = VAR_12->HotSpare;
  for (VAR_17 = 0; VAR_17 < VAR_12->NumHotSpares; VAR_13++, VAR_17++)
   if (FUNC_3(VAR_16, VAR_13->PhysDiskNum) < 0)
    FUNC_11("Failed to delete physical disk %d",
        VAR_13->PhysDiskNum);
  FUNC_1(VAR_12);
 }


 VAR_10 = FUNC_7(VAR_16, 3, ((void*)0));
 if (VAR_10 == ((void*)0))
  FUNC_11("Failed to fetch drive list");
 else {
  VAR_11 = VAR_10->PhysDisk;
  for (VAR_17 = 0; VAR_17 < VAR_10->NumPhysDisks; VAR_11++, VAR_17++)
   if (FUNC_3(VAR_16, VAR_11->PhysDiskNum) < 0)
    FUNC_11("Failed to delete physical disk %d",
        VAR_11->PhysDiskNum);
  FUNC_1(VAR_10);
 }

 FUNC_10("mpt%d: Configuration cleared\n", VAR_5);
 FUNC_8(-1, -1);
 FUNC_0(VAR_16);

 return (0);
}
