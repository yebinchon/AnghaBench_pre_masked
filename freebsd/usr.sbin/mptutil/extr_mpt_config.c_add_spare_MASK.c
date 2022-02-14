
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int HotSparePool; } ;
struct mpt_standalone_disk {TYPE_1__ PhysDiskSettings; } ;
struct mpt_drive_list {int dummy; } ;
typedef int U8 ;
typedef int U32 ;
typedef struct mpt_standalone_disk CONFIG_PAGE_RAID_PHYS_DISK_0 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int*) ;
 int FUNC_2 (struct mpt_standalone_disk*) ;
 scalar_t__ FUNC_3 (int,struct mpt_standalone_disk*,int *) ;
 int FUNC_4 (int,int*,struct mpt_standalone_disk**) ;
 int FUNC_5 (struct mpt_drive_list*) ;
 scalar_t__ FUNC_6 (struct mpt_standalone_disk*) ;
 int FUNC_7 (struct mpt_drive_list*,char*,int *) ;
 scalar_t__ FUNC_8 (char*,struct mpt_standalone_disk*,int,int*) ;
 int FUNC_9 (int ) ;
 struct mpt_standalone_disk* FUNC_10 (int,int ,int *) ;
 struct mpt_drive_list* FUNC_11 (int) ;
 int FUNC_12 (int,int ,int ,int ,int ,int ,int *,int ,int *,int *,int ,int *,int *,int ) ;
 int VAR_4 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int
FUNC_16(int VAR_5, char **VAR_6)
{
 CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_7;
 struct mpt_standalone_disk *VAR_8;
 struct mpt_drive_list *VAR_9;
 U8 VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_5 < 2) {
  FUNC_15("add spare: drive required");
  return (VAR_0);
 }
 if (VAR_5 > 3) {
  FUNC_15("add spare: extra arguments");
  return (VAR_0);
 }

 VAR_12 = FUNC_9(VAR_4);
 if (VAR_12 < 0) {
  VAR_11 = VAR_3;
  FUNC_13("mpt_open");
  return (VAR_11);
 }

 if (VAR_5 == 3) {
  VAR_11 = FUNC_1(VAR_12, VAR_6[2], &VAR_15);
  if (VAR_11) {
   FUNC_0(VAR_12);
   return (VAR_11);
  }
 } else
  VAR_15 = VAR_2;

 VAR_9 = FUNC_11(VAR_12);
 if (VAR_9 == ((void*)0))
  return (VAR_3);

 VAR_11 = FUNC_7(VAR_9, VAR_6[1], &VAR_10);
 if (VAR_11) {
  VAR_11 = FUNC_4(VAR_12, &VAR_14, &VAR_8);
  if (VAR_11 != 0) {
   FUNC_13("Failed to fetch standalone disk list");
   FUNC_5(VAR_9);
   FUNC_0(VAR_12);
   return (VAR_11);
  }

  if (FUNC_8(VAR_6[1], VAR_8, VAR_14, &VAR_13) <
      0) {
   VAR_11 = VAR_3;
   FUNC_13("Unable to lookup drive %s", VAR_6[1]);
   FUNC_5(VAR_9);
   FUNC_0(VAR_12);
   return (VAR_11);
  }

  if (FUNC_6(&VAR_8[VAR_13]) < 0) {
   FUNC_5(VAR_9);
   FUNC_0(VAR_12);
   return (VAR_3);
  }

  if (FUNC_3(VAR_12, &VAR_8[VAR_13], &VAR_10) < 0) {
   VAR_11 = VAR_3;
   FUNC_13("Failed to create physical disk page");
   FUNC_5(VAR_9);
   FUNC_0(VAR_12);
   return (VAR_11);
  }
  FUNC_2(VAR_8);
 }
 FUNC_5(VAR_9);

 VAR_7 = FUNC_10(VAR_12, VAR_10, ((void*)0));
 if (VAR_7 == ((void*)0)) {
  VAR_11 = VAR_3;
  FUNC_13("Failed to fetch drive info");
  FUNC_0(VAR_12);
  return (VAR_11);
 }

 VAR_7->PhysDiskSettings.HotSparePool = VAR_15;
 VAR_11 = FUNC_12(VAR_12, VAR_1, 0,
     0, VAR_10, *(U32 *)&VAR_7->PhysDiskSettings, ((void*)0), 0, ((void*)0),
     ((void*)0), 0, ((void*)0), ((void*)0), 0);
 if (VAR_11) {
  FUNC_14(VAR_11, "Failed to assign spare");
  FUNC_0(VAR_12);
  return (VAR_11);
 }

 FUNC_2(VAR_7);
 FUNC_0(VAR_12);

 return (0);
}
