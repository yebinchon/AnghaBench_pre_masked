
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct mfi_pd_info {int ref; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int,scalar_t__,int *,int ,int *,int,int *) ;
 int FUNC_3 (int,char*,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int ,struct mfi_pd_info*,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char FUNC_7 (char) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(int VAR_6, char **VAR_7)
{
 struct mfi_pd_info VAR_8;
 uint32_t VAR_9;
 uint16_t VAR_10;
 uint8_t VAR_11[4];
 char *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_6 != 3) {
  FUNC_9("drive clear: %s", VAR_6 > 3 ? "extra arguments" :
      "drive and action requires");
  return (VAR_0);
 }

 for (VAR_12 = VAR_7[2]; *VAR_12 != '\0'; VAR_12++)
  *VAR_12 = FUNC_7(*VAR_12);
 if (FUNC_6(VAR_7[2], "start") == 0)
  VAR_9 = VAR_2;
 else if ((FUNC_6(VAR_7[2], "stop") == 0) || (FUNC_6(VAR_7[2], "abort") == 0))
  VAR_9 = VAR_1;
 else {
  FUNC_9("drive clear: invalid action, must be 'start' or 'stop'\n");
  return (VAR_0);
 }

 VAR_14 = FUNC_4(VAR_5, VAR_3);
 if (VAR_14 < 0) {
  VAR_13 = VAR_4;
  FUNC_8("mfi_open");
  return (VAR_13);
 }

 VAR_13 = FUNC_3(VAR_14, VAR_7[1], &VAR_10);
 if (VAR_13) {
  FUNC_0(VAR_14);
  return (VAR_13);
 }


 if (FUNC_5(VAR_14, VAR_10, &VAR_8, ((void*)0)) < 0) {
  VAR_13 = VAR_4;
  FUNC_8("Failed to fetch info for drive %u", VAR_10);
  FUNC_0(VAR_14);
  return (VAR_13);
 }

 FUNC_1(&VAR_11[0], &VAR_8.ref);
 if (FUNC_2(VAR_14, VAR_9, ((void*)0), 0, VAR_11, 4, ((void*)0)) < 0) {
  VAR_13 = VAR_4;
  FUNC_8("Failed to %s clear on drive %u",
      VAR_9 == VAR_2 ? "start" : "stop",
      VAR_10);
  FUNC_0(VAR_14);
  return (VAR_13);
 }

 FUNC_0(VAR_14);
 return (0);
}
