
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int namesPtr ;
typedef int names ;
struct TYPE_4__ {char* stringData; int* stringOffsets; } ;
struct TYPE_6__ {TYPE_1__ gameState; } ;
struct TYPE_5__ {int clientNum; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const**,int) ;
 char* FUNC_1 (char const*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (void*,int,int,int ) ;

__attribute__((used)) static void FUNC_6( char *VAR_7, int VAR_8 )
{
 if( VAR_8 == 2 )
 {
  char VAR_9[VAR_3][VAR_4];
  const char *VAR_10[VAR_3];
  int VAR_11;
  int VAR_12;
  int VAR_13;
  const char *VAR_14;
  const char *VAR_15;


  VAR_14 = VAR_5.gameState.stringData + VAR_5.gameState.stringOffsets[VAR_1];
  VAR_12 = FUNC_4( FUNC_1( VAR_14, "sv_maxclients" ) );

  VAR_13 = 0;

  for( VAR_11 = 0; VAR_11 < VAR_12; VAR_11++ ) {
   if( VAR_11 == VAR_6.clientNum )
    continue;

   VAR_14 = VAR_5.gameState.stringData + VAR_5.gameState.stringOffsets[VAR_0+VAR_11];

   VAR_15 = FUNC_1( VAR_14, "n" );
   if( VAR_15[0] == '\0' )
    continue;
   FUNC_3( VAR_9[VAR_13], VAR_15, sizeof(VAR_9[VAR_13]) );
   FUNC_2( VAR_9[VAR_13] );

   VAR_10[VAR_13] = VAR_9[VAR_13];
   VAR_13++;
  }
  FUNC_5( (void*)VAR_10, VAR_13, sizeof( VAR_10[0] ), VAR_2 );

  FUNC_0( VAR_10, VAR_13 );
 }
}
