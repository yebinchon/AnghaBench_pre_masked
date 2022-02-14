
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int mapname ;
typedef int expanded ;
struct TYPE_2__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (char*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void FUNC_12( void ) {
 char *VAR_9;
 char *VAR_10;
 qboolean VAR_11, VAR_12;
 char VAR_13[VAR_5];
 char VAR_14[VAR_5];

 VAR_10 = FUNC_0(1);
 if ( !VAR_10 ) {
  return;
 }



 FUNC_2 (VAR_13, sizeof(VAR_13), "maps/%s.bsp", VAR_10);
 if ( FUNC_7 (VAR_13, ((void*)0)) == -1 ) {
  FUNC_1 ("Can't find map %s\n", VAR_13);
  return;
 }


 FUNC_3 ("g_gametype", "0", VAR_1 | VAR_2 | VAR_0 );

 VAR_9 = FUNC_0(0);
 if( FUNC_9( VAR_9, "sp", 2 ) == 0 ) {
  FUNC_6( "g_gametype", VAR_4 );
  FUNC_6( "g_doWarmup", 0 );

  FUNC_5( "sv_maxclients", "8" );
  VAR_9 += 2;
  if (!FUNC_8( VAR_9, "devmap" ) ) {
   VAR_12 = VAR_7;
  } else {
   VAR_12 = VAR_6;
  }
  VAR_11 = VAR_7;
 }
 else {
  if ( !FUNC_8( VAR_9, "devmap" ) ) {
   VAR_12 = VAR_7;
   VAR_11 = VAR_7;
  } else {
   VAR_12 = VAR_6;
   VAR_11 = VAR_6;
  }
  if( VAR_8->integer == VAR_4 ) {
   FUNC_6( "g_gametype", VAR_3 );
  }
 }



 FUNC_10(VAR_14, VAR_10, sizeof(VAR_14));


 FUNC_11( VAR_14, VAR_11 );





 if ( VAR_12 ) {
  FUNC_4( "sv_cheats", "1" );
 } else {
  FUNC_4( "sv_cheats", "0" );
 }
}
