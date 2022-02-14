
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ final_status; struct TYPE_9__* context; } ;
typedef TYPE_1__ ranked_player_t ;
struct TYPE_10__ {int status; } ;
typedef scalar_t__ GR_STATUS ;
typedef TYPE_2__ GR_LOGIN ;


 int FUNC_0 (char*,TYPE_2__*,...) ;
 int VAR_0 ;



 scalar_t__ VAR_1 ;

 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,void*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ,void*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7( GR_LOGIN* VAR_10, void* VAR_11 )
{
 ranked_player_t* VAR_12;
 GR_STATUS VAR_13;
 GR_STATUS VAR_14;

 FUNC_6( VAR_10 != ((void*)0) );
 FUNC_6( VAR_11 != ((void*)0) );

 FUNC_0( "SV_RankUserCBF( %08X, %08X );\n", VAR_10, VAR_11 );

 VAR_12 = (ranked_player_t*)VAR_11;
 FUNC_6(VAR_12);
 FUNC_6( VAR_12->context );

 switch( VAR_10->status )
 {
  case 129:

   VAR_13 = FUNC_2
    (
     VAR_12->context,
     VAR_9,
     VAR_8,
     VAR_11,
     VAR_0
    );

   if( VAR_13 != VAR_1 )
   {
    FUNC_4( "SV_RankUserCBF: Expected GR_STATUS_PENDING "
     "from GRankJoinGameAsync, got %s",
     FUNC_5( VAR_13 ) );
   }
   break;
  case 130:
   FUNC_0( "SV_RankUserCBF: Got status %s\n",
    FUNC_5( VAR_10->status ) );
   VAR_12->final_status = VAR_5;
   break;
  case 131:
   FUNC_0( "SV_RankUserCBF: Got status %s\n",
    FUNC_5( VAR_10->status ) );
   VAR_12->final_status = VAR_2;
   break;
  case 128:
   FUNC_0( "SV_RankUserCBF: Got status %s\n",
    FUNC_5( VAR_10->status ) );
   VAR_12->final_status = VAR_6;
   break;
  default:
   FUNC_0( "SV_RankUserCBF: Unexpected status %s\n",
    FUNC_5( VAR_10->status ) );
   VAR_12->final_status = VAR_3;
   break;
 }

 if( VAR_12->final_status != VAR_4 )
 {

  VAR_14 = FUNC_1
   (
    VAR_12->context,
    0,
    VAR_7,
    (void*)VAR_12,
    VAR_0
   );

  if( VAR_14 != VAR_1 )
  {
   FUNC_4( "SV_RankUserCBF: Expected GR_STATUS_PENDING "
    "from GRankCleanupAsync, got %s",
    FUNC_5( VAR_14 ) );
   FUNC_3( VAR_12 );
  }
 }
}
