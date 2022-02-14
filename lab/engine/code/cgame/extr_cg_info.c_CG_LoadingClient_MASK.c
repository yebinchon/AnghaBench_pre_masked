
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int personality ;
typedef int model ;
struct TYPE_2__ {scalar_t__ gametype; } ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char const*,char*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,int) ;
 TYPE_1__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,char*) ;

void FUNC_10( int VAR_9 ) {
 const char *VAR_10;
 char *VAR_11;
 char VAR_12[VAR_4];
 char VAR_13[VAR_4];
 char VAR_14[VAR_4];

 VAR_10 = FUNC_0( VAR_0 + VAR_9 );

 if ( VAR_6 < VAR_3 ) {
  FUNC_5( VAR_13, FUNC_3( VAR_10, "model" ), sizeof( VAR_13 ) );
  VAR_11 = FUNC_6( VAR_13, '/' );
  if ( VAR_11 ) {
   *VAR_11++ = '\0';
  } else {
   VAR_11 = "default";
  }

  FUNC_2( VAR_14, VAR_4, "models/players/%s/icon_%s.tga", VAR_13, VAR_11 );

  VAR_7[VAR_6] = FUNC_7( VAR_14 );
  if ( !VAR_7[VAR_6] ) {
   FUNC_2( VAR_14, VAR_4, "models/players/characters/%s/icon_%s.tga", VAR_13, VAR_11 );
   VAR_7[VAR_6] = FUNC_7( VAR_14 );
  }
  if ( !VAR_7[VAR_6] ) {
   FUNC_2( VAR_14, VAR_4, "models/players/%s/icon_%s.tga", VAR_1, "default" );
   VAR_7[VAR_6] = FUNC_7( VAR_14 );
  }
  if ( VAR_7[VAR_6] ) {
   VAR_6++;
  }
 }

 FUNC_5( VAR_12, FUNC_3( VAR_10, "n" ), sizeof(VAR_12) );
 FUNC_4( VAR_12 );

 if( VAR_5.gametype == VAR_2 ) {
  FUNC_8( FUNC_9( "sound/player/announce/%s.wav", VAR_12 ), VAR_8 );
 }

 FUNC_1( VAR_12 );
}
