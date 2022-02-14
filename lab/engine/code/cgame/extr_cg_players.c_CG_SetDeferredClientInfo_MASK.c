
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ team; void* deferred; int infoValid; int skinName; int modelName; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_8__ {int maxclients; scalar_t__ gametype; TYPE_1__* clientinfo; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static void FUNC_4( int VAR_3, clientInfo_t *VAR_4 ) {
 int VAR_5;
 clientInfo_t *VAR_6;



 for ( VAR_5 = 0 ; VAR_5 < VAR_1.maxclients ; VAR_5++ ) {
  VAR_6 = &VAR_1.clientinfo[ VAR_5 ];
  if ( !VAR_6->infoValid || VAR_6->deferred ) {
   continue;
  }
  if ( FUNC_3( VAR_4->skinName, VAR_6->skinName ) ||
    FUNC_3( VAR_4->modelName, VAR_6->modelName ) ||


    (VAR_1.gametype >= VAR_0 && VAR_4->team != VAR_6->team) ) {
   continue;
  }

  FUNC_1( VAR_3, VAR_4 );
  return;
 }


 if ( VAR_1.gametype >= VAR_0 ) {
  for ( VAR_5 = 0 ; VAR_5 < VAR_1.maxclients ; VAR_5++ ) {
   VAR_6 = &VAR_1.clientinfo[ VAR_5 ];
   if ( !VAR_6->infoValid || VAR_6->deferred ) {
    continue;
   }
   if ( FUNC_3( VAR_4->skinName, VAR_6->skinName ) ||
    (VAR_1.gametype >= VAR_0 && VAR_4->team != VAR_6->team) ) {
    continue;
   }
   VAR_4->deferred = VAR_2;
   FUNC_0( VAR_6, VAR_4 );
   return;
  }




  FUNC_1( VAR_3, VAR_4 );
  return;
 }


 for ( VAR_5 = 0 ; VAR_5 < VAR_1.maxclients ; VAR_5++ ) {
  VAR_6 = &VAR_1.clientinfo[ VAR_5 ];
  if ( !VAR_6->infoValid ) {
   continue;
  }

  VAR_4->deferred = VAR_2;
  FUNC_0( VAR_6, VAR_4 );
  return;
 }


 FUNC_2( "CG_SetDeferredClientInfo: no valid clients!\n" );

 FUNC_1( VAR_3, VAR_4 );
}
