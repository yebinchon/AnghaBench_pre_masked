
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mpt_drive_list {int dummy; } ;
typedef scalar_t__ U8 ;
struct TYPE_5__ {scalar_t__ State; } ;
struct TYPE_6__ {TYPE_1__ PhysDiskStatus; } ;
typedef TYPE_2__ CONFIG_PAGE_RAID_PHYS_DISK_0 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct mpt_drive_list*) ;
 scalar_t__ FUNC_3 (struct mpt_drive_list*,char*,scalar_t__*) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int,scalar_t__,int *) ;
 struct mpt_drive_list* FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__,int ,int ,scalar_t__,int ,int *,int ,int *,int *,int ,int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,char*,scalar_t__,char const*) ;
 int FUNC_10 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(char *VAR_3, U8 VAR_4, U8 VAR_5, const char *VAR_6)
{
 CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_7;
 struct mpt_drive_list *VAR_8;
 U8 VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_4(VAR_2);
 if (VAR_11 < 0) {
  VAR_10 = VAR_1;
  FUNC_8("mpt_open");
  return (VAR_10);
 }

 VAR_8 = FUNC_6(VAR_11);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_11);
  return (VAR_1);
 }

 if (FUNC_3(VAR_8, VAR_3, &VAR_9) < 0) {
  VAR_10 = VAR_1;
  FUNC_8("Failed to find drive %s", VAR_3);
  FUNC_0(VAR_11);
  return (VAR_10);
 }
 FUNC_2(VAR_8);


 VAR_7 = FUNC_5(VAR_11, VAR_9, ((void*)0));
 if (VAR_7 == ((void*)0)) {
  VAR_10 = VAR_1;
  FUNC_8("Failed to fetch info for drive %u", VAR_9);
  FUNC_0(VAR_11);
  return (VAR_10);
 }


 if (VAR_7->PhysDiskStatus.State == VAR_5) {
  FUNC_10("Drive %u is already in the desired state", VAR_9);
  FUNC_1(VAR_7);
  FUNC_0(VAR_11);
  return (VAR_0);
 }

 VAR_10 = FUNC_7(VAR_11, VAR_4, 0, 0, VAR_9, 0, ((void*)0), 0, ((void*)0),
     ((void*)0), 0, ((void*)0), ((void*)0), 0);
 if (VAR_10) {
  FUNC_9(VAR_10, "Failed to set drive %u to %s", VAR_9, VAR_6);
  FUNC_1(VAR_7);
  FUNC_0(VAR_11);
  return (VAR_10);
 }

 FUNC_1(VAR_7);
 FUNC_0(VAR_11);

 return (0);
}
