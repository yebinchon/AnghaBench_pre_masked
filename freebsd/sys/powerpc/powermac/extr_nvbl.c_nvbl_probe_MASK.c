
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
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 char VAR_3[8];
 phandle_t VAR_4;

 VAR_4 = FUNC_0("mac-io/backlight");

 if (VAR_4 == -1)
  return (VAR_0);

 if (FUNC_1(VAR_4, "backlight-control", &VAR_3, sizeof(VAR_3)) < 0)
  return (VAR_0);

 if ((FUNC_5(VAR_3, "mnca") != 0) ||
     FUNC_4(FUNC_2(VAR_2)) != VAR_1)
  return (VAR_0);

 FUNC_3(VAR_2, "PowerBook backlight for nVidia graphics");

 return (0);
}
