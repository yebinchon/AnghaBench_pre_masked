
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mpt_drive_list {int dummy; } ;
typedef int U8 ;
struct TYPE_5__ {scalar_t__ HotSparePool; } ;
struct TYPE_6__ {int PhysDiskID; int PhysDiskBus; TYPE_1__ PhysDiskSettings; } ;
typedef TYPE_2__ CONFIG_PAGE_RAID_PHYS_DISK_0 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (struct mpt_drive_list*) ;
 int FUNC_4 (struct mpt_drive_list*,char*,int *) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int,int ,int *) ;
 struct mpt_drive_list* FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int
FUNC_11(int VAR_3, char **VAR_4)
{
 CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_5;
 struct mpt_drive_list *VAR_6;
 U8 VAR_7;
 int VAR_8, VAR_9;

 if (VAR_3 != 2) {
  FUNC_10("remove spare: drive required");
  return (VAR_0);
 }

 VAR_9 = FUNC_5(VAR_2);
 if (VAR_9 < 0) {
  VAR_8 = VAR_1;
  FUNC_9("mpt_open");
  return (VAR_8);
 }

 VAR_6 = FUNC_7(VAR_9);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_9);
  return (VAR_1);
 }

 VAR_8 = FUNC_4(VAR_6, VAR_4[1], &VAR_7);
 if (VAR_8) {
  FUNC_9("Failed to find drive %s", VAR_4[1]);
  FUNC_0(VAR_9);
  return (VAR_8);
 }
 FUNC_3(VAR_6);


 VAR_5 = FUNC_6(VAR_9, VAR_7, ((void*)0));
 if (VAR_5 == ((void*)0)) {
  VAR_8 = VAR_1;
  FUNC_9("Failed to fetch drive info");
  FUNC_0(VAR_9);
  return (VAR_8);
 }

 if (VAR_5->PhysDiskSettings.HotSparePool == 0) {
  FUNC_10("Drive %u is not a hot spare", VAR_7);
  FUNC_1(VAR_5);
  FUNC_0(VAR_9);
  return (VAR_0);
 }

 if (FUNC_2(VAR_9, VAR_7) < 0) {
  VAR_8 = VAR_1;
  FUNC_9("Failed to delete physical disk page");
  FUNC_1(VAR_5);
  FUNC_0(VAR_9);
  return (VAR_8);
 }

 FUNC_8(VAR_5->PhysDiskBus, VAR_5->PhysDiskID);
 FUNC_1(VAR_5);
 FUNC_0(VAR_9);

 return (0);
}
