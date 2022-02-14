
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int,int ) ;
 void* FUNC_2 (char*,char*,int) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void** VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 TYPE_1__* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 char* FUNC_6 (char*,int) ;

void FUNC_7 (void)
{
 int VAR_40;

 FUNC_3 ();


 FUNC_2 ("dmflags", "0", VAR_3);
 FUNC_2 ("fraglimit", "20", VAR_3);
 FUNC_2 ("timelimit", "0", VAR_3);
 VAR_14 = FUNC_2 ("g_gametype", "0", VAR_3 | VAR_1 );
 FUNC_2 ("sv_keywords", "", VAR_3);
 VAR_19 = FUNC_2 ("mapname", "nomap", VAR_3 | VAR_2);
 VAR_27 = FUNC_2 ("sv_privateClients", "0", VAR_3);
 VAR_15 = FUNC_2 ("sv_hostname", "noname", VAR_3 | VAR_0 );
 VAR_23 = FUNC_2 ("sv_maxclients", "8", VAR_3 | VAR_1);

 VAR_30 = FUNC_2 ("sv_rateLimit", "1", VAR_0 | VAR_3 );
 VAR_25 = FUNC_2 ("sv_minRate", "0", VAR_0 | VAR_3 );
 VAR_25 = FUNC_2 ("sv_minRate", "0", VAR_0 | VAR_3 );
 VAR_22 = FUNC_2 ("sv_maxRate", "0", VAR_0 | VAR_3 );
 VAR_11 = FUNC_2("sv_dlRate", "100", VAR_0 | VAR_3);
 VAR_24 = FUNC_2 ("sv_minPing", "0", VAR_0 | VAR_3 );
 VAR_21 = FUNC_2 ("sv_maxPing", "0", VAR_0 | VAR_3 );
 VAR_12 = FUNC_2 ("sv_floodProtect", "1", VAR_0 | VAR_3 );


 FUNC_2 ("sv_cheats", "1", VAR_4 | VAR_2 );
 VAR_33 = FUNC_2 ("sv_serverid", "0", VAR_4 | VAR_2 );
 VAR_29 = FUNC_2 ("sv_pure", "1", VAR_4 );





 FUNC_2 ("sv_paks", "", VAR_4 | VAR_2 );
 FUNC_2 ("sv_pakNames", "", VAR_4 | VAR_2 );
 FUNC_2 ("sv_referencedPaks", "", VAR_4 | VAR_2 );
 FUNC_2 ("sv_referencedPakNames", "", VAR_4 | VAR_2 );


 VAR_31 = FUNC_2 ("rconPassword", "", VAR_5 );
 VAR_28 = FUNC_2 ("sv_privatePassword", "", VAR_5 );
 VAR_13 = FUNC_2 ("sv_fps", "20", VAR_5 );
 VAR_36 = FUNC_2 ("sv_timeout", "200", VAR_5 );
 VAR_39 = FUNC_2 ("sv_zombietime", "2", VAR_5 );
 FUNC_2 ("nextmap", "", VAR_5 );

 VAR_9 = FUNC_2 ("sv_allowDownload", "0", VAR_3);
 FUNC_2 ("sv_dlURL", "", VAR_3 | VAR_0);

 VAR_20[0] = FUNC_2("sv_master1", VAR_6, 0);
 VAR_20[1] = FUNC_2("sv_master2", "master.ioquake3.org", 0);
 for(VAR_40 = 2; VAR_40 < VAR_7; VAR_40++)
  VAR_20[VAR_40] = FUNC_2(FUNC_6("sv_master%d", VAR_40 + 1), "", VAR_0);

 VAR_32 = FUNC_2 ("sv_reconnectlimit", "3", 0);
 VAR_34 = FUNC_2 ("sv_showloss", "0", 0);
 VAR_26 = FUNC_2 ("sv_padPackets", "0", 0);
 VAR_16 = FUNC_2 ("sv_killserver", "0", 0);
 VAR_18 = FUNC_2 ("sv_mapChecksum", "", VAR_2);
 VAR_17 = FUNC_2 ("sv_lanForceRate", "1", VAR_0 );

 VAR_35 = FUNC_2 ("sv_strictAuth", "1", VAR_0 );

 VAR_10 = FUNC_2("sv_banFile", "serverbans.dat", VAR_0);


 FUNC_5();


 FUNC_4();


 FUNC_0("rehashbans\n");
}
