
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
struct TYPE_5__ {scalar_t__ is_foreign; } ;
struct TYPE_6__ {TYPE_1__ pd_type; } ;
struct TYPE_7__ {TYPE_2__ v; } ;
struct TYPE_8__ {TYPE_3__ ddf; } ;
struct mfi_pd_info {scalar_t__ fw_state; TYPE_4__ state; } ;
struct array_info {int drive_count; struct mfi_pd_info* drives; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;






 struct mfi_pd_info* FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (struct mfi_pd_info*) ;
 int FUNC_2 (int,char*,int*) ;
 scalar_t__ FUNC_3 (int,int,struct mfi_pd_info*,int *) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char**,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(int VAR_5, int VAR_6, char *VAR_7, struct array_info *VAR_8)
{
 struct mfi_pd_info *VAR_9;
 uint16_t VAR_10;
 char *VAR_11;
 u_int VAR_12;
 int VAR_13;

 VAR_11 = VAR_7;
 for (VAR_12 = 0; VAR_11 != ((void*)0); VAR_12++) {
  VAR_11 = FUNC_4(VAR_11, ',');
  if (VAR_11 != ((void*)0)) {
   VAR_11++;
   if (*VAR_11 == ',') {
    FUNC_7("Invalid drive list '%s'", VAR_7);
    return (VAR_0);
   }
  }
 }


 if (VAR_12 >= VAR_2) {
  FUNC_7("Too many drives for a single array: max is %d",
      VAR_2);
  return (VAR_0);
 }
 switch (VAR_6) {
 case 133:
 case 132:
  if (VAR_12 % 2 != 0) {
   FUNC_7("RAID1 and RAID10 require an even number of "
       "drives in each array");
   return (VAR_0);
  }
  break;
 case 131:
 case 130:
  if (VAR_12 < 3) {
   FUNC_7("RAID5 and RAID50 require at least 3 drives in "
       "each array");
   return (VAR_0);
  }
  break;
 case 129:
 case 128:
  if (VAR_12 < 4) {
   FUNC_7("RAID6 and RAID60 require at least 4 drives in "
       "each array");
   return (VAR_0);
  }
  break;
 }


 VAR_8->drives = FUNC_0(VAR_12, sizeof(struct mfi_pd_info));
 if (VAR_8->drives == ((void*)0)) {
  FUNC_7("malloc failed");
  return (VAR_1);
 }
 VAR_8->drive_count = VAR_12;
 for (VAR_9 = VAR_8->drives; (VAR_11 = FUNC_5(&VAR_7, ",")) != ((void*)0);
      VAR_9++) {
  VAR_13 = FUNC_2(VAR_5, VAR_11, &VAR_10);
  if (VAR_13) {
   FUNC_1(VAR_8->drives);
   VAR_8->drives = ((void*)0);
   return (VAR_13);
  }

  if (FUNC_3(VAR_5, VAR_10, VAR_9, ((void*)0)) < 0) {
   VAR_13 = VAR_4;
   FUNC_6("Failed to fetch drive info for drive %s", VAR_11);
   FUNC_1(VAR_8->drives);
   VAR_8->drives = ((void*)0);
   return (VAR_13);
  }

  if (VAR_9->fw_state != VAR_3) {
   FUNC_7("Drive %u is not available", VAR_10);
   FUNC_1(VAR_8->drives);
   VAR_8->drives = ((void*)0);
   return (VAR_0);
  }

  if (VAR_9->state.ddf.v.pd_type.is_foreign) {
   FUNC_7("Drive %u is foreign", VAR_10);
   FUNC_1(VAR_8->drives);
   VAR_8->drives = ((void*)0);
   return (VAR_0);
  }
 }

 return (0);
}
