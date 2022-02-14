
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mpt_standalone_disk {int target; int bus; } ;
typedef int U8 ;
typedef int U32 ;
struct TYPE_9__ {scalar_t__ PageVersion; } ;
struct TYPE_7__ {int PageLength; scalar_t__ PageNumber; int PageType; } ;
struct TYPE_8__ {int PhysDiskID; int PhysDiskBus; scalar_t__ PhysDiskIOC; TYPE_1__ Header; } ;
typedef TYPE_2__ CONFIG_PAGE_RAID_PHYS_DISK_0 ;
typedef TYPE_3__ CONFIG_PAGE_HEADER ;
typedef int ActionData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,int ,int ,int ,int ,TYPE_2__*,int,int *,int*,int,int *,int *,int) ;
 int FUNC_2 (int,int ,int ,int ,TYPE_3__*,int *) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, struct mpt_standalone_disk *VAR_5, U8 *VAR_6)
{
 CONFIG_PAGE_HEADER VAR_7;
 CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_8;
 int VAR_9;
 U32 VAR_10;

 VAR_9 = FUNC_2(VAR_4, VAR_1,
     0, 0, &VAR_7, ((void*)0));
 if (VAR_9)
  return (VAR_9);
 if (VAR_7.PageVersion > VAR_2) {
  FUNC_3("Unsupported RAID physdisk page 0 version %d",
      VAR_7.PageVersion);
  return (VAR_0);
 }
 VAR_8 = FUNC_0(1, sizeof(CONFIG_PAGE_RAID_PHYS_DISK_0));
 VAR_8->Header.PageType = VAR_1;
 VAR_8->Header.PageNumber = 0;
 VAR_8->Header.PageLength = sizeof(CONFIG_PAGE_RAID_PHYS_DISK_0) /
     4;
 VAR_8->PhysDiskIOC = 0;
 VAR_8->PhysDiskBus = VAR_5->bus;
 VAR_8->PhysDiskID = VAR_5->target;


 VAR_9 = FUNC_1(VAR_4, VAR_3, 0, 0, 0, 0,
     VAR_8, sizeof(CONFIG_PAGE_RAID_PHYS_DISK_0), ((void*)0),
     &VAR_10, sizeof(VAR_10), ((void*)0), ((void*)0), 1);
 if (VAR_9)
  return (VAR_9);
 *VAR_6 = VAR_10 & 0xff;
 return (0);
}
