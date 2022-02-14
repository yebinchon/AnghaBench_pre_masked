
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int time_t ;
struct mfi_pr_properties {scalar_t__ next_exec; scalar_t__ exec_freq; scalar_t__ op_mode; } ;
typedef int prop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int,int ,struct mfi_pr_properties*,int,int *,int ,int *) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (int,struct mfi_pr_properties*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 long FUNC_8 (char*,char**,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int
FUNC_12(int VAR_9, char **VAR_10)
{
 struct mfi_pr_properties VAR_11;
 long VAR_12;
 time_t VAR_13;
 int VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17, VAR_18;
 char *VAR_19;
 uint8_t VAR_20;

 VAR_18 = 0;
 VAR_17 = 0;
 if (VAR_9 < 2) {
  FUNC_11("patrol: command required");
  return (VAR_0);
 }
 if (FUNC_7(VAR_10[1], "auto") == 0) {
  VAR_20 = VAR_3;
  if (VAR_9 > 2) {
   if (FUNC_7(VAR_10[2], "continuously") == 0)
    VAR_18 = 0xffffffff;
   else {
    VAR_12 = FUNC_8(VAR_10[2], &VAR_19, 0);
    if (*VAR_19 != '\0') {
     FUNC_11("patrol: Invalid interval %s",
         VAR_10[2]);
     return (VAR_0);
    }
    VAR_18 = VAR_12;
   }
  }
  if (VAR_9 > 3) {
   VAR_12 = FUNC_8(VAR_10[3], &VAR_19, 0);
   if (*VAR_19 != '\0' || VAR_12 < 0) {
    FUNC_11("patrol: Invalid start time %s", VAR_10[3]);
    return (VAR_0);
   }
   VAR_17 = VAR_12;
  }
 } else if (FUNC_7(VAR_10[1], "manual") == 0)
  VAR_20 = VAR_5;
 else if (FUNC_7(VAR_10[1], "disable") == 0)
  VAR_20 = VAR_4;
 else {
  FUNC_11("patrol: Invalid command %s", VAR_10[1]);
  return (VAR_0);
 }

 VAR_15 = FUNC_4(VAR_8, VAR_6);
 if (VAR_15 < 0) {
  VAR_14 = VAR_7;
  FUNC_10("mfi_open");
  return (VAR_14);
 }

 VAR_14 = FUNC_5(VAR_15, &VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_15);
  return (VAR_14);
 }
 VAR_11.op_mode = VAR_20;
 if (VAR_20 == VAR_3) {
  if (VAR_9 > 2)
   VAR_11.exec_freq = VAR_18;
  if (VAR_9 > 3) {
   FUNC_9(&VAR_13);
   FUNC_3(VAR_15, &VAR_16);
   if (VAR_16 == 0) {
    FUNC_1(VAR_15);
    return (VAR_1);
   }
   VAR_11.next_exec = VAR_16 + VAR_17;
   FUNC_6("Starting next patrol read at %s",
       FUNC_0(VAR_13, VAR_16, VAR_11.next_exec));
  }
 }
 if (FUNC_2(VAR_15, VAR_2, &VAR_11,
     sizeof(VAR_11), ((void*)0), 0, ((void*)0)) < 0) {
  VAR_14 = VAR_7;
  FUNC_10("Failed to set patrol read properties");
  FUNC_1(VAR_15);
  return (VAR_14);
 }

 FUNC_1(VAR_15);

 return (0);
}
