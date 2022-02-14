
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct volume_info {int drive_count; struct drive_info* drives; } ;
struct drive_info {int * sdisk; int * info; } ;
struct config_id_state {int * sdisks; int nsdisks; int list; } ;
typedef int U8 ;


 int VAR_0 ;



 struct drive_info* FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int *) ;
 scalar_t__ FUNC_3 (char*,int *,int ,int*) ;
 int * FUNC_4 (int,int ,int *) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(int VAR_2, int VAR_3, struct config_id_state *VAR_4,
    char *VAR_5, struct volume_info *VAR_6)
{
 struct drive_info *VAR_7;
 U8 VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_9 = VAR_5;
 for (VAR_10 = 0; VAR_9 != ((void*)0); VAR_10++) {
  VAR_9 = FUNC_5(VAR_9, ',');
  if (VAR_9 != ((void*)0)) {
   VAR_9++;
   if (*VAR_9 == ',') {
    FUNC_8("Invalid drive list '%s'", VAR_5);
    return (VAR_0);
   }
  }
 }


 switch (VAR_3) {
 case 130:
  if (VAR_10 < 2) {
   FUNC_8("RAID0 requires at least 2 drives in each "
       "array");
   return (VAR_0);
  }
  break;
 case 129:
  if (VAR_10 != 2) {
   FUNC_8("RAID1 requires exactly 2 drives in each "
       "array");
   return (VAR_0);
  }
  break;
 case 128:
  if (VAR_10 < 3) {
   FUNC_8("RAID1E requires at least 3 drives in each "
       "array");
   return (VAR_0);
  }
  break;
 }


 VAR_6->drives = FUNC_0(VAR_10, sizeof(struct drive_info));
 VAR_6->drive_count = VAR_10;
 for (VAR_7 = VAR_6->drives; (VAR_9 = FUNC_6(&VAR_5, ",")) != ((void*)0);
      VAR_7++) {

  VAR_11 = FUNC_2(VAR_4->list, VAR_9, &VAR_8);
  if (VAR_11 == 0) {
   VAR_7->info = FUNC_4(VAR_2, VAR_8, ((void*)0));
   if (VAR_7->info == ((void*)0))
    return (VAR_1);
   continue;
  }


  if (FUNC_3(VAR_9, VAR_4->sdisks,
      VAR_4->nsdisks, &VAR_12) < 0) {
   VAR_11 = VAR_1;
   FUNC_7("Unable to lookup drive %s", VAR_9);
   return (VAR_11);
  }
  VAR_7->sdisk = &VAR_4->sdisks[VAR_12];


  if (FUNC_1(VAR_7->sdisk) < 0)
   return (VAR_1);
 }

 return (0);
}
