
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,char const**) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (char const*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
 const char *VAR_13;

 if (!FUNC_7("gc.packrefs", &VAR_13)) {
  if (VAR_13 && !FUNC_8(VAR_13, "notbare"))
   VAR_9 = -1;
  else
   VAR_9 = FUNC_2("gc.packrefs", VAR_13);
 }

 if (FUNC_0("gc.reflogexpire") &&
     FUNC_0("gc.reflogexpireunreachable"))
  VAR_11 = 0;

 FUNC_5("gc.aggressivewindow", &VAR_1);
 FUNC_5("gc.aggressivedepth", &VAR_0);
 FUNC_5("gc.auto", &VAR_5);
 FUNC_5("gc.autopacklimit", &VAR_4);
 FUNC_3("gc.autodetach", &VAR_3);
 FUNC_4("gc.pruneexpire", &VAR_10);
 FUNC_4("gc.worktreepruneexpire", &VAR_12);
 FUNC_4("gc.logexpiry", &VAR_6);

 FUNC_6("gc.bigpackthreshold", &VAR_2);
 FUNC_6("pack.deltacachesize", &VAR_8);

 FUNC_1(VAR_7, ((void*)0));
}
