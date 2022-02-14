
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;
typedef int control ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,char**,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 char VAR_2[8];
 phandle_t VAR_3;

 VAR_3 = FUNC_0("mac-io/backlight");

 if (VAR_3 == -1)
  return (VAR_0);

 if (FUNC_1(VAR_3, "backlight-control", &VAR_2, sizeof(VAR_2)) < 0)
  return (VAR_0);

 if (FUNC_5(VAR_2, "ati") != 0 &&
     (FUNC_5(VAR_2, "mnca") != 0 ||
     FUNC_4(FUNC_2(VAR_1)) != 0x1002))
  return (VAR_0);

 FUNC_3(VAR_1, "PowerBook backlight for ATI graphics");

 return (0);
}
