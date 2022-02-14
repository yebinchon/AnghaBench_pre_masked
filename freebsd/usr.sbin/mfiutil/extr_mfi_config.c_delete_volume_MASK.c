
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int ld; } ;
struct TYPE_4__ {TYPE_1__ properties; } ;
struct mfi_ld_info {TYPE_2__ ld_config; } ;
typedef int mbox ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int,int ,int *,int ,int *,int,int *) ;
 scalar_t__ FUNC_3 (int,int ,struct mfi_ld_info*,int *) ;
 scalar_t__ FUNC_4 (int,char*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,char**) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static int
FUNC_13(int VAR_7, char **VAR_8)
{
 struct mfi_ld_info VAR_9;
 int VAR_10, VAR_11;
 uint8_t VAR_12, VAR_13[4];





 if (VAR_7 > 1) {
  if (FUNC_10(VAR_8[1], "volume") == 0) {
   VAR_8++;
   VAR_7--;
  } else if (FUNC_10(VAR_8[1], "spare") == 0) {
   VAR_8++;
   VAR_7--;
   return (FUNC_9(VAR_7, VAR_8));
  }
 }

 if (VAR_7 != 2) {
  FUNC_12("delete volume: volume required");
  return (VAR_1);
 }

 VAR_11 = FUNC_5(VAR_6, VAR_4);
 if (VAR_11 < 0) {
  VAR_10 = VAR_5;
  FUNC_11("mfi_open");
  return (VAR_10);
 }

 if (!FUNC_6()) {
  FUNC_12("The current mfi(4) driver does not support "
      "configuration changes.");
  FUNC_0(VAR_11);
  return (VAR_2);
 }

 if (FUNC_4(VAR_11, VAR_8[1], &VAR_12) < 0) {
  VAR_10 = VAR_5;
  FUNC_11("Invalid volume %s", VAR_8[1]);
  FUNC_0(VAR_11);
  return (VAR_10);
 }

 if (FUNC_3(VAR_11, VAR_12, &VAR_9, ((void*)0)) < 0) {
  VAR_10 = VAR_5;
  FUNC_11("Failed to get info for volume %d", VAR_12);
  FUNC_0(VAR_11);
  return (VAR_10);
 }

 if (FUNC_7(VAR_11, VAR_12)) {
  FUNC_12("Volume %s is busy and cannot be deleted",
      FUNC_8(VAR_11, VAR_12));
  FUNC_0(VAR_11);
  return (VAR_0);
 }

 FUNC_1(VAR_13, &VAR_9.ld_config.properties.ld);
 if (FUNC_2(VAR_11, VAR_3, ((void*)0), 0, VAR_13,
     sizeof(VAR_13), ((void*)0)) < 0) {
  VAR_10 = VAR_5;
  FUNC_11("Failed to delete volume");
  FUNC_0(VAR_11);
  return (VAR_10);
 }

 FUNC_0(VAR_11);

 return (0);
}
