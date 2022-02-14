
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_5__ {int Settings; } ;
struct TYPE_6__ {TYPE_1__ VolumeSettings; } ;
typedef TYPE_2__ CONFIG_PAGE_RAID_VOL_0 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int,char*,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,int ,int ,int,int *,int ,int *,int *,int ,int *,int *,int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_5 (int,int ,int ,int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 char FUNC_8 (char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static int
FUNC_12(int VAR_4, char **VAR_5)
{
 CONFIG_PAGE_RAID_VOL_0 *VAR_6;
 U32 VAR_7, VAR_8;
 U8 VAR_9, VAR_10;
 char *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_4 != 3) {
  FUNC_11("volume cache: %s", VAR_4 > 3 ? "extra arguments" :
      "missing arguments");
  return (VAR_0);
 }

        for (VAR_11 = VAR_5[2]; *VAR_11 != '\0'; VAR_11++)
                *VAR_11 = FUNC_8(*VAR_11);
 if ((FUNC_6(VAR_5[2], "enable")) && (FUNC_6(VAR_5[2], "enabled")) &&
     (FUNC_6(VAR_5[2], "disable")) && (FUNC_6(VAR_5[2], "disabled"))) {
  FUNC_11("volume cache: invalid flag, must be 'enable' or 'disable'\n");
  return (VAR_0);
 }

 VAR_13 = FUNC_3(VAR_3);
 if (VAR_13 < 0) {
  VAR_12 = VAR_2;
  FUNC_9("mpt_open");
  return (VAR_12);
 }

 VAR_12 = FUNC_2(VAR_13, VAR_5[1], &VAR_9, &VAR_10);
 if (VAR_12) {
  FUNC_10(VAR_12, "Invalid volume: %s", VAR_5[1]);
  FUNC_0(VAR_13);
  return (VAR_12);
 }

 VAR_6 = FUNC_5(VAR_13, VAR_9, VAR_10, ((void*)0));
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_13);
  return (VAR_2);
 }

 VAR_7 = VAR_6->VolumeSettings.Settings;

 VAR_8 = VAR_7;
 if (FUNC_7(VAR_5[2], "enable", sizeof("enable")) == 0)
  VAR_8 |= 0x01;
 if (FUNC_7(VAR_5[2], "disable", sizeof("disable")) == 0)
  VAR_8 &= ~0x01;

 if (VAR_8 == VAR_7) {
  FUNC_11("volume cache unchanged");
  FUNC_1(VAR_6);
  FUNC_0(VAR_13);
  return (0);
 }

 VAR_6->VolumeSettings.Settings = VAR_8;
 VAR_12 = FUNC_4(VAR_13, VAR_1,
     VAR_9, VAR_10, 0, *(U32 *)&VAR_6->VolumeSettings, ((void*)0), 0,
     ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), 0);
 if (VAR_12)
  FUNC_10(VAR_12, "volume cache change failed");

 FUNC_0(VAR_13);
 return (VAR_12);
}
