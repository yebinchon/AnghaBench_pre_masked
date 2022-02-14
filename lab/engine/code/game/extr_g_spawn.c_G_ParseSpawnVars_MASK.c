
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
typedef int keyname ;
typedef int com_token ;
struct TYPE_2__ {size_t numSpawnVars; void*** spawnVars; scalar_t__ numSpawnVarChars; } ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int) ;

qboolean FUNC_3( void ) {
 char VAR_5[VAR_1];
 char VAR_6[VAR_1];

 VAR_2.numSpawnVars = 0;
 VAR_2.numSpawnVarChars = 0;


 if ( !FUNC_2( VAR_6, sizeof( VAR_6 ) ) ) {

  return VAR_3;
 }
 if ( VAR_6[0] != '{' ) {
  FUNC_1( "G_ParseSpawnVars: found %s when expecting {",VAR_6 );
 }


 while ( 1 ) {

  if ( !FUNC_2( VAR_5, sizeof( VAR_5 ) ) ) {
   FUNC_1( "G_ParseSpawnVars: EOF without closing brace" );
  }

  if ( VAR_5[0] == '}' ) {
   break;
  }


  if ( !FUNC_2( VAR_6, sizeof( VAR_6 ) ) ) {
   FUNC_1( "G_ParseSpawnVars: EOF without closing brace" );
  }

  if ( VAR_6[0] == '}' ) {
   FUNC_1( "G_ParseSpawnVars: closing brace without data" );
  }
  if ( VAR_2.numSpawnVars == VAR_0 ) {
   FUNC_1( "G_ParseSpawnVars: MAX_SPAWN_VARS" );
  }
  VAR_2.spawnVars[ VAR_2.numSpawnVars ][0] = FUNC_0( VAR_5 );
  VAR_2.spawnVars[ VAR_2.numSpawnVars ][1] = FUNC_0( VAR_6 );
  VAR_2.numSpawnVars++;
 }

 return VAR_4;
}
