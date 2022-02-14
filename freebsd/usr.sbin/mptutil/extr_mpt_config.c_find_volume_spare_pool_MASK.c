
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pool_count ;
typedef int U8 ;
typedef int U32 ;
struct TYPE_10__ {int VolumeID; int VolumeBus; } ;
struct TYPE_8__ {int HotSparePool; } ;
struct TYPE_9__ {int NumActiveVolumes; TYPE_1__ VolumeSettings; TYPE_3__* RaidVolume; } ;
typedef TYPE_2__ CONFIG_PAGE_RAID_VOL_0 ;
typedef TYPE_3__ CONFIG_PAGE_IOC_2_RAID_VOL ;
typedef TYPE_2__ CONFIG_PAGE_IOC_2 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,char const*,int *,int *) ;
 int FUNC_4 (int,int ,int ,int ,int ,int ,int *,int ,int *,int *,int ,int *,int *,int ) ;
 TYPE_2__* FUNC_5 (int,int,int *) ;
 TYPE_2__* FUNC_6 (int,int ,int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,char const*) ;
 int FUNC_10 (char*,int,int ) ;

__attribute__((used)) static int
FUNC_11(int VAR_3, const char *VAR_4, int *VAR_5)
{
 CONFIG_PAGE_RAID_VOL_0 *VAR_6;
 CONFIG_PAGE_IOC_2 *VAR_7;
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_8;
 U8 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15[7];

 VAR_11 = FUNC_3(VAR_3, VAR_4, &VAR_9, &VAR_10);
 if (VAR_11) {
  FUNC_9(VAR_11, "Invalid volume %s", VAR_4);
  return (VAR_11);
 }

 VAR_6 = FUNC_6(VAR_3, VAR_9, VAR_10, ((void*)0));
 if (VAR_6 == ((void*)0))
  return (VAR_2);





 if ((VAR_6->VolumeSettings.HotSparePool & ~VAR_1) !=
     0) {
  *VAR_5 = 1 << (FUNC_1(VAR_6->VolumeSettings.HotSparePool &
      ~VAR_1) - 1);
  FUNC_2(VAR_6);
  return (0);
 }
 FUNC_2(VAR_6);





 VAR_7 = FUNC_5(VAR_3, 2, ((void*)0));
 if (VAR_7 == ((void*)0)) {
  VAR_11 = VAR_2;
  FUNC_8("Failed to fetch volume list");
  return (VAR_11);
 }
 FUNC_0(VAR_15, sizeof(VAR_15));
 VAR_8 = VAR_7->RaidVolume;
 for (VAR_12 = 0; VAR_12 < VAR_7->NumActiveVolumes; VAR_8++, VAR_12++) {
  VAR_6 = FUNC_6(VAR_3, VAR_8->VolumeBus, VAR_8->VolumeID, ((void*)0));
  if (VAR_6 == ((void*)0))
   return (VAR_2);
  for (VAR_13 = 0; VAR_13 < 7; VAR_13++)
   if (VAR_6->VolumeSettings.HotSparePool & (1 << (VAR_13 + 1)))
    VAR_15[VAR_13]++;
  FUNC_2(VAR_6);
 }
 FUNC_2(VAR_7);


 VAR_14 = 0;
 for (VAR_12 = 1; VAR_12 < 7; VAR_12++)
  if (VAR_15[VAR_12] < VAR_15[VAR_14])
   VAR_14 = VAR_12;
 VAR_14++;


 VAR_6 = FUNC_6(VAR_3, VAR_9, VAR_10, ((void*)0));
 if (VAR_6 == ((void*)0))
  return (VAR_11);
 VAR_6->VolumeSettings.HotSparePool |= (1 << VAR_14);
 VAR_11 = FUNC_4(VAR_3, VAR_0,
     VAR_9, VAR_10, 0, *(U32 *)&VAR_6->VolumeSettings, ((void*)0), 0,
     ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), 0);
 if (VAR_11) {
  FUNC_10("Failed to add spare pool %d to %s", VAR_14,
      FUNC_7(VAR_9, VAR_10));
  FUNC_2(VAR_6);
  return (VAR_11);
 }
 FUNC_2(VAR_6);

 *VAR_5 = (1 << VAR_14);
 return (0);
}
