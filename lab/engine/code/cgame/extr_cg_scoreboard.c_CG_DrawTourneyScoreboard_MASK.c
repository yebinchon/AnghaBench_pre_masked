
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec4_t ;
struct TYPE_4__ {scalar_t__ team; char const* name; int score; int infoValid; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_6__ {int scoresRequestTime; int time; int * teamScores; } ;
struct TYPE_5__ {scalar_t__ gametype; TYPE_1__* clientinfo; } ;


 int FUNC_0 (int,char const*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int,int,char const*,int*,int ,int ,int,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int,...) ;

void FUNC_7( void ) {
 const char *VAR_11;
 vec4_t VAR_12;
 int VAR_13, VAR_14, VAR_15;
 clientInfo_t *VAR_16;
 int VAR_17;
 int VAR_18;


 if ( VAR_8.scoresRequestTime + 2000 < VAR_8.time ) {
  VAR_8.scoresRequestTime = VAR_8.time;
  FUNC_5( "score" );
 }


 VAR_12[0] = VAR_12[1] = VAR_12[2] = 0;
 VAR_12[3] = 1;
 FUNC_3( 0, 0, VAR_6, VAR_5, VAR_12 );

 VAR_12[0] = 1;
 VAR_12[1] = 1;
 VAR_12[2] = 1;
 VAR_12[3] = 1;


 VAR_11 = FUNC_1( VAR_0 );
 if ( !VAR_11[0] ) {
  VAR_11 = "Scoreboard";
 }


 FUNC_0( 8, VAR_11 );


 VAR_15 = VAR_8.time / 1000;
 VAR_13 = VAR_15 / 60;
 VAR_15 %= 60;
 VAR_14 = VAR_15 / 10;
 VAR_15 %= 10;
 VAR_11 = FUNC_6("%i:%i%i", VAR_13, VAR_14, VAR_15 );

 FUNC_0( 64, VAR_11 );




 VAR_17 = 160;
 if ( VAR_9.gametype >= VAR_3 ) {



  FUNC_2( 8, VAR_17, "Red Team", VAR_12, VAR_10, VAR_10, VAR_2, VAR_1, 0 );
  VAR_11 = FUNC_6("%i", VAR_8.teamScores[0] );
  FUNC_2( 632 - VAR_2 * FUNC_4(VAR_11), VAR_17, VAR_11, VAR_12, VAR_10, VAR_10, VAR_2, VAR_1, 0 );

  VAR_17 += 64;

  FUNC_2( 8, VAR_17, "Blue Team", VAR_12, VAR_10, VAR_10, VAR_2, VAR_1, 0 );
  VAR_11 = FUNC_6("%i", VAR_8.teamScores[1] );
  FUNC_2( 632 - VAR_2 * FUNC_4(VAR_11), VAR_17, VAR_11, VAR_12, VAR_10, VAR_10, VAR_2, VAR_1, 0 );
 } else {



  for ( VAR_18 = 0 ; VAR_18 < VAR_4 ; VAR_18++ ) {
   VAR_16 = &VAR_9.clientinfo[VAR_18];
   if ( !VAR_16->infoValid ) {
    continue;
   }
   if ( VAR_16->team != VAR_7 ) {
    continue;
   }

   FUNC_2( 8, VAR_17, VAR_16->name, VAR_12, VAR_10, VAR_10, VAR_2, VAR_1, 0 );
   VAR_11 = FUNC_6("%i", VAR_16->score );
   FUNC_2( 632 - VAR_2 * FUNC_4(VAR_11), VAR_17, VAR_11, VAR_12, VAR_10, VAR_10, VAR_2, VAR_1, 0 );
   VAR_17 += 64;
  }
 }


}
