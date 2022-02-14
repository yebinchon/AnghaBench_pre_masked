
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct mfi_bbu_properties {unsigned long learn_delay_interval; int auto_learn_mode; char bbu_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int,struct mfi_bbu_properties*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int,struct mfi_bbu_properties*,scalar_t__*) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 unsigned long FUNC_7 (char*,char**,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(int VAR_6, char **VAR_7)
{
 struct mfi_bbu_properties VAR_8;
 unsigned long VAR_9;
 uint8_t VAR_10;
 int VAR_11, VAR_12;
 char *VAR_13, *VAR_14;

 VAR_10 = VAR_2;
 VAR_11 = 0;

 if (VAR_6 != 3) {
  FUNC_9("bbu: property and value required");
  return (VAR_0);
 }

 VAR_12 = FUNC_3(VAR_5, VAR_3);
 if (VAR_12 < 0) {
  VAR_11 = VAR_4;
  FUNC_8("mfi_open");
  return (VAR_11);
 }

 if (FUNC_1(VAR_12, &VAR_8, &VAR_10) < 0) {
  VAR_11 = VAR_4;
  FUNC_8("Failed to get BBU properties");
  goto done;
 } else if (VAR_10 != VAR_2) {
  FUNC_9("Failed to get BBU properties: %s", FUNC_4(VAR_10));
  VAR_11 = VAR_1;
  goto done;
 }

 if (FUNC_5(VAR_7[1], "learn-delay") == 0) {
  VAR_9 = FUNC_7(VAR_7[2], &VAR_14, 10);
  if (FUNC_6(VAR_7[2]) == 0 || *VAR_14 != '\0' || VAR_9 > 255) {
   FUNC_9("Invalid learn delay '%s'", VAR_7[2]);
   VAR_11 = VAR_0;
   goto done;
  }

  VAR_8.learn_delay_interval = VAR_9;
 } else if (FUNC_5(VAR_7[1], "autolearn-mode") == 0) {
  VAR_13 = VAR_7[2];

  if (FUNC_5(VAR_7[2], "enable") == 0)
   VAR_8.auto_learn_mode = 0;
  else if (FUNC_5(VAR_7[2], "disable") == 0)
   VAR_8.auto_learn_mode = 1;
  else if (VAR_13[0] >= '0' && VAR_13[0] <= '2' && VAR_13[1] == '\0')
   VAR_8.auto_learn_mode = VAR_13[0] - '0';
  else {
   FUNC_9("Invalid mode '%s'", VAR_13);
   VAR_11 = VAR_0;
   goto done;
  }
 } else if (FUNC_5(VAR_7[1], "bbu-mode") == 0) {
  if (VAR_8.bbu_mode == 0) {
   FUNC_9("This BBU does not implement different modes");
   VAR_11 = VAR_0;
   goto done;
  }


  VAR_13 = VAR_7[2];
  if (VAR_13[0] < '1' || VAR_13[0] > '5' || VAR_13[1] != '\0') {
   FUNC_9("Invalid mode '%s'", VAR_13);
   VAR_11 = VAR_0;
   goto done;
  }

  VAR_8.bbu_mode = VAR_13[0] - '0';
 } else {
  FUNC_9("bbu: Invalid command '%s'", VAR_7[1]);
  VAR_11 = VAR_0;
  goto done;
 }

 if (FUNC_2(VAR_12, &VAR_8, &VAR_10) < 0) {
  VAR_11 = VAR_4;
  FUNC_8("Failed to set BBU properties");
  goto done;
 } else if (VAR_10 != VAR_2) {
  FUNC_9("Failed to set BBU properties: %s", FUNC_4(VAR_10));
  VAR_11 = VAR_1;
  goto done;
 }

done:
 FUNC_0(VAR_12);

 return (VAR_11);
}
