
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int,scalar_t__,int *,int ,scalar_t__*,int,int *) ;
 int FUNC_3 (int,char*,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(int VAR_6, char **VAR_7)
{
 uint16_t VAR_8;
 uint32_t VAR_9;
 int VAR_10, VAR_11;
 uint8_t VAR_12[4];

 if (VAR_6 != 3) {
  FUNC_7("locate: %s", VAR_6 > 3 ? "extra arguments" :
      "drive and state required");
  return (VAR_0);
 }

 if (FUNC_5(VAR_7[2], "on") == 0 || FUNC_5(VAR_7[2], "start") == 0)
  VAR_9 = VAR_1;
 else if (FUNC_5(VAR_7[2], "off") == 0 ||
     FUNC_5(VAR_7[2], "stop") == 0)
  VAR_9 = VAR_2;
 else {
  FUNC_7("locate: invalid state %s", VAR_7[2]);
  return (VAR_0);
 }

 VAR_11 = FUNC_4(VAR_5, VAR_3);
 if (VAR_11 < 0) {
  VAR_10 = VAR_4;
  FUNC_6("mfi_open");
  return (VAR_10);
 }

 VAR_10 = FUNC_3(VAR_11, VAR_7[1], &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_11);
  return (VAR_10);
 }


 FUNC_1(&VAR_12[0], VAR_8);
 VAR_12[2] = 0;
 VAR_12[3] = 0;
 if (FUNC_2(VAR_11, VAR_9, ((void*)0), 0, VAR_12, 4, ((void*)0)) < 0) {
  VAR_10 = VAR_4;
  FUNC_6("Failed to %s locate on drive %u",
      VAR_9 == VAR_1 ? "start" : "stop",
      VAR_8);
  FUNC_0(VAR_11);
  return (VAR_10);
 }
 FUNC_0(VAR_11);

 return (0);
}
