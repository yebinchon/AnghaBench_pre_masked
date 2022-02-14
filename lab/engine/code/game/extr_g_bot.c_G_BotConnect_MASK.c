
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int userinfo ;
typedef int qboolean ;
struct TYPE_3__ {int skill; int characterfile; } ;
typedef TYPE_1__ bot_settings_t ;


 int FUNC_0 (int,TYPE_1__*,int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,int) ;

qboolean FUNC_6( int VAR_3, qboolean VAR_4 ) {
 bot_settings_t VAR_5;
 char VAR_6[VAR_0];

 FUNC_5( VAR_3, VAR_6, sizeof(VAR_6) );

 FUNC_2( VAR_5.characterfile, FUNC_1( VAR_6, "characterfile" ), sizeof(VAR_5.characterfile) );
 VAR_5.skill = FUNC_3( FUNC_1( VAR_6, "skill" ) );

 if (!FUNC_0( VAR_3, &VAR_5, VAR_4 )) {
  FUNC_4( VAR_3, "BotAISetupClient failed" );
  return VAR_1;
 }

 return VAR_2;
}
