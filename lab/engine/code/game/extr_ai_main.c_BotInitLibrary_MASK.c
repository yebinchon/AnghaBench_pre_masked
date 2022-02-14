
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {char* string; } ;
struct TYPE_3__ {int maxclients; } ;


 int FUNC_0 (char*,int,char*,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;

int FUNC_7(void) {
 char VAR_3[144];


 FUNC_0(VAR_3, sizeof(VAR_3), "%d", VAR_2.maxclients);
 FUNC_5("maxclients", VAR_3);
 FUNC_0(VAR_3, sizeof(VAR_3), "%d", VAR_0);
 FUNC_5("maxentities", VAR_3);

 FUNC_6("sv_mapChecksum", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("sv_mapChecksum", VAR_3);

 FUNC_6("max_aaslinks", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("max_aaslinks", VAR_3);

 FUNC_6("max_levelitems", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("max_levelitems", VAR_3);

 FUNC_6("g_gametype", VAR_3, sizeof(VAR_3));
 if (!FUNC_2(VAR_3)) FUNC_1(VAR_3, "0");
 FUNC_5("g_gametype", VAR_3);

 FUNC_5("bot_developer", VAR_1.string);
 FUNC_6("logfile", VAR_3, sizeof(VAR_3));
 FUNC_5("log", VAR_3);

 FUNC_6("bot_nochat", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("nochat", VAR_3);

 FUNC_6("bot_visualizejumppads", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("bot_visualizejumppads", VAR_3);

 FUNC_6("bot_forceclustering", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("forceclustering", VAR_3);

 FUNC_6("bot_forcereachability", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("forcereachability", VAR_3);

 FUNC_6("bot_forcewrite", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("forcewrite", VAR_3);

 FUNC_6("bot_aasoptimize", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("aasoptimize", VAR_3);

 FUNC_6("bot_saveroutingcache", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("saveroutingcache", VAR_3);

 FUNC_6("bot_reloadcharacters", VAR_3, sizeof(VAR_3));
 if (!FUNC_2(VAR_3)) FUNC_1(VAR_3, "0");
 FUNC_5("bot_reloadcharacters", VAR_3);

 FUNC_6("fs_basepath", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("basedir", VAR_3);

 FUNC_6("fs_game", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("gamedir", VAR_3);

 FUNC_6("fs_homepath", VAR_3, sizeof(VAR_3));
 if (FUNC_2(VAR_3)) FUNC_5("homedir", VAR_3);





 return FUNC_4();
}
