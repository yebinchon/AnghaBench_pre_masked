
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int model ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,char*,int) ;
 scalar_t__ FUNC_6 (int,char*,int *) ;
 int FUNC_7 (int *,char*,char*,int ) ;
 scalar_t__ FUNC_8 (char*) ;

void FUNC_9(void) {
 int VAR_21, VAR_22;
 char VAR_23[128];

 VAR_17 = FUNC_8("g_gametype");

 FUNC_7(&VAR_11, "bot_rocketjump", "1", 0);
 FUNC_7(&VAR_8, "bot_grapple", "0", 0);
 FUNC_7(&VAR_7, "bot_fastchat", "0", 0);
 FUNC_7(&VAR_9, "bot_nochat", "0", 0);
 FUNC_7(&VAR_12, "bot_testrchat", "0", 0);
 FUNC_7(&VAR_6, "bot_challenge", "0", 0);
 FUNC_7(&VAR_10, "bot_predictobstacles", "1", 0);
 FUNC_7(&VAR_16, "g_spSkill", "2", 0);

 if (VAR_17 == VAR_1) {
  if (FUNC_6(-1, "Red Flag", &VAR_15) < 0)
   FUNC_0(VAR_4, "CTF without Red Flag\n");
  if (FUNC_6(-1, "Blue Flag", &VAR_13) < 0)
   FUNC_0(VAR_4, "CTF without Blue Flag\n");
 }
 VAR_18 = 0;
 for (VAR_21 = FUNC_4(0); VAR_21; VAR_21 = FUNC_4(VAR_21)) {
  if (!FUNC_5(VAR_21, "model", VAR_23, sizeof(VAR_23))) continue;
  if (VAR_23[0] == '*') {
   VAR_22 = FUNC_3(VAR_23+1);
   if (VAR_22 > VAR_18)
    VAR_18 = VAR_22;
  }
 }

 FUNC_1();
}
