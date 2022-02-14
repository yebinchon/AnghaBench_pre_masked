
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int device_id; } ;
struct TYPE_4__ {TYPE_1__ v; } ;
struct mfi_pd_info {int encl_device_id; int slot_number; int encl_index; TYPE_2__ ref; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int,struct mfi_pd_info*,int *) ;
 int VAR_5 ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*,...) ;

const char *
FUNC_5(struct mfi_pd_info *VAR_6, uint16_t VAR_7, uint32_t VAR_8)
{
 struct mfi_pd_info VAR_9;
 static char VAR_10[16];
 char *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if ((VAR_8 & VAR_2) != 0 &&
     (VAR_4 & (VAR_1|VAR_0)) != 0)
  VAR_8 = VAR_4 & (VAR_1|VAR_0);

 VAR_10[0] = '\0';
 if (VAR_6 == ((void*)0) && VAR_8 & VAR_1) {

  if (VAR_7 == 0xffff)
   FUNC_3(VAR_10, sizeof(VAR_10), "MISSING");
  else
   FUNC_3(VAR_10, sizeof(VAR_10), "%2u", VAR_7);

  VAR_13 = FUNC_1(VAR_5, VAR_3);
  if (VAR_13 < 0) {
   FUNC_4("mfi_open");
   return (VAR_10);
  }


  if (FUNC_2(VAR_13, VAR_7, &VAR_9, ((void*)0)) < 0) {
   FUNC_4("Failed to fetch info for drive %2u", VAR_7);
   FUNC_0(VAR_13);
   return (VAR_10);
  }

  FUNC_0(VAR_13);
  VAR_6 = &VAR_9;
 }

 VAR_11 = VAR_10;
 VAR_14 = sizeof(VAR_10);
 if (VAR_8 & VAR_0) {
  if (VAR_7 == 0xffff)
   VAR_12 = FUNC_3(VAR_11, VAR_14, "MISSING");
  else
   VAR_12 = FUNC_3(VAR_11, VAR_14, "%2u", VAR_7);
  if (VAR_12 >= 0) {
   VAR_11 += VAR_12;
   VAR_14 -= VAR_12;
  }
 }
 if ((VAR_8 & (VAR_1|VAR_0)) ==
     (VAR_1|VAR_0) && VAR_14 >= 2) {
  *VAR_11++ = ' ';
  VAR_14--;
  *VAR_11 = '\0';
  VAR_14--;
 }
 if (VAR_8 & VAR_1) {
  if (VAR_6->encl_device_id == 0xffff)
   VAR_12 = FUNC_3(VAR_11, VAR_14, "S%u",
       VAR_6->slot_number);
  else if (VAR_6->encl_device_id == VAR_6->ref.v.device_id)
   VAR_12 = FUNC_3(VAR_11, VAR_14, "E%u",
       VAR_6->encl_index);
  else
   VAR_12 = FUNC_3(VAR_11, VAR_14, "E%u:S%u",
       VAR_6->encl_index, VAR_6->slot_number);
  if (VAR_12 >= 0) {
   VAR_11 += VAR_12;
   VAR_14 -= VAR_12;
  }
 }

 return (VAR_10);
}
