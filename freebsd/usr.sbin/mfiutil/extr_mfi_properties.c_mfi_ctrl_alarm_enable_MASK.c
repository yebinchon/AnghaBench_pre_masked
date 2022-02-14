
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_ctrl_props {scalar_t__ alarm_enable; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int,struct mfi_ctrl_props*) ;
 int FUNC_3 (int,struct mfi_ctrl_props*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(int VAR_3, char **VAR_4)
{
 int VAR_5, VAR_6;
 struct mfi_ctrl_props VAR_7;

 if (VAR_3 > 2) {
  FUNC_6("mfi_ctrl_alarm_enable");
  return(-1);
 }

 VAR_6 = FUNC_4(VAR_2, VAR_0);
 if (VAR_6 < 0) {
  VAR_5 = VAR_1;
  FUNC_6("mfi_open");
  return (VAR_5);
 }

 VAR_5 = FUNC_2(VAR_6, &VAR_7);
 if ( VAR_5 < 0) {
  VAR_5 = VAR_1;
  FUNC_6("Failed to get controller properties");
  FUNC_1(VAR_6);
  return (VAR_5);
 }
 FUNC_5 ("controller alarm was : %s\n",
  (VAR_7.alarm_enable ? "enabled" : "disabled"));

 if (VAR_3 > 1) {
  VAR_7.alarm_enable = FUNC_0(VAR_4[VAR_3 - 1]);
  VAR_5 = FUNC_3(VAR_6, &VAR_7);
  if ( VAR_5 < 0) {
   VAR_5 = VAR_1;
   FUNC_6("Failed to set controller properties");
   FUNC_1(VAR_6);
   return (VAR_5);
  }

  VAR_5 = FUNC_2(VAR_6, &VAR_7);
  if ( VAR_5 < 0) {
   VAR_5 = VAR_1;
   FUNC_6("Failed to get controller properties");
   FUNC_1(VAR_6);
   return (VAR_5);
  }
 }
 FUNC_5 ("controller alarm was : %s\n",
  (VAR_7.alarm_enable ? "enabled" : "disabled"));
 return (0);
}
