
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PageLength; } ;
struct volume_info {int VolumeID; int VolumeBus; TYPE_1__ Header; } ;
struct config_id_state {int target_id; struct volume_info* ioc2; int * list; struct volume_info* sdisks; int nsdisks; } ;
struct TYPE_4__ {int raid_type; int * name; } ;
typedef struct volume_info CONFIG_PAGE_RAID_VOL_0 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct volume_info*,int) ;
 struct volume_info* FUNC_1 (int,struct volume_info*,int,long,struct config_id_state*,int) ;
 struct volume_info* FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 long FUNC_4 (int ) ;
 int FUNC_5 (struct volume_info*) ;
 int VAR_4 ;
 int FUNC_6 (struct volume_info*) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 (int,int *,struct volume_info**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int) ;
 int FUNC_12 (int,int ,int ,int ,int ,int ,struct volume_info*,int,int *,int *,int ,int *,int *,int) ;
 struct volume_info* FUNC_13 (int,int,int *) ;
 int FUNC_14 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int,int,struct config_id_state*,char*,struct volume_info*) ;
 int FUNC_16 (long) ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_17 (int *,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,...) ;

__attribute__((used)) static int
FUNC_20(int VAR_9, char **VAR_10)
{
 CONFIG_PAGE_RAID_VOL_0 *VAR_11;
 struct config_id_state VAR_12;
 struct volume_info *VAR_13;
 long VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;




 if (VAR_9 < 2) {
  FUNC_19("create: volume type required");
  return (VAR_0);
 }

 VAR_17 = FUNC_10(VAR_5);
 if (VAR_17 < 0) {
  VAR_16 = VAR_4;
  FUNC_18("mpt_open");
  return (VAR_16);
 }


 VAR_20 = -1;
 for (VAR_18 = 0; VAR_8[VAR_18].name != ((void*)0); VAR_18++)
  if (FUNC_17(VAR_8[VAR_18].name, VAR_10[1]) == 0) {
   VAR_20 = VAR_8[VAR_18].raid_type;
   break;
  }

 if (VAR_20 == -1) {
  FUNC_19("Unknown or unsupported volume type %s", VAR_10[1]);
  FUNC_3(VAR_17);
  return (VAR_0);
 }


 VAR_7 = 2;



 VAR_19 = 0;
 VAR_21 = 0;
 VAR_14 = 64 * 1024;

 while ((VAR_15 = FUNC_7(VAR_9, VAR_10, "dqs:v")) != -1) {
  switch (VAR_15) {





  case 'q':
   VAR_19 = 1;
   break;
  case 's':
   VAR_14 = FUNC_4(VAR_6);
   if ((VAR_14 < 512) || (!FUNC_16(VAR_14))) {
    FUNC_19("Invalid stripe size %s", VAR_6);
    FUNC_3(VAR_17);
    return (VAR_0);
   }
   break;
  case 'v':
   VAR_21 = 1;
   break;
  case '?':
  default:
   FUNC_3(VAR_17);
   return (VAR_0);
  }
 }
 VAR_9 -= VAR_7;
 VAR_10 += VAR_7;


 VAR_12.ioc2 = FUNC_13(VAR_17, 2, ((void*)0));
 if (VAR_12.ioc2 == ((void*)0)) {
  VAR_16 = VAR_4;
  FUNC_18("Failed to read volume list");
  FUNC_3(VAR_17);
  return (VAR_16);
 }
 VAR_12.list = FUNC_11(VAR_17);
 if (VAR_12.list == ((void*)0)) {
  FUNC_3(VAR_17);
  return (VAR_4);
 }
 VAR_16 = FUNC_8(VAR_17, &VAR_12.nsdisks, &VAR_12.sdisks);
 if (VAR_16) {
  FUNC_18("Failed to fetch standalone disk list");
  FUNC_3(VAR_17);
  return (VAR_16);
 }
 VAR_12.target_id = 0xff;


 if (VAR_9 != 1) {
  FUNC_19("Exactly one drive list is required");
  FUNC_3(VAR_17);
  return (VAR_0);
 }
 VAR_13 = FUNC_2(1, sizeof(*VAR_13));
 if (VAR_13 == ((void*)0)) {
  FUNC_3(VAR_17);
  return (VAR_1);
 }
 VAR_16 = FUNC_15(VAR_17, VAR_20, &VAR_12, VAR_10[0], VAR_13);
 if (VAR_16) {
  FUNC_6(VAR_13);
  FUNC_3(VAR_17);
  return (VAR_16);
 }


 VAR_16 = FUNC_0(VAR_17, VAR_13, VAR_21);
 if (VAR_16) {
  FUNC_6(VAR_13);
  FUNC_3(VAR_17);
  return (VAR_16);
 }


 VAR_11 = FUNC_1(VAR_17, VAR_13, VAR_20, VAR_14, &VAR_12, VAR_21);
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_13);
  FUNC_3(VAR_17);
  return (VAR_4);
 }
 VAR_16 = FUNC_12(VAR_17, VAR_3, VAR_11->VolumeBus,
     VAR_11->VolumeID, 0, VAR_19 ? VAR_2 : 0,
     VAR_11, VAR_11->Header.PageLength * 4, ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), 1);
 if (VAR_16) {
  VAR_4 = VAR_16;
  FUNC_18("Failed to add volume");
  FUNC_6(VAR_13);
  FUNC_3(VAR_17);
  return (VAR_16);
 }




 FUNC_14(VAR_11->VolumeBus, VAR_11->VolumeID);


 FUNC_6(VAR_11);
 FUNC_6(VAR_13);
 FUNC_6(VAR_12.sdisks);
 FUNC_9(VAR_12.list);
 FUNC_6(VAR_12.ioc2);
 FUNC_3(VAR_17);

 return (0);
}
